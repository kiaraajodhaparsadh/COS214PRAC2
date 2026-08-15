//concreteState class of the state design pattern
#ifndef ONFOOT_H
#define ONFOOT_H
#include <iostream>
#include <string>
#include <vector>
#include "MoveState.h"

class OnFoot  : public MoveState{
    public:
    void doMove(Traveller* traveller);
    
};
#endif