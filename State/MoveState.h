// state of the state design pattern
#ifndef MOVESTATE_H
#define MOVESTATE_H
#include <iostream>
#include <string>
#include <vector>

class Traveller;

class MoveState{

    protected:
    int MoveCode;

    public:
    virtual void doMove(Traveller* traveller)=0;
    virtual ~MoveState();


};
#endif