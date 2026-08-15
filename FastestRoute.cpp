#include "FastestRoute.h"


FastesttRoute::FastestRoute() {
//empty if there's no state
}

FastestRoute::~FastestRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::vector<Place*> FastestRoute::getRoute(Place* from, Place* to) const {
    return "Shortest route from " + from + " to " + to;
}