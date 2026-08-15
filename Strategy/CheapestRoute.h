#ifndef CHEAPESTROUTE_H
#define CHEAPESTROUTE_H

#include "RouteStrategy.h"
#include <vector>

// Concrete strategy — picks the route that minimizes distance/hops.
class CheapestRoute : public RouteStrategy {
public:
    CheapestRoute();
    ~CheapestRoute() override;

   std::string getRoute(const std::string& from, const std::string& to) const override;
    
};

#endif