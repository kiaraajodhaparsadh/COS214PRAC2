#ifndef CITYNPC_H
#define CITYNPC_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/NPC.h"

class CityNPC : public NPC{
     void interact();
     void move();
};
#endif