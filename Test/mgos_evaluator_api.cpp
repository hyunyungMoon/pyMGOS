// mgos_evaluator_api.cpp 

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


    MolecularVoidSet LRVoids  = MG.compute_voids_of_Lee_Richards_model( WATER_SIZE );
    cout << "            " << "vol." << "   " << "area" << "   " << "# atoms" << endl;        
    for (int i=0; i<LRVoids.number_of_voids(); ++i ) {
        MolecularVoid currVoid = LRVoids.i_th_void( i );

        cout << "  void ";
        cout.width(2);
        cout << i+1 << " : ";
        cout.precision(3);
        cout << fixed << currVoid.volume()   << "\t ";
        cout << fixed << currVoid.boundary_area()     << "\t ";
        cout << currVoid.number_of_contributing_atoms() << endl;
    }
    
    return 0;
}

