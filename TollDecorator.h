#ifndef TOLLDECORATOR_H
#define TOLDECORATOR_H
#include <string>
#include <iostream>
#include <vector>
#include "PlaceDecorator.h"

class TollDecorator :public PlaceDecorator{

    public:
    TollDecorator(Place* place);

    void print(int depth = 0) const;
};
#endif