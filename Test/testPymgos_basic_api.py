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

numAtoms  = MG.number_of_atoms()
numCarbon = 0

atoms = MG.get_all_atoms()

for i_atom in atoms:
    i_atom.residue_type()
    if( i_atom.type() == PyMGOS.AtomType.C_ATOM) :
        numCarbon += 1

print("PDB file  : ", pdbFilename )
print("# atom    : ", numAtoms    )
print("# carbon  : ", numCarbon   )

print("finished")
