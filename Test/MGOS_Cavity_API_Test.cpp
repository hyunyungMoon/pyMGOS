#include "MolecularGeometry.h"
using namespace MGOS;

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    string pdbFilename = argv[1];
    double WATER_SIZE = 1.4;

    MolecularGeometry MG;
    MG.load(pdbFilename);

    cout << "PDB loaded" << endl;

    MG.preprocess();


    MolecularChannelSet channels = MG.compute_channels(WATER_SIZE, WATER_SIZE * 2.0);
    cout << "# channels : " << channels.number_of_channels() << endl;
    cout << endl;

    if (channels.number_of_channels() > 0)
    {
        MolecularChannel bigChannel = channels.find_biggest_channel();
        cout << "Biggest Channel" << endl;
        cout << "  # gates              : " << bigChannel.number_of_gates() << endl;
        cout << "  # junctions          : " << bigChannel.number_of_junctions() << endl;
        cout << "  # handles            : " << bigChannel.number_of_handles() << endl;
        cout << "  # contributing atoms : " << bigChannel.number_of_contributing_atoms() << endl;
        AtomPtrSet  atoms = bigChannel.contributing_atoms();
        for (AtomPtrSet::iterator i_atom = atoms.begin(); i_atom != atoms.end(); ++i_atom) {
            cout << "ATOM  ";
            cout << i_atom->name() << "  ";
            cout << i_atom->serial_number() << "  ";
            cout << i_atom->residue_name_3_letters() << "  ";
            cout << i_atom->residue_sequence_number() << "  ";
            cout << i_atom->chain_ID() << "  ";
            cout << endl;
        }
    }

    return 0;
}
