#include <string>
#include <iostream>
#include <vector>
#include "PlaceDecorator.h"

PlaceDecorator::PlaceDecorator(Place* place):Place(place->getName()){
    this->place = place;
}


PlaceDecorator::~PlaceDecorator() {
    delete place;
}