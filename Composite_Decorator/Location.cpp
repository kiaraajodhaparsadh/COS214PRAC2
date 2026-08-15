#include "Location.h"
#include <iostream>
#include <vector>

Location::Location(const std::string& name)
    : Place(name) {
}

Location::~Location() {
}

void Location::print(int depth) const {
    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }
    std::cout << "Location: " << name << std::endl;
}
