//concrete factory class for abstract factory design pattern
#ifndef DESERTBUILDER_H
#define DESERTBUILDER_H
#include "../Abstract/WorldBuilder.h"
#include <iostream>
#include <vector>
#include <string>
#include "../../Products/Concrete/DesertObstacle.h"
#include "../../Products/Concrete/DesertNPC.h"
#include "../../Products/Concrete/DesertTerrain.h"

class DesertBuilder :public WorldBuilder{

    public:
        Terrain* createTerrain();
        NPC* createNPC();
        Obstacle* createObstacle();
};
#endif
