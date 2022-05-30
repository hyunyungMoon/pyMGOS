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
    
    
#MG.load_atoms(list atom)
#MG.load(string filename)
print(MG.elapsed_time())  #double
atom_ptr_set = MG.get_all_atoms()
print(MG.number_of_atoms()) #int


atom_ptr_set1 = MG.find_boundary_atoms_in_van_der_Waals_model()
atom_ptr_set2 = MG.find_buried_atoms_in_van_der_Waals_model()

#atom_ptr_set3 = MG.find_first_order_neighbor_atoms_in_van_der_Waals_model(AtomPtr)
#atom_ptr_set4 = MG.find_first_order_neighbor_atoms_in_van_der_Waals_model(AtomPtrSet)

#BUG: set1 => dead      /  set2 => run ?
atom_ptr_set4 = MG.find_first_order_neighbor_atoms_in_van_der_Waals_model(atom_ptr_set2)

#atom_ptr_set = MG.find_second_order_neighbor_atoms_in_van_der_Waals_model(AtomPtr)
#atom_ptr_set = MG.find_second_order_neighbor_atoms_in_van_der_Waals_model(AtomPtrSet)
atom_ptr_set = MG.find_second_order_neighbor_atoms_in_van_der_Waals_model(atom_ptr_set2)

print(MG.number_of_boundary_atoms_in_van_der_Waals_model()) #int
print(MG.number_of_buried_atoms_in_van_der_Waals_model()) #int

#print(MG.number_of_first_order_neighbor_atoms_in_van_der_Waals_model(AtomPtr)) #int
#print(MG.number_of_second_order_neighbor_atoms_in_van_der_Waals_model(AtomPtr)) #int 

# print(MG.number_of_first_order_neighbor_atoms_in_van_der_Waals_model(AtomPtrSet)) #int
# print(MG.number_of_second_order_neighbor_atoms_in_van_der_Waals_model(AtomPtrSet)) #int
print(MG.number_of_first_order_neighbor_atoms_in_van_der_Waals_model(atom_ptr_set2)) #int
print(MG.number_of_second_order_neighbor_atoms_in_van_der_Waals_model(atom_ptr_set2)) #int

#print(MG.is_boundary_atom_of_van_der_Waals_model(AtomPtr)) #bool
#print(MG.is_buried_atom_van_der_Waals_model(AtomPtr)) #bool
#print(MG.are_atoms_adjacent_in_van_der_Waals_model(AtomPtr, AtomPtr)) #bool

# BUG: dead  
#print(MG.compute_volume_of_van_der_Waals_model()) #double    
#print(MG.compute_area_of_van_der_Waals_model()) #double      

# BUG: dead  
#molecular_mass_property = MG.compute_volume_and_area_of_van_der_Waals_model()
molecular_void_set = MG.compute_voids_of_van_der_Waals_model()

atom_ptr_list = list()

for atom_ptr in atom_ptr_set1:
    atom_ptr_list.append(atom_ptr)

print(MG.find_boundary_atoms_in_Lee_Richards_model(1.0).size())
print(MG.find_buried_atoms_in_Lee_Richards_model(1.0).size())

print(MG.find_first_order_neighbor_atoms_in_Lee_Richards_model(1.0, MG.get_all_atoms()).size())
print(MG.find_second_order_neighbor_atoms_in_Lee_Richards_model(1.0, MG.get_all_atoms()).size())

print(MG.number_of_boundary_atoms_in_Lee_Richards_model(1.0))
print(MG.number_of_buried_atoms_in_Lee_Richards_model(1.0))

print(MG.number_of_first_order_neighbor_atoms_in_Lee_Richards_model(1.0, MG.get_all_atoms()))
print(MG.number_of_second_order_neighbor_atoms_in_Lee_Richards_model(1.0, MG.get_all_atoms()))


atom_ptr = atom_ptr_list[0]

#BUG:: parameter atom_ptr?
print(MG.is_boundary_atom_of_Lee_Richards_model(1.0, atom_ptr))
print(MG.is_buried_atom_of_Lee_Richards_model(1.0, atom_ptr))
print(MG.are_atoms_adjacent_in_Lee_Richards_model(1.0, atom_ptr, atom_ptr))


print(MG.compute_volume_of_Lee_Richards_model(1.0))
print(MG.compute_area_of_Lee_Richards_model(1.0))
print(MG.compute_volume_and_area_of_Lee_Richards_model(1.0).volume(), MG.compute_volume_and_area_of_Lee_Richards_model(1.0).area())
print(MG.compute_voids_of_Lee_Richards_model(1.0).size())
print(MG.compute_channels(1.0, 1.0).size())

molecular_channel_set = MG.compute_channels(1.0, 1.0)
for channel in molecular_channel_set:
    print(id(channel))

print(MG.compute_pockets(1.0, 1.0).size())



MG.clear()





print("finished")




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


