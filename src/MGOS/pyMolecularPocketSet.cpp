#ifdef PYMGOS

#include "MolecularPocketSet.h"
#include "PocketSetInAtomSet.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularPocketSet(py::module& m) {
    py::class_<MolecularPocketSet>(m, "MolecularPocketSet")
        // .def(py::init<>())
        // .def(py::init<const PocketSetInAtomSet&>())
        // .def(py::init<const MolecularPocketSet&>())

        .def("number_of_pockets", &MolecularPocketSet::number_of_pockets, "Counts the number of the pockets in the set.")
        .def("clear", &MolecularPocketSet::clear, "Clears all pockets of the container in the the MolecularPocketSet object.")
        .def("size", &MolecularPocketSet::size, "Counts the total number of pockets in the container in the the MolecularPocketSet object.")
        .def("empty", &MolecularPocketSet::empty, "Tests if the container in the the MolecularPocketSet object is empty.")
        .def("push_back", &MolecularPocketSet::push_back, "Adds the pocket to the end of the container in the the MolecularPocketSet object.")
        //.def("begin", &MolecularPocketSet::begin, "Returns the pocket iterator addressing the first element in the container in the the MolecularPocketSet object.")
        //.def("end", &MolecularPocketSet::end, "Returns the pocket iterator addressing one succeeding the last element in the container in the the MolecularPocketSet object.")
        .def(
            "__iter__", [](MolecularPocketSet& a) {
                return py::make_iterator(a.begin(), a.end());
            },
            py::keep_alive<0, 1>());
}

#endif