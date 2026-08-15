#ifndef SHORTESTROUTE_H
#define SHORTESTROUTE_H

#include "RouteStrategy.h"
#include <vector>

// Concrete strategy — picks the route that minimizes distance/hops.
class ShortestRoute : public RouteStrategy {
public:
    ShortestRoute();
    ~ShortestRoute() override;

    std::string getRoute(const std::string& from, const std::string& to) const override;
    
};

#endif