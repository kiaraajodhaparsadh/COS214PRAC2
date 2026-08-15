#include "ScenicRoute.h"
#include "Place.h" //calling its methods
#include <vector>


ScenicRoute::ScenicRoute() {
//empty if there's no state
}

ScenicRoute::~ScenicRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::string ScenicRoute::getRoute(const std::string& from, const std::string& to) const {
    return "Scenic route from " + from + " to " + to;
}
