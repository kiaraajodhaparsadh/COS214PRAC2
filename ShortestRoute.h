#ifndef SHORTESTROUTE_H
#define SHORTESTROUTE_H

#include "RouteStrategy.h"

// Concrete strategy — picks the route that minimizes distance/hops.
class ShortestRoute : public RouteStrategy {
public:
    ShortestRoute();
    ~ShortestRoute() override;

    std::vector<Place*> getRoute(Place* from, Place* to) const override;
    
};

#endif