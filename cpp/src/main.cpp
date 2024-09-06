#include <iostream>

#include "capnproto/include/capnprotolib.h"

int main(int argc, char* argv[]) {
    const auto person = getPerson();

    std::cout << "In Main, Person::" <<  person;    
    return 0;
}
