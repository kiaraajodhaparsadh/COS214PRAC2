#ifndef SAFESTROUTE_H
#define SAFESTROUTE_H

#include "RouteStrategy.h"

// Concrete strategy — picks the route that minimizes distance/hops.
class SafestRoute : public RouteStrategy {
public:
    SafestRoute();
    ~SafestRoute() override;

    std::vector<Place*> getRoute(Place* from, Place* to) const override;
    
};

#endif