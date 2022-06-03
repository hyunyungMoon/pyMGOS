import os, sys
libPath = os.getcwd() + str("\lib\Release")
sys.path.insert(0, libPath)
print(libPath)

import PyMGOS

pdbFilename = "C:/code/PyMGOS/data/1AOJ.pdb"

MG = PyMGOS.MolecularGeometry()


MG.load(pdbFilename)
print("PDB loaded")
MG.preprocess(False, True, "", 'result.qtf')

WATER_SIZE  = 1.4
LRVoids  = MG.compute_voids_of_Lee_Richards_model( WATER_SIZE )
print("            ", "vol.", "   ", "area", "   ", "# atoms")
for i in range(LRVoids.number_of_voids()):
    currVoid = LRVoids.i_th_void( i )
    print("  void {0: >2} : ".format(i+1), end="")
    print("{:.3f}\t {:.3f}\t {} ".format(currVoid.volume(), currVoid.boundary_area(), currVoid.number_of_contributing_atoms()))