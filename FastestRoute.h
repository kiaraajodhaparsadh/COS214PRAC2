#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H

#include "RouteStrategy.h"

// Concrete strategy 
class FastestRoute : public RouteStrategy {
public:
    FastestRoute();
    ~FastestRoute() override;

    std::vector<Place*> getRoute(Place* from, Place* to) const override;
    
};

#endif