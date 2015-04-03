
#include <boost/python.hpp>
#include <string>
#include <iostream>

class Function1 
{
    public:
    Function1() {std::cout<<"constructing\n";}
    void setup(std::string msg) { mMsg = msg; }
    void run() { std::cout <<"Doing " <<  mMsg <<'\n'; }
    std::string mMsg;
};

using namespace boost::python;

BOOST_PYTHON_MODULE(classes)
{
    class_<Function1>("Function1")
        .def("run", &Function1::run)
        .def("setup", &Function1::setup)
    ;
};
