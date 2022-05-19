#ifdef PYMGOS
#include "Atom.h"
#include "AtomPtr.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_AtomPtr(py::module& m) {
    py::class_<AtomPtr>(m, "AtomPtr")
        .def(py::init<>())
        .def(py::init<const Atom* const>())
        .def(py::init<const AtomPtr&>())

        .def("__lt__", &AtomPtr::operator<, py::is_operator(), "Tests if the address value of the atom on the left side of the operator is less than that of the atom on the right side.")

        .def("atom", &AtomPtr::atom, "Gets the Atom object.")
        .def("serial_number", &AtomPtr::serial_number, "Gets the serial number of atom.")
        .def("type", &AtomPtr::type, "Gets the atom type.")
        .def("geometry", &AtomPtr::geometry, "Gets the atom geometry.")
        .def("name", &AtomPtr::name, "Gets the atom name.")
        .def("residue_type", &AtomPtr::residue_type, "Gets the type of a residue which contains the atom.")
        .def("residue_sequence_number", &AtomPtr::residue_sequence_number, "Gets the sequence number of a residue which contains the atom.")
        .def("residue_name_3_letters", &AtomPtr::residue_name_3_letters, "Gets the three-letter abbreviated name of a residue which contains the atom.")
        .def("residue_name", &AtomPtr::residue_name, "Gets the full name of a residue which contains the atom.")
        .def("chain_ID", &AtomPtr::chain_ID, "Gets the ID of chain which contains the atom.")
        .def("is_in_hydrophobic_residue", &AtomPtr::is_in_hydrophobic_residue, "Checks whether the atom is in a hydrophobic residue or not.")
        .def("is_in_hydrophilic_residue", &AtomPtr::is_in_hydrophilic_residue, "Checks whether the atom is in a hydrophilic residue or not.")
        .def("is_in_polar_residue", &AtomPtr::is_in_polar_residue, "Checks whether the atom is in a polar residue or not.")
        .def("is_in_charged_residue", &AtomPtr::is_in_charged_residue, "Checks whether the atom is in a charged residue or not.")
        .def("is_in_positively_charged_residue", &AtomPtr::is_in_positively_charged_residue, "Checks whether the atom is in a positively charged residue or not.")
        .def("is_in_negatively_charged_residue", &AtomPtr::is_in_negatively_charged_residue, "Checks whether the atom is in a negatively charged residue or not.")
        .def("less_serial", &AtomPtr::less_serial, "Tests if the serial number of the first atom is less than that of the second atom.");
}
#endif