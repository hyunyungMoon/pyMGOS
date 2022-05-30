// mgos_prog1.cpp 

#include "MolecularGeometry.h"
using namespace MGOS;

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    string pdbFilename = argv[1];
    double WATER_SIZE  = 1.4;
    cout << "For the Lee-Richards (accessible) model " << endl;
    cout << "            (solvent probe radius = 1.4)" << endl; 
    cout << endl;
    cout << "PDB file         : " << pdbFilename << endl;
    cout << endl;

    // load a PDB model and preprocess
    MolecularGeometry MG;
    MG.load( pdbFilename );
    MG.preprocess();
    

    // count the number of all atoms, boundary atoms, and buried atoms coressponding water molecule
    cout << "# atoms          : " << MG.number_of_atoms() << endl; 
    cout << endl;
    cout << "# boundary atoms : " << MG.number_of_boundary_atoms_in_Lee_Richards_model(WATER_SIZE) << endl;
    cout << "# buried atoms   : " << MG.number_of_buried_atoms_in_Lee_Richards_model(WATER_SIZE)   << endl;
    cout << endl;


    // compute the volume and boundary area of the Lee-Richards (accessible) model 
    MolecularMassProperty LRMass  = MG.compute_volume_and_area_of_Lee_Richards_model(WATER_SIZE);
    cout << "volume           : " << LRMass.volume() << endl;
    cout << "boundary area    : " << LRMass.area()   << endl;
    cout << endl;


    // compute voids of the Lee-Richards (accessible) model
    int i=1;
    MolecularVoidSet LRVoids  = MG.compute_voids_of_Lee_Richards_model( WATER_SIZE );
    cout << "# voids          : " << LRVoids.number_of_voids() << endl;
    cout << "            " << "vol." << "\t" << "area" << "\t" << "# atoms" << endl;        
    for (MolecularVoidSet::iterator i_void=LRVoids.begin(); i_void!=LRVoids.end(); ++i_void, ++i ) {
        MolecularVoid currVoid = *i_void;

        cout << "  void " << i << " : ";
        //cout.precision(3);
        cout << fixed << currVoid.volume()   << "\t";
        cout << fixed << currVoid.boundary_area()     << "\t";
        cout << currVoid.number_of_contributing_atoms() << endl;
    }
    cout << endl;


    // analyze the biggest void
    MolecularVoid biggestVoid = LRVoids.find_biggest_void();
    cout << "  atoms on the biggest void" << endl;
    i = 1;
    AtomPtrSet atoms = biggestVoid.contributing_atoms();
    cout << "     serial no." << "\t" << "area on void" << endl;
    for ( AtomPtrSet::iterator i_atom=atoms.begin(); i_atom!=atoms.end(); i_atom++, i++ ) {
        cout << "  " << i << "  ";
        cout << "atom " << i_atom->serial_number() << "\t    ";
        cout << fixed << biggestVoid.area_contributed_by_this_atom( *i_atom ) << "\t";
        cout << endl;
    }
    
    return 0;
}

