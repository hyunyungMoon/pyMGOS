#ifdef PYMGOS

#include "MolecularGeometry.h"

using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularGeometry(py::module& m) {
    py::class_<MolecularGeometry>(m, "MolecularGeometry")
        .def(py::init<>())
        .def(py::init<const MolecularGeometry&>())

        .def("clear", &MolecularGeometry::clear, "Erases all contents in the MolecularGeometry object.")
        .def("load_atoms", &MolecularGeometry::load_atoms, "Loads atoms in a molecule.")
        .def("load", &MolecularGeometry::load, "Loads atoms in a molecule file.")

        .def("preprocess", py::overload_cast<>(&MolecularGeometry::preprocess), "Preprocesses the MolecularGeometry object.")
        .def("preprocess", py::overload_cast<const bool&, const bool&, const string&, const string&>(&MolecularGeometry::preprocess), "Preprocesses the MolecularGeometry object.")

        .def("elapsed_time", &MolecularGeometry::elapsed_time, "Gets the elapsed time of the latest executed function.")
        .def("get_all_atoms", &MolecularGeometry::get_all_atoms, "Get all atoms in the molecule.")
        .def("number_of_atoms", &MolecularGeometry::number_of_atoms, "Count the total number of atoms in the molecule.")
        .def("find_boundary_atoms_in_van_der_Waals_model", &MolecularGeometry::find_boundary_atoms_in_van_der_Waals_model, "Find the boundary atoms of the van der Waals model of the molecule.")
        .def("find_buried_atoms_in_van_der_Waals_model", &MolecularGeometry::find_buried_atoms_in_van_der_Waals_model, "Find the buried atoms in the van der Waals model of the molecule.")

        .def("find_first_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtr&>(&MolecularGeometry::find_first_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Find the atoms which are the first order neighbors of the given atom in the van der Waals model of the molecule.")
        .def("find_first_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtrSet&>(&MolecularGeometry::find_first_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Find the atoms which are the first order neighbors of the given atom in the van der Waals model of the molecule.")

        .def("find_second_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtr&>(&MolecularGeometry::find_second_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Find the atoms which are the second order neighbors of the given atom in the van der Waals model of the molecule.")
        .def("find_second_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtrSet&>(&MolecularGeometry::find_second_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Find the atoms which are the second order neighbors of the given atom in the van der Waals model of the molecule.")

        .def("number_of_boundary_atoms_in_van_der_Waals_model", &MolecularGeometry::number_of_boundary_atoms_in_van_der_Waals_model, "Count the number of the boundary atoms of the van der Waals model of the molecule.")
        .def("number_of_buried_atoms_in_van_der_Waals_model", &MolecularGeometry::number_of_buried_atoms_in_van_der_Waals_model, "Count the number of buried atoms in the van der Waals model of the molecule.")

        .def("number_of_first_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtr&>(&MolecularGeometry::number_of_first_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Count the number of the first order neighbor atoms of the given atom in the van der Waals model of the molecule.")
        .def("number_of_second_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtr&>(&MolecularGeometry::number_of_second_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Count the number of the first second neighbor atoms of the given atom in the van der Waals model of the molecule.")

        .def("number_of_first_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtrSet&>(&MolecularGeometry::number_of_first_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Count the number of the first order neighbor atoms of the given atom in the van der Waals model of the molecule.")
        .def("number_of_second_order_neighbor_atoms_in_van_der_Waals_model", py::overload_cast<const AtomPtrSet&>(&MolecularGeometry::number_of_second_order_neighbor_atoms_in_van_der_Waals_model, py::const_), "Count the number of the second order neighbor atoms of the given atom in the van der Waals model of the molecule.")

        .def("is_boundary_atom_of_van_der_Waals_model", &MolecularGeometry::is_boundary_atom_of_van_der_Waals_model, "Test if the atom is on the boundary of the van der Waals model of the molecule.")
        .def("is_buried_atom_van_der_Waals_model", &MolecularGeometry::is_buried_atom_van_der_Waals_model, "Test if the atom is buried in the van der Waals model of the molecule.")
        .def("are_atoms_adjacent_in_van_der_Waals_model", &MolecularGeometry::are_atoms_adjacent_in_van_der_Waals_model, "Test if two atoms are adjacent in the van der Waals model of the molecule.")
        .def("compute_volume_of_van_der_Waals_model", &MolecularGeometry::compute_volume_of_van_der_Waals_model, "Compute the volume of the van der Waals model of the molecule.")
        .def("compute_area_of_van_der_Waals_model", &MolecularGeometry::compute_area_of_van_der_Waals_model, "Compute the boundary area of the van der Waals model of the molecule.")
        .def("compute_volume_and_area_of_van_der_Waals_model", &MolecularGeometry::compute_volume_and_area_of_van_der_Waals_model, "Compute the mass property of the van der Waals model of the molecule.")
        .def("compute_voids_of_van_der_Waals_model", &MolecularGeometry::compute_voids_of_van_der_Waals_model, "Compute the voids in the van der Waals model of the molecule.")
        .def("find_boundary_atoms_in_Lee_Richards_model", &MolecularGeometry::find_boundary_atoms_in_Lee_Richards_model, "Find the boundary atoms of the Lee-Richards (accessible) model of the molecule.")
        .def("find_buried_atoms_in_Lee_Richards_model", &MolecularGeometry::find_buried_atoms_in_Lee_Richards_model, "Find the buried atoms in the Lee-Richards (accessible) model of the molecule.")

        .def("find_first_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtr&>(&MolecularGeometry::find_first_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Find the atoms which are the first order neighbors of the given atoms in the Lee-Richards (accessible) of the molecule.")
        .def("find_first_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtrSet&>(&MolecularGeometry::find_first_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Find the atoms which are the first order neighbors of the given atoms in the Lee-Richards (accessible) of the molecule.")

        .def("find_second_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtr&>(&MolecularGeometry::find_second_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Find the atoms which are the second order neighbors of the given atom in the Lee-Richards (accessible) model of the molecule.")
        .def("find_second_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtrSet&>(&MolecularGeometry::find_second_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Find the atoms which are the second order neighbors of the given atom in the Lee-Richards (accessible) model of the molecule.")

        .def("number_of_boundary_atoms_in_Lee_Richards_model", &MolecularGeometry::number_of_boundary_atoms_in_Lee_Richards_model, "Count the number of the boundary atoms of the Lee-Richards (accessible) model of the molecule.")
        .def("number_of_buried_atoms_in_Lee_Richards_model", &MolecularGeometry::number_of_buried_atoms_in_Lee_Richards_model, "Count the number of buried atoms in the Lee-Richards (accessible) model of the molecule.")

        .def("number_of_first_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtr&>(&MolecularGeometry::number_of_first_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Count the number of the first order neighbor atoms of the given atom in the Lee-Richards (accessible) model of the molecule.")
        .def("number_of_second_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtr&>(&MolecularGeometry::number_of_second_order_neighbor_atoms_in_Lee_Richards_model, py::const_), " Count the number of the first second neighbor atoms of the given atom in the Lee-Richards (accessible) model of the molecule.")
        .def("number_of_first_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtrSet&>(&MolecularGeometry::number_of_first_order_neighbor_atoms_in_Lee_Richards_model, py::const_), "Count the number of the first order neighbor atoms of the given atom in the Lee-Richards (accessible) model of the molecule.")
        .def("number_of_second_order_neighbor_atoms_in_Lee_Richards_model", py::overload_cast<const double&, const AtomPtrSet&>(&MolecularGeometry::number_of_second_order_neighbor_atoms_in_Lee_Richards_model, py::const_), " Count the number of the first second neighbor atoms of the given atom in the Lee-Richards (accessible) model of the molecule.")

        .def("is_boundary_atom_of_Lee_Richards_model", &MolecularGeometry::is_boundary_atom_of_Lee_Richards_model, "Test if the atom is on the boundary of the Lee-Richards (accessible) model of the molecule.")
        .def("is_buried_atom_of_Lee_Richards_model", &MolecularGeometry::is_buried_atom_of_Lee_Richards_model, "Test if the atom is buried in the Lee-Richards (accessible) model of the molecule.")
        .def("are_atoms_adjacent_in_Lee_Richards_model", &MolecularGeometry::are_atoms_adjacent_in_Lee_Richards_model, "Test if two atoms are adjacent in the Lee-Richards (accessible) model of the molecule.")
        .def("compute_volume_of_Lee_Richards_model", &MolecularGeometry::compute_volume_of_Lee_Richards_model, "Compute the volume of the Lee-Richards (accessible) model of the molecule.")
        .def("compute_area_of_Lee_Richards_model", &MolecularGeometry::compute_area_of_Lee_Richards_model, "Compute The boundary area of the Lee-Richards (accessible) model of the molecule.")
        .def("compute_volume_and_area_of_Lee_Richards_model", &MolecularGeometry::compute_volume_and_area_of_Lee_Richards_model, "Compute the mass property of the Lee-Richards (accessible) model of the molecule.")
        .def("compute_voids_of_Lee_Richards_model", &MolecularGeometry::compute_voids_of_Lee_Richards_model, "Compute the voids in the Lee-Richards (accessible) model of the molecule.")
        .def("compute_channels", &MolecularGeometry::compute_channels, "Compute the channels in the molecule.")
        .def("compute_pockets", &MolecularGeometry::compute_pockets, "Compute the pockets in the molecule.");
}

#endif