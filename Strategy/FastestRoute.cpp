#include "FastestRoute.h"
#include "Place.h" //calling its methods
#include <vector>


FastestRoute::FastestRoute() {
}

FastestRoute::~FastestRoute() {
}

std::string FastestRoute::getRoute(const std::string& from, const std::string& to) const {
    return "Fastest route from " + from + " to " + to;
}