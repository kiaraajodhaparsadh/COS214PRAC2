#ifndef DESERTNPC_H
#define DESERTNPC_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/NPC.h"

class DesertNPC :public NPC{
 public:
    void interact();
    void move();
};
#endif