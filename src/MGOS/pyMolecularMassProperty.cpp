#ifdef PYMGOS

#include "MassProperty.h"
#include "MolecularMassProperty.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularMassProperty(py::module& m) {
    py::class_<MolecularMassProperty>(m, "MolecularMassProperty")
        // .def(py::init<>())
        // .def(py::init<const MassProperty&>())
        // .def(py::init<const MolecularMassProperty&>())

        .def("volume", &MolecularMassProperty::volume, "Gets the volume.")
        .def("area", &MolecularMassProperty::area, "Gets the boundary area.")
        .def("area_contributed_by_this_atom", &MolecularMassProperty::area_contributed_by_this_atom, "Gets area contributed by the given atom in whole boundary area.")
        .def("contributing_atoms", &MolecularMassProperty::contributing_atoms, "Gets atoms contributing to the boundary area.")
        .def("number_of_contributing_atoms", &MolecularMassProperty::number_of_contributing_atoms, "Counts the number of atoms contributing to the boundary area.");
}

#endif