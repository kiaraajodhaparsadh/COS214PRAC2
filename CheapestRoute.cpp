#include "CheapestRoute.h"


CheapestRoute::CheapestRoute() {
//empty if there's no state
}

CheapestRoute::~CheapestRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::vector<Place*> CheapestRoute::getRoute(Place* from, Place* to) const {
    return "Cheapest route from " + from + " to " + to;
}