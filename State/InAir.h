#ifndef INAIR_H
#define INAIR_H
#include <iostream>
#include <string>
#include <vector>
#include "MoveState.h"

class InAir : public MoveState{

     public:
    void doMove(Traveller* traveller);

    
};
#endif