#include <iostream>
#include <string>
#include <vector>
#include "WeatherDecorator.h"

WeatherDecorator::WeatherDecorator(Place* place)
    : PlaceDecorator(place) {
}

void WeatherDecorator::print(int depth)const {
    place->print(depth);

    std::cout << "Weather: Sunny" << std::endl;
}