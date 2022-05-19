#ifdef PYMGOS
#include <cmath>

#include "Point3d.h"
#include "Sphere3d.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_Sphere3d(py::module& m) {
    py::class_<Sphere3d>(m, "Sphere3d")
        .def(py::init<>())
        .def(py::init<const double&, const double&, const double&, const double&>())
        .def(py::init<const Point3d&, const double&>())
        .def(py::init<const Sphere3d&>())

        .def("center", py::overload_cast<>(&Sphere3d::center, py::const_), "Get the center point of the Sphere3d object")
        .def("center", py::overload_cast<const Point3d&>(&Sphere3d::center), "Set the center point of the Sphere3d object from the specified center point")
        .def("radius", py::overload_cast<>(&Sphere3d::radius, py::const_), "Get the radius of the Sphere3d object")
        .def("radius", py::overload_cast<const double&>(&Sphere3d::radius), "Set the radius of the Sphere3d object from the specified radius")

        .def("set", py::overload_cast<const Point3d&, const double&>(&Sphere3d::set), "Set the Sphere3d object from the specified center point and radius")

        //.def("intersection_volume", static_cast<double (Sphere3d::*)(const Sphere3d&) const>(&Sphere3d::intersection_volume), "intersection_volume calculation")
        //.def("intersection_area", static_cast<double (Sphere3d::*)(const Sphere3d&) const>(&Sphere3d::intersection_area), "intersection_area calculation")

        // .def("intersection_volume", py::overload_cast<const Sphere3d&>(&Sphere3d::intersection_volume, py::const_))
        // .def("intersection_area", py::overload_cast<const Sphere3d&>(&Sphere3d::intersection_area, py::const_))

        .def("intersection_volume", &Sphere3d::intersection_volume)
        .def("intersection_area", &Sphere3d::intersection_area)

        //.def("assign", &Sphere3d::operator=)
        .def("__eq__", &Sphere3d::operator==, py::is_operator())
        .def("__ne__", &Sphere3d::operator!=, py::is_operator());
}
#endif