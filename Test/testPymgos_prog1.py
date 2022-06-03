import os, sys
libPath = os.getcwd() + str("\lib\Release")
sys.path.insert(0, libPath)
print(libPath)

import PyMGOS

pdbFilename = "C:/code/PyMGOS/data/1AOJ.pdb"
WATER_SIZE  = 1.4

print("For the Lee-Richards (accessible) model ")
print("            (solvent probe radius = 1.4)") 
print()
print("PDB file         : ", pdbFilename)
print()

MG = PyMGOS.MolecularGeometry()
MG.load(pdbFilename)
print("PDB loaded")
MG.preprocess(False, True, "", 'result.qtf')


print("# atoms          : ", MG.number_of_atoms()) 
print()
print("# boundary atoms : ", MG.number_of_boundary_atoms_in_Lee_Richards_model(WATER_SIZE))
print("# buried atoms   : ", MG.number_of_buried_atoms_in_Lee_Richards_model(WATER_SIZE)  )
print()

LRMass  = MG.compute_volume_and_area_of_Lee_Richards_model(WATER_SIZE)
print("volume           : ", LRMass.volume())
print("boundary area    : ", LRMass.area()  )
print()

LRVoids  = MG.compute_voids_of_Lee_Richards_model( WATER_SIZE )
print("# voids          : ", LRVoids.number_of_voids())
print("            vol.\tarea\t# atoms")  
i = 1

for currVoid in LRVoids:
    print("  void ", i," : ", end="")
    print("{:.3f}\t {:.3f}\t {} ".format(currVoid.volume(), currVoid.boundary_area(), currVoid.number_of_contributing_atoms()))
    i += 1

biggestVoid = LRVoids.find_biggest_void()
print("  atoms on the biggest void")
i = 1
atoms = biggestVoid.contributing_atoms()
print("     serial no.\tarea on void")
for i_atom in atoms:
    print("  ", i, "  atom ", i_atom.serial_number(), "\t    ", end="")
    print(biggestVoid.area_contributed_by_this_atom( i_atom ), "\t")
