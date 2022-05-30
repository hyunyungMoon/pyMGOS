// mgos_verifier_api.cpp 

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

    int i = 0;
    cout << "atom no." << "\t" << "VDW   " << "\t" << "LR (" << WATER_SIZE << ")" << endl;

    AtomPtrSet atoms = MG.get_all_atoms();
    for ( AtomPtrSet::iterator i_atom=atoms.begin(); i_atom!=atoms.end(); ++i_atom, ++i ) {
        AtomPtr atom = *i_atom;

        cout << "atom  " << atom.serial_number() << "\t\t";
        if ( MG.is_boundary_atom_of_van_der_Waals_model(atom) ) {
            cout << "boundary";
        }
        else {
            cout << "buried";
        }
        cout << "\t";

        if ( MG.is_boundary_atom_of_Lee_Richards_model(WATER_SIZE, atom) ) {
            cout << "boundary";
        }
        else {
            cout << "buried";
        }
        cout << endl;
    }
    
    return 0;
}

