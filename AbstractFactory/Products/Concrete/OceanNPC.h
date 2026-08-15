#ifndef OCEANNPC_H
#define OCEANNPC_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/NPC.h"

class OceanNPC :public NPC{
    public:
    void interact();
    void move();
};
#endif
