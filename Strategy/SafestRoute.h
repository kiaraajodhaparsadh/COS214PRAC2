#ifndef SAFESTROUTE_H
#define SAFESTROUTE_H

#include "RouteStrategy.h"

#include <vector>

// Concrete strategy — picks the route that minimizes distance/hops.
class SafestRoute : public RouteStrategy {
public:
    SafestRoute();
    ~SafestRoute() override;

    std::string getRoute(const std::string& from, const std::string& to) const override;
    
};

#endif