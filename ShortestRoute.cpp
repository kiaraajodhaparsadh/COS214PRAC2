#include "ShortestRoute.h"


ShortestRoute::ShortestRoute() {
//empty if there's no state
}

ShortestRoute::~ShortestRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::vector<Place*> ShortestRoute::getRoute(Place* from, Place* to) const {
    return "Shortest route from " + from + " to " + to;
}