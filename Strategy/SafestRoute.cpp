#include "SafestRoute.h"
#include "Place.h" //calling its methods

#include <vector>

SafestRoute::SafestRoute() {

}

SafestRoute::~SafestRoute() {
     
}

std::string SafestRoute::getRoute(const std::string& from, const std::string& to) const {
    return "Safest route from " + from + " to " + to;
}