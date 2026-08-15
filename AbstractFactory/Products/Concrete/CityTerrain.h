#ifndef CITYTERRAIN_H
#define CITYTERRAIN_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Terrain.h"

class CityTerrain : public Terrain {

    public:

    void generate();
    void display();
};
#endif