#ifndef NPC_H
#define NPC_H
#include <iostream>
#include <string>
#include <vector>

class NPC{

    public:

    NPC();
    virtual ~NPC();
    //some virtual function that will be implemented by the subclasses 
    virtual void interact() = 0;
    virtual void move() = 0;


};
#endif