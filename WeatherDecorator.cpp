#include <iostream>
#include <string>
#include <vector>
#include "WeatherDecorator.h"

void WeatherDecorator::print(int depth)const {
    place->print();

    std::cout << "Weather: Sunny" << std::endl;
}