#include "DesertBuilder.h"
#include <vector>
#include <string>
#include <iostream>

Terrain* DesertBuilder::createTerrain(){
    return new DesertTerrain();
}
NPC* DesertBuilder::createNPC(){
    return new DesertNPC();
}
Obstacle* DesertBuilder::createObstacle(){
    return new DesertObstacle();
}