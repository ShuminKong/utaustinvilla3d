#include "behaviors/naobehavior.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;



PYBIND11_MODULE(utaustin, m) {
    py::class_<NaoBehavior>(m, "NaoBehavior")
        .def(py::init<const std::string , int , const map<string, string>&, const string&>())
        .def("Init", &NaoBehavior::Init)
        .def("Think", &NaoBehavior::Think)
        .def("Act", &NaoBehavior::act)
        .def("senMonMessage", &NaoBehavior::setMonMessage)
        .def("getMonMessage", &NaoBehavior::getMonMessage)
        .def("getPosition", &NaoBehavior::getPosition)
        .def_readwrite("me", &NaoBehavior::me) ;
}

