import os, sys
libPath = os.getcwd() + str("\lib\Release")
sys.path.insert(0, libPath)
print(libPath)

import PyMGOS

pdbFilename = "C:/Users/user/Desktop/PyMGOS/data/1AOJ.pdb"

MG = PyMGOS.MolecularGeometry()

MG.load(pdbFilename);
# MG.preprocess();
MG.preprocess(False, True, "", 'result.qtf');

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
    
MG.elapsed_time()
MG.get_all_atoms()


# point = PyMGOS.Point3d(1.0, 2.0, 3.0)

# # get coordinates
# print("x: ", point.x())
# print("y: ", point.y())
# print("z: ", point.z())

# # set coordinates
# point.x(1.5)
# point.y(2.5)
# point.z(3.5)

# print()

# # get coordinates
# print("x: ", point.x())
# print("y: ", point.y())
# print("z: ", point.z())


# sphere = PyMGOS.Sphere3d(1.0, 2.0, 3.0, 4.0)

# print("center: ", sphere.center())
# print("center: ", sphere.center(point))
# print("radius: ", sphere.radius())
# print("radius: ", sphere.radius(1.0))
# print("radius: ", sphere.radius())

# sphere2 = PyMGOS.Sphere3d(1.5, 2.5, 3.5, 1.0)


# print(sphere2.intersection_volume(sphere))
# print(sphere2.intersection_area(sphere))


# sphere3 = PyMGOS.Sphere3d(1.5, 2.5, 3.5, 1.0)

# print(sphere2 == sphere3)
# print(sphere2 != sphere3)



pass

