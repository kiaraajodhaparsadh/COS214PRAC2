#include "ForestBuilder.h"
#include <iostream>
#include <string>
#include <vector>

Terrain* ForestBuilder::createTerrain(){

    return new ForestTerrain();
}
NPC* ForestBuilder::createNPC(){

    return new ForestNPC();
}
Obstacle* ForestBuilder::createObstacle(){

    return new ForestObstacle();
}