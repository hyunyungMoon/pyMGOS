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

WATER_SIZE = 1.4
channels = MG.compute_channels(WATER_SIZE, WATER_SIZE * 2.0)

print("# channels : ", channels.number_of_channels())
print()

if (channels.number_of_channels() > 0):
    bigChannel = channels.find_biggest_channel()
    print("Biggest Channel")
    print("  # gates              : " , bigChannel.number_of_gates())
    print("  # junctions          : " , bigChannel.number_of_junctions())
    print("  # handles            : " , bigChannel.number_of_handles())
    print("  # contributing atoms : " , bigChannel.number_of_contributing_atoms())
    atoms = bigChannel.contributing_atoms()

    for i_atom in atoms:
        print("ATOM  ", end="")
        print(i_atom.name(), end="  ")
        print(i_atom.serial_number(), end="  ")
        print(i_atom.residue_name_3_letters(), end="  ")
        print(i_atom.residue_sequence_number(), end="  ")
        print(i_atom.chain_ID(), end="  ")
        print()

###############################################################
print()
print()

MG = PyMGOS.MolecularGeometry()

MG.load(pdbFilename)
print("PDB loaded")
MG.preprocess(False, True, "", 'result.qtf')

WATER_SIZE = 1.4
voids = MG.compute_voids_of_Lee_Richards_model(WATER_SIZE)

print("# voids : ", voids.number_of_voids())
print()
for i_void in voids:
    print("# atoms  : ", i_void.number_of_contributing_atoms(), end="\t")
    print("volume   : ", i_void.volume(), end="\t")
    print("area.    : ", i_void.boundary_area(), end="\t")
    print("clearance: ", i_void.void_clearance(), end="\t")
    print()

print("finished")
