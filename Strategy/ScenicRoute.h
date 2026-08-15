#ifndef SCENICROUTE_H
#define SCENICROUTE_H

#include "RouteStrategy.h"
#include <vector>

// Concrete strategy — picks the route that minimizes distance/hops.
class ScenicRoute : public RouteStrategy {
public:
    ScenicRoute();
    ~ScenicRoute() override;

    std::string getRoute(const std::string& from, const std::string& to) const override;
    
};

#endif