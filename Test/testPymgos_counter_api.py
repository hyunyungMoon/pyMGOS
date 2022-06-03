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

print("                    (s=solvent probe radius)")
print("          "
        + "\t"
        + "# boundary atoms"
        + "\t"
        + "# buried atoms")
print("VDW       "
        + "\t  ")
print(MG.number_of_boundary_atoms_in_van_der_Waals_model())
print("              ")
print(MG.number_of_buried_atoms_in_van_der_Waals_model())

for solventProbe in range(2, 22, 2):
    print("LR (s="+ str(solventProbe/10)+ ")"
            "\t  ")
    print(MG.number_of_boundary_atoms_in_Lee_Richards_model(solventProbe/10))
    print("              ")
    print(MG.number_of_buried_atoms_in_Lee_Richards_model(solventProbe/10))