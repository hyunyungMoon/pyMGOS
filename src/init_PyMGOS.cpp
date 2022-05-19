#ifdef PYMGOS
#include <pybind11/pybind11.h>

namespace py = pybind11;

// V::API_tier
void init_Point3d(py::module &m);
void init_Sphere3d(py::module &m);

// MGpy::module &mOS
void init_Atom(py::module &m);
void init_AtomPtr(py::module &m);
void init_AtomPtrSet(py::module &m);
void init_AtomTriplet(py::module &m);
void init_AtomTripletSet(py::module &m);
void init_MolecularChannel(py::module &m);
void init_MolecularChannelSet(py::module &m);
void init_MolecularGeometry(py::module &m);
void init_MolecularMassProperty(py::module &m);
void init_MolecularPocket(py::module &m);
void init_MolecularPocketSet(py::module &m);
void init_MolecularVoid(py::module &m);
void init_MolecularVoidSet(py::module &m);
void init_SpineOfMolecularChannel(py::module &m);

PYBIND11_MODULE(PyMGOS, m) {
    init_Point3d(m);
    init_Sphere3d(m);

    init_Atom(m);
    init_AtomPtr(m);
    init_AtomPtrSet(m);
    init_AtomTriplet(m);
    init_AtomTripletSet(m);
    init_MolecularChannel(m);
    init_MolecularChannelSet(m);
    init_MolecularGeometry(m);
    init_MolecularMassProperty(m);
    init_MolecularPocket(m);
    init_MolecularPocketSet(m);
    init_MolecularVoid(m);
    init_MolecularVoidSet(m);
    init_SpineOfMolecularChannel(m);
}
#endif