#include "OceanObstacle.h"
#include <iostream>
#include <string>
#include <vector>

void OceanObstacle::interact() {
    std::cout << "The traveller avoids a coral reef." << std::endl;
}

void OceanObstacle::display() {
    std::cout << "A coral reef is displayed." << std::endl;
}