// mgos_basic_api.cpp 

#include "MolecularGeometry.h"
using namespace MGOS;

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    string pdbFilename = argv[1];

    MolecularGeometry MG;
    MG.load( pdbFilename );
    MG.preprocess();

    int numAtoms  = MG.number_of_atoms();
    int numCarbon = 0;

    AtomPtrSet atoms = MG.get_all_atoms();
    for ( AtomPtrSet::iterator i_atom=atoms.begin(); i_atom!=atoms.end(); ++i_atom ) {
        if ( i_atom->type() == C_ATOM ) {
            numCarbon++;
        }
    }

    cout << "PDB file  : " << pdbFilename << endl;
    cout << "# atom    : " << numAtoms    << endl;
    cout << "# carbon  : " << numCarbon   << endl;
    
    return 0;
}

