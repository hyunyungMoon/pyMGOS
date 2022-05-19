#ifdef PYMGOS
#include "Atom.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_Atom(py::module &m) {
    py::class_<Atom>(m, "Atom")
        .def(py::init<>())
        .def(py::init<const Atom &>())

        .def("serial_number", &Atom::serial_number, "Gets the serial number of atom")
        .def("type", &Atom::type, "Gets the atom type")
        .def("geometry", &Atom::geometry, "Gets the atom geometry")
        .def("name", &Atom::name, "Gets the atom name")
        .def("residue_type", &Atom::residue_type, "Gets the type of a residue which contains the atom")
        .def("residue_sequence_number", &Atom::residue_sequence_number, "Gets the sequence number of a residue which contains the atom")
        .def("residue_name_3_letters", &Atom::residue_name_3_letters, "Gets the three-letter abbreviated name of a residue which contains the atom")
        .def("residue_name", &Atom::residue_name, "Gets the full name of a residue which contains the atom")
        .def("chain_ID", &Atom::chain_ID, "Gets the ID of chain which contains the atom")
        .def("is_in_hydrophobic_residue", &Atom::is_in_hydrophobic_residue, "Checks whether the atom is in a hydrophobic residue or not")
        .def("is_in_hydrophilic_residue", &Atom::is_in_hydrophilic_residue, "Checks whether the atom is in a hydrophilic residue or not")
        .def("is_in_polar_residue", &Atom::is_in_polar_residue, "Checks whether the atom is in a polar residue or not")
        .def("is_in_charged_residue", &Atom::is_in_charged_residue, "Checks whether the atom is in a charged residue or not")
        .def("is_in_positively_charged_residue", &Atom::is_in_positively_charged_residue, "Checks whether the atom is in a positively charged residue or not")
        .def("is_in_negatively_charged_residue", &Atom::is_in_negatively_charged_residue, "Checks whether the atom is in a negatively charged residue or not")
        .def("set_serial_number", &Atom::set_serial_number, "Sets the serial number of atom")
        .def("set_type", &Atom::set_type, "Sets the atom type")
        .def("set_geometry", &Atom::set_geometry, "Sets the atom geometry")
        .def("set_name", &Atom::set_name, "Sets the atom name.")
        .def("set_residue_type", &Atom::set_residue_type, "Sets the type of a residue which contains the atom")
        .def("set_residue_sequence_number", &Atom::set_residue_sequence_number, "Sets the sequence number of a residue which contains the atom")
        .def("set_chain_ID", &Atom::set_chain_ID, "Sets the ID of chain which contains the atom");
}
#endif