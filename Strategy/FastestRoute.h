#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H

#include "RouteStrategy.h"
#include <vector>

// Concrete strategy 
class FastestRoute : public RouteStrategy {
public:
    FastestRoute();
    ~FastestRoute() override;

    std::string getRoute(const std::string& from, const std::string& to) const override;
    
};

#endif