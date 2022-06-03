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

i = 0
print("atom no.\tVDW   \tLR (", WATER_SIZE, ")")
atoms = MG.get_all_atoms()

for atom in atoms:
    print("atom  ", atom.serial_number(), "\t\t", end="")
    if ( MG.is_boundary_atom_of_van_der_Waals_model(atom) ):
        print("boundary", end="")
    else:
        print("buried", end="")
    print("\t", end="")

    if ( MG.is_boundary_atom_of_Lee_Richards_model(WATER_SIZE, atom) ):
        print("boundary", end="")
    else:
        print("buried", end="")
    print()