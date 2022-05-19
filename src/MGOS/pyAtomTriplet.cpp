#ifdef PYMGOS
#include "AtomTriplet.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_AtomTriplet(py::module &m) {
    py::class_<AtomTriplet>(m, "AtomTriplet")
        .def(py::init<>())
        .def(py::init<const AtomPtr &, const AtomPtr &, const AtomPtr &>())
        .def(py::init<const AtomTriplet &>())

        .def("ith_atom", &AtomTriplet::ith_atom, "Gets the i-th atom in the AtomTriplet object.");
}
#endif