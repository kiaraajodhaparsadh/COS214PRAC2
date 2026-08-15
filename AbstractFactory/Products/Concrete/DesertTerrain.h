#ifndef DESERTTERRAIN_H
#define DESERTTERRAIN_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Terrain.h"

class DesertTerrain :public Terrain{

     public:

    void generate();
    void display();
};
#endif