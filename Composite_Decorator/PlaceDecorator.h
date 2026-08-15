#ifndef PLACEDECORATOR_H
#define PLACEDECORATOR_H
#include <string>
#include <iostream>
#include <vector>
#include "Place.h"


class PlaceDecorator :public Place {
protected:

        Place* place;
public:
PlaceDecorator(Place* place);
virtual ~PlaceDecorator();

};
#endif