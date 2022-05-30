// mgos_locator_api.cpp 

#include "MolecularGeometry.h"
using namespace MGOS;

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    string pdbFilename = argv[1];
    double WATER_SIZE  = 1.4;

    MolecularGeometry MG;
    MG.load( pdbFilename );
    MG.preprocess();

    int numCarbon   = 0;
    int numNitrogen = 0;
    int numOxygen   = 0;
    AtomPtrSet boundaryAtoms = MG.find_buried_atoms_in_Lee_Richards_model(WATER_SIZE);
    for ( AtomPtrSet::iterator i_atom=boundaryAtoms.begin(); i_atom!=boundaryAtoms.end(); ++i_atom ) {
        switch ( i_atom->type() ) {
        case C_ATOM:
            numCarbon++; break;
        case N_ATOM:
            numNitrogen++; break;
        case O_ATOM:
            numOxygen++; break;
        }
    }

    cout << "PDB file  : " << pdbFilename << endl;
    cout << "For the Lee-Richards (accessible) model " << endl;
    cout << "            (solvent probe radius = " << WATER_SIZE << ")" << endl; 
    cout << "# atom          : " << MG.number_of_atoms() << endl;
    cout << "# boundary atom : " << boundaryAtoms.size() << endl;
    cout << "    # carbon    : " << numCarbon            << endl;
    cout << "    # nitrogen  : " << numNitrogen          << endl;
    cout << "    # oxygen    : " << numOxygen            << endl;
    
    return 0;
}

