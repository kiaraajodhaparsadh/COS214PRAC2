#include "ShortestRoute.h"
#include <vector>


ShortestRoute::ShortestRoute() {
}

ShortestRoute::~ShortestRoute() {

}


std::string ShortestRoute::getRoute(const std::string& from, const std::string& to) const {
    return "Shortest route from " + from + " to " + to;
}