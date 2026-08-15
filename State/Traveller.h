// this is the context for the state design pattern
#ifndef TRAVELLER_H
#define TRAVELLER_H
#include <iostream>
#include <string>
#include <vector>
#include "MoveState.h"


class Traveller{

    private:
        MoveState* state;

    public:

        Traveller();
        void setState(MoveState* state);
        void move();
    
   



};
#endif 