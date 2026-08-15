#ifndef LOCATION_H
#define LOCATION_H

#include "Place.h"

class Location : public Place {
public:
    Location(const std::string& name);
    virtual ~Location();

    virtual void print(int depth = 0) const;
};

#endif