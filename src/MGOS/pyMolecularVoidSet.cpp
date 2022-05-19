#ifdef PYMGOS

#include "MolecularVoidSet.h"
#include "VoidSetInAtomSet.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularVoidSet(py::module& m) {
    py::class_<MolecularVoidSet>(m, "MolecularVoidSet")
        // .def(py::init<>())
        // .def(py::init<const VoidSetInAtomSet&>())
        // .def(py::init<const MolecularVoidSet&>())

        .def("total_number_of_atoms", &MolecularVoidSet::total_number_of_atoms, "Counts the total number of atoms on the boundary of voids in this set.")
        .def("all_contributing_atoms", &MolecularVoidSet::all_contributing_atoms, "Gets all contributing atoms in this void set.")
        .def("total_volume", &MolecularVoidSet::total_volume, "Gets the total volume of voids in this set.")
        .def("total_boundary_area", &MolecularVoidSet::total_boundary_area, "Gets the total boundary area of voids in this set.")
        .def("i_th_void", &MolecularVoidSet::i_th_void, "Gets i-th void in this set.")
        .def("find_biggest_void", &MolecularVoidSet::find_biggest_void, "Gets the void with the biggest volume in the set.")
        .def("find_voids_with_volume_greater_than", &MolecularVoidSet::find_voids_with_volume_greater_than, "Gets the voids with the volume greater than the given lower bound.")
        .def("find_voids_with_area_greater_than", &MolecularVoidSet::find_voids_with_area_greater_than, "Gets the voids with the boundary area greater than the given lower bound.")
        .def("find_voids_with_volume_less_than", &MolecularVoidSet::find_voids_with_volume_less_than, "Gets the voids with the volume less than the given upper bound. ")
        .def("find_voids_with_area_less_than", &MolecularVoidSet::find_voids_with_area_less_than, "Gets the voids with the boundary area less than the given upper bound.")
        .def("number_of_voids", &MolecularVoidSet::number_of_voids, "Counts the number of the voids in the set. ")
        .def("number_of_voids_with_volume_greater_than", &MolecularVoidSet::number_of_voids_with_volume_greater_than, "Counts the number of the voids with volume greater than the given lower bound. ")
        .def("number_of_voids_with_area_greater_than", &MolecularVoidSet::number_of_voids_with_area_greater_than, "Counts the number of the voids with the boundary area greater than the given lower bound.")
        .def("number_of_voids_with_volume_less_than", &MolecularVoidSet::number_of_voids_with_volume_less_than, "Counts the number of the voids with the volume less than the given upper bound.")
        .def("number_of_voids_with_area_less_than", &MolecularVoidSet::number_of_voids_with_area_less_than, "Counts the number of the voids with the boundary area less than the given upper bound.")
        .def("clear", &MolecularVoidSet::clear, "Clears all voids of the container.")
        .def("size", &MolecularVoidSet::size, "Counts the total number of voids in the container.")
        .def("empty", &MolecularVoidSet::empty, "Tests if the container is empty.")
        .def("push_back", &MolecularVoidSet::push_back, "Adds a void to the end of the container.")
        .def("begin", &MolecularVoidSet::begin, "Returns the void iterator addressing the first element in the container.")
        .def("end", &MolecularVoidSet::end, "Return the void iterator addressing one succeeding the last element in the container.");
}

#endif