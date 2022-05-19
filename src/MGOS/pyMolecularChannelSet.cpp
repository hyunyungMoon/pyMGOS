#ifdef PYMGOS

#include "MolecularChannelSet.h"
#include "TunnelSetInAtomSet.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_MolecularChannelSet(py::module& m) {
    py::class_<MolecularChannelSet>(m, "MolecularChannelSet")
        // .def(py::init<>())
        // .def(py::init<const TunnelSetInAtomSet&>())
        // .def(py::init<const MolecularChannelSet&>())

        .def("i_th_channel", &MolecularChannelSet::i_th_channel, "Gets i-th channel in this set.")
        .def("find_biggest_channel", &MolecularChannelSet::find_biggest_channel, "Gets the biggest channel in the container.")
        .def("number_of_channels", &MolecularChannelSet::number_of_channels, "Counts the number of the channels in the set.")
        .def("clear", &MolecularChannelSet::clear, "Clears all channels of the container.")
        .def("size", &MolecularChannelSet::size, "Counts the total number of channels in the container.")
        .def("empty", &MolecularChannelSet::empty, "Tests if the container is empty.")
        .def("push_back", &MolecularChannelSet::push_back, "Adds the channel to the end of the container.")
        .def("begin", &MolecularChannelSet::begin, "Returns the channel iterator addressing the first element in the container.")
        .def("end", &MolecularChannelSet::end, "Returns the channel iterator addressing one succeeding the last element in the container.");
}

#endif