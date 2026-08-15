#ifndef OCEANTERRAIN_H
#define OCEANTERRAIN_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Terrain.h"

class OceanTerrain :public Terrain{

     public:

    void generate();
    void display();
};
#endif