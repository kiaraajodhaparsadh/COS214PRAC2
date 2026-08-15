#include "Region.h"
#include <iostream>
#include <vector>

Region::Region(const std::string& name)
    : Place(name) {
}

Region::~Region() {
    for (std::vector<Place*>::iterator it = children.begin();
         it != children.end(); ++it) {
        delete *it;
    }
    children.clear();
}

void Region::add(Place* child) {
    if (child != 0) {
        children.push_back(child);
    }
}

void Region::print(int depth) const {
    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }
    std::cout << "Region: " << name << std::endl;

    for (std::vector<Place*>::const_iterator it = children.begin();
         it != children.end(); ++it) {
        (*it)->print(depth + 1);
    }
}