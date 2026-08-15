#ifndef ONBICYCLE_H
#define ONBICYCLE_H
#include <iostream>
#include <string>
#include <vector>
#include "MoveState.h"

class OnBicycle  : public MoveState{

     public:
    void doMove(Traveller* traveller);
};

#endif