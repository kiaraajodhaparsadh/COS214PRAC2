#ifndef OCEANNPC_H
#define OCEANNPC_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/NPC.h"

class OceanNPC :public NPC{
    void interact();
    void move();
};
#endif
