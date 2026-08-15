#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H
#include <iostream>
#include <string>
#include <vector>
#include "../../Products/Abstract/Terrain.h"
#include "../../Products/Abstract/NPC.h"
#include "../../Products/Abstract/Obstacle.h"


class WorldBuilder{

    public:
    WorldBuilder();
    virtual Terrain* createTerrain() =0;
    virtual NPC* createNPC() =0;
    virtual Obstacle* createObstacle()=0;
    virtual ~WorldBuilder() ;



};

#endif