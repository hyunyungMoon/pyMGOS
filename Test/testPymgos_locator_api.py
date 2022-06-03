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
boundaryAtoms = MG.find_buried_atoms_in_Lee_Richards_model(WATER_SIZE)

numCarbon   = 0
numNitrogen = 0
numOxygen   = 0

for i_atom in boundaryAtoms:
    if( i_atom.type() == PyMGOS.AtomType.C_ATOM ):
        numCarbon += 1 
    elif( i_atom.type() == PyMGOS.AtomType.N_ATOM ):
        numNitrogen += 1
    elif( i_atom.type() == PyMGOS.AtomType.O_ATOM ):
        numOxygen += 1
    else:
        pass

print("PDB file  : ", pdbFilename )
print("For the Lee-Richards (accessible) model ")
print("            (solvent probe radius = ", WATER_SIZE, ")") 
print("# atom          : ", MG.number_of_atoms())
print("# boundary atom : ", boundaryAtoms.size())
print("    # carbon    : ", numCarbon           )
print("    # nitrogen  : ", numNitrogen         )
print("    # oxygen    : ", numOxygen           )