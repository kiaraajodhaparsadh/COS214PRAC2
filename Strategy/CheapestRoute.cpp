#include "CheapestRoute.h"
#include "Place.h" //calling its methods
#include <vector>


CheapestRoute::CheapestRoute() {
//empty if there's no state
}

CheapestRoute::~CheapestRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::string CheapestRoute::getRoute(const std::string& from, const std::string& to) const {
    return "Cheapest route from " + from + " to " + to;
}