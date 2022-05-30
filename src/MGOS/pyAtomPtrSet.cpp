#ifdef PYMGOS
#include "AtomPtrSet.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_AtomPtrSet(py::module &m) {
    py::class_<AtomPtrSet>(m, "AtomPtrSet")
        .def(py::init<>())
        .def(py::init<const AtomPtrSet &>())

        .def("clear", &AtomPtrSet::clear, "Clears all atoms of this container.")
        .def("size", &AtomPtrSet::size, "Counts the total number of atoms in the container.")
        .def("empty", &AtomPtrSet::empty, "Tests if the container is empty.")
        .def("push_back", &AtomPtrSet::push_back, "Adds an atom to the end of the container.")
        // .def("begin", &AtomPtrSet::begin, "Returns the atom iterator addressing the first element in the container.")
        // .def("end", &AtomPtrSet::end, "Returns the atom iterator addressing one succeeding the last element in the container.")

        .def(
            "__iter__", [](AtomPtrSet &a) {
                return py::make_iterator(a.begin(), a.end());
            },
            py::keep_alive<0, 1>())

        .def("find_union", &AtomPtrSet::find_union, "Finds the union of two atom sets in the container and another container.")
        .def("find_intersection", &AtomPtrSet::find_intersection, "Finds the intersection of two atom sets in the container and another container.")
        .def("find_difference", &AtomPtrSet::find_difference, "Finds the difference between two atom sets in the container and another container.")
        .def("sort_by_serial_number", &AtomPtrSet::sort_by_serial_number, "Arranges the atoms in this container in the ascending order of the serial number of each atom.");
}
#endif