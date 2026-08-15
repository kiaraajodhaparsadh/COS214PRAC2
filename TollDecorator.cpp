#include <string>
#include <iostream>
#include <vector>
#include "TollDecorator.h"


TollDecorator::TollDecorator(Place* place)
    : PlaceDecorator(place) {
}

void TollDecorator::print(int depth) const {
    place->print(depth);
    std::cout << "Toll required to enter this place." << std::endl;
}