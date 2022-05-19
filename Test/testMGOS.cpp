// mgos_counter_api.cpp

#include "MolecularGeometry.h"
using namespace MGOS;

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    string pdbFilename = argv[1];

    MolecularGeometry MG;
    MG.load(pdbFilename);
    MG.preprocess();

    cout << "                    (s=solvent probe radius)" << endl;
    cout << "          "
         << "\t"
         << "# boundary atoms"
         << "\t"
         << "# buried atoms" << endl;
    cout << "VDW       "
         << "\t  ";
    cout << MG.number_of_boundary_atoms_in_van_der_Waals_model();
    cout << "              ";
    cout << MG.number_of_buried_atoms_in_van_der_Waals_model() << endl;

    for (double solventProbe = 0.2; solventProbe <= 2.0; solventProbe += 0.2) {
        cout.precision(1);
        cout << "LR (s=" << fixed << solventProbe << ")"
             << "\t  ";
        cout << MG.number_of_boundary_atoms_in_Lee_Richards_model(solventProbe);
        cout << "              ";
        cout << MG.number_of_buried_atoms_in_Lee_Richards_model(solventProbe);
        cout << endl;
    }

    return 0;
}
