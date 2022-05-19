#ifdef PYMGOS
#include "AtomTripletSet.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_AtomTripletSet(py::module &m) {
    py::class_<AtomTripletSet>(m, "AtomTripletSet")
        .def(py::init<>())
        .def(py::init<const AtomTripletSet &>())

        .def("clear", &AtomTripletSet::clear, "Clears all atom-triplets of the AtomTripletSet object.")
        .def("size", &AtomTripletSet::size, "Counts the total number of atom-triplets in the AtomTripletSet object.")
        .def("empty", &AtomTripletSet::empty, "Tests if the container of the AtomTripletSet object is empty.")
        .def("push_back", &AtomTripletSet::push_back, "Adds the atom-triplet to the end of the container of the AtomTripletSet object.")
        .def("begin", &AtomTripletSet::begin, "Returns the atom-triplet iterator addressing the first element in the container of the AtomTripletSet object.")
        .def("end", &AtomTripletSet::end, "Returns the atom-triplet iterator addressing one succeeding the last element in the container of the AtomTripletSet object.");
}
#endif