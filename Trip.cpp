#include "Trip.h"
#include "RouteStrategy.h"
#include <iostream>

Trip::Trip(RouteStrategy* strategy)
    : strategy(strategy) {
}

Trip::~Trip() {
    delete strategy;
    strategy = 0;
}

void Trip::setStrategy(RouteStrategy* newStrategy) {
    if (newStrategy == strategy) {
        return;
    }

    delete strategy;
    strategy = newStrategy;
}

void Trip::plan(const std::string& from, const std::string& to) const {
    if (strategy == 0) {
        std::cout << "No route strategy has been selected." << std::endl;
        return;
    }

    std::cout << strategy->getRoute(from, to) << std::endl;
}
