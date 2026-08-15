#ifndef REGION_H
#define REGION_H

#include "Place.h"

class Region : public Place {
private:
    std::vector<Place*> children;

public:
    Region(const std::string& name);
    virtual ~Region();

    void add(Place* child);
    virtual void print(int depth = 0) const;
};

#endif