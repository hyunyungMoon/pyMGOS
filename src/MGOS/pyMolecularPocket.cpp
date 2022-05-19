#ifdef PYMGOS

#include "MolecularPocket.h"
#include "PocketInAtomSet.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularPocket(py::module& m) {
    py::class_<MolecularPocket>(m, "MolecularPocket")
        // .def(py::init<>())
        // .def(py::init<const V::PocketInAtomSet&>())
        // .def(py::init<const MolecularPocket&>())

        .def("contributing_atoms", &MolecularPocket::contributing_atoms, "Gets atoms contributing to the boundary area of the pocket.")
        .def("number_of_contributing_atoms", &MolecularPocket::number_of_contributing_atoms, "Counts the number of atoms on the boundary of the pocket.")
        .def("contributing_atom_triplets", &MolecularPocket::contributing_atom_triplets, "Gets the atom-triplets on the boundary of the pocket.")
        .def("number_of_contributing_atom_triplets", &MolecularPocket::number_of_contributing_atom_triplets, "Counts the number of atom-triplets on the boundary of the pocket.");
}

#endif