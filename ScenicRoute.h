#ifndef SCENICROUTE_H
#define SCENICROUTE_H

#include "RouteStrategy.h"

// Concrete strategy — picks the route that minimizes distance/hops.
class ScenicRoute : public RouteStrategy {
public:
    ScenicRoute();
    ~ScenicRoute() override;

    std::vector<Place*> getRoute(Place* from, Place* to) const override;
    
};

#endif