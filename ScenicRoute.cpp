#include "ScenicRoute.h"


ScenicRoute::ScenicRoute() {
//empty if there's no state
}

ScenicRoute::~ScenicRoute() {
    // TODO: does this class own anything? if not, empty body is correct 
}

std::vector<Place*> ScenicRoute::getRoute(Place* from, Place* to) const {
    return "Scenic route from " + from + " to " + to;
}
