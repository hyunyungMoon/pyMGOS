#ifdef PYMGOS

#include "SpineOfMolecularChannel.h"
#include "SpineOfTunnelInAtomSet.h"

using namespace MGOS;
using namespace std;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_SpineOfMolecularChannel(py::module& m) {
    py::class_<SpineOfMolecularChannel>(m, "SpineOfMolecularChannel")
        // .def(py::init<>())
        // .def(py::init<const V::SpineOfTunnelInAtomSet&>())
        // .def(py::init<const SpineOfMolecularChannel&>())

        .def("get_all_edges", &SpineOfMolecularChannel::get_all_edges, "Gets the edges of the spine of channel.")
        .def("get_all_vertices", &SpineOfMolecularChannel::get_all_vertices, "Gets the vertices of the spine of channel.")
        .def("number_of_edges", &SpineOfMolecularChannel::number_of_edges, "Counts the number of edges of the spine of channel.")
        .def("number_of_vertices", &SpineOfMolecularChannel::number_of_vertices, "Counts the number of vertices of the spine of channel.");
}

#endif