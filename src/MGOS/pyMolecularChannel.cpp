#ifdef PYMGOS

#include "MolecularChannel.h"
#include "TunnelInAtomSet.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularChannel(py::module& m) {
    py::class_<MolecularChannel>(m, "MolecularChannel")
        // .def(py::init<>())
        // .def(py::init<const TunnelInAtomSet&>())
        // .def(py::init<const MolecularChannel&>())

        .def("contributing_atoms", &MolecularChannel::contributing_atoms, "Gets atoms contributing to the boundary area of the channel.")
        .def("number_of_contributing_atoms", &MolecularChannel::number_of_contributing_atoms, "Counts the number of atoms on the boundary of the channel.")
        .def("spine", &MolecularChannel::spine, "Gets the spine of the channel.")
        .def("find_bottleneck", &MolecularChannel::find_bottleneck, "Finds the bottleneck of the channel.")
        .def("number_of_gates", &MolecularChannel::number_of_gates, "Counts the number of gates in the channel.")
        .def("number_of_junctions", &MolecularChannel::number_of_junctions, "Counts the number of junctions in the channel.")
        .def("number_of_handles", &MolecularChannel::number_of_handles, "Counts the number of handles in the channel.");
}

#endif