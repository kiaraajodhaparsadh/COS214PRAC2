#include "Place.h"
#include <iostream>
#include <vector>

Place::Place(const std::string& name)
    : name(name) {
}

Place::~Place() {
}

const std::string& Place::getName() const {
    return name;
}



