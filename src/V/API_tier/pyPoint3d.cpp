#ifdef PYMGOS
#include <cmath>

#include "Point3d.h"

using namespace std;
using namespace V;

#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_Point3d(py::module &m) {
    py::class_<Point3d>(m, "Point3D")
        .def(py::init<>())
        .def(py::init<const double &, const double &, const double &>())
        .def(py::init<const Point3d &>())

        .def("x", py::overload_cast<>(&Point3d::x, py::const_), "Get X-coordinate of point")
        .def("y", py::overload_cast<>(&Point3d::y, py::const_), "Get Y-coordinate of point")
        .def("z", py::overload_cast<>(&Point3d::z, py::const_), "Get Z-coordinate of point")
        .def("x", py::overload_cast<const double &>(&Point3d::x), "Set X-coordinate of point")
        .def("y", py::overload_cast<const double &>(&Point3d::y), "Set Y-coordinate of point")
        .def("z", py::overload_cast<const double &>(&Point3d::z), "Set Z-coordinate of point")

        .def("set", &Point3d::set, "Set the Point3d object from the specified xyz coordinates")

        .def("__eq__", &Point3d::operator==, py::is_operator(), "Test if the Point3d object on the left side of the operator is equal to the Point3d object")
        .def("__ne__", &Point3d::operator!=, py::is_operator(), "Test if the Point3d object on the left side of the operator is not equal to the Point3d object")

        .def("distance", py::overload_cast<const Point3d &>(&Point3d::distance, py::const_), "distance calculation")
        .def("distance", py::overload_cast<const Point3d &, const Point3d &>(&Point3d::distance), "distance calculation");
}
#endif