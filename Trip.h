#ifndef TRIP_H
#define TRIP_H

#include <string>

class RouteStrategy;

class Trip {
private:
    RouteStrategy* strategy;

public:
    Trip(RouteStrategy* strategy = 0);
    ~Trip();

    void setStrategy(RouteStrategy* newStrategy);
    void plan(const std::string& from, const std::string& to) const;
};

#endif
