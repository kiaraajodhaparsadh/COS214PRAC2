#include "SafestRoute.h"
#include "Place.h" //calling its methods

SafestRoute::SafestRoute() {
//empty if there's no state
}

SafestRoute::~SafestRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::vector<Place*> SafestRoute::getRoute(Place* from, Place* to) const {
    return "Safest route from " + from + " to " + to;
}