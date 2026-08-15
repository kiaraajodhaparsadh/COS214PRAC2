#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

#include <string>
#include <vector>

class RouteStrategy {
public:
    virtual ~RouteStrategy();
    virtual std::string getRoute(const std::string& from, const std::string& to) const = 0;
};

#endif
