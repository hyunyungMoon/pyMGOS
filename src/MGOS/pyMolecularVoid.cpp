#ifdef PYMGOS

#include "MolecularVoid.h"
#include "MolecularVoidRep.h"
#include "VoidInAtomSet.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularVoid(py::module& m) {
    py::class_<MolecularVoid>(m, "MolecularVoid")
        // .def(py::init<>())
        // .def(py::init<const VoidInAtomSet&>())
        // .def(py::init<const MolecularVoidRep* const>())
        // .def(py::init<const MolecularVoid&>())

        .def("volume", &MolecularVoid::volume, "Gets the volume of the void.")
        .def("boundary_area", &MolecularVoid::boundary_area, "Gets the boundary area of the void.")
        .def("area_contributed_by_this_atom", &MolecularVoid::area_contributed_by_this_atom, "Gets the boundary area contributed by the atom on the boundary of the void.")
        .def("contributing_atoms", &MolecularVoid::contributing_atoms, "Gets atoms contributing to the boundary area of the void")
        .def("number_of_contributing_atoms", &MolecularVoid::number_of_contributing_atoms, "Counts the number of atoms on the boundary of the void.")
        .def("find_largest_empty_spherical_space", &MolecularVoid::find_largest_empty_spherical_space, "Finds the largest empty spherical space in the void.")
        .def("void_clearance", &MolecularVoid::void_clearance, "Gets the void clearance which defines as the radius of the largest empty sphere in the void.")
        .def("greater_volume", &MolecularVoid::greater_volume, "Tests if the volume of the first void is greater than that of the second void.")
        .def("greater_area", &MolecularVoid::greater_area, "Tests if the boundary area of the first void is greater than that of the second void.")
        .def("less_volume", &MolecularVoid::less_volume, "Tests if the volume of the first void is less than that of the second void.")
        .def("less_area", &MolecularVoid::less_area, "Tests if the boundary area of the first void is less than that of the second void.");
}

#endif