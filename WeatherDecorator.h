#ifndef WEATHERDECORATOR_H
#define WEATHERDECORATOR_H
#include <string>
#include <iostream>
#include <vector>
#include "PlaceDecorator.h"

class WeatherDecorator: public PlaceDecorator{
    public:
    WeatherDecorator(Place* place);

    void print(int depth=0) const;
};
#endif