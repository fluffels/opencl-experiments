#include <cstdlib>

#include <CL/cl2.hpp>

#include "easylogging++.h"

using namespace cl;

INITIALIZE_EASYLOGGINGPP

int
main (int argc, char** argv) {
    START_EASYLOGGINGPP(argc, argv);
    LOG(INFO) << "Hello, world!";
    return 0;
}

