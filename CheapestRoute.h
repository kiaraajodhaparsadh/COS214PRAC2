#ifndef CHEAPESTROUTE_H
#define CHEAPESTROUTE_H

#include "RouteStrategy.h"

// Concrete strategy — picks the route that minimizes distance/hops.
class CheapestRoute : public RouteStrategy {
public:
    CheapestRoute();
    ~CheapestRoute() override;

    std::vector<Place*> getRoute(Place* from, Place* to) const override;
    
};

#endif