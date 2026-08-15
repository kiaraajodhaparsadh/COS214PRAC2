#ifndef FORESTTERRAIN_H
#define FORESTTERRAIN_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Terrain.h"

class ForestTerrain :public Terrain{

     public:

    void generate();
    void display();
};
#endif