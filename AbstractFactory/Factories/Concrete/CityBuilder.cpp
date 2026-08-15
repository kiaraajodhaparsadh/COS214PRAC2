#include "CityBuilder.h"
#include <vector>
#include <string>
#include <iostream>

Terrain* CityBuilder::createTerrain(){
    return new CityTerrain();
}
NPC* CityBuilder::createNPC(){
    return new CityNPC();
}
Obstacle* CityBuilder::createObstacle(){
    return new CityObstacle();
}