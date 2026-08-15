#include "OceanBuilder.h"
#include <iostream>
#include <string>
#include <vector>


 Terrain* OceanBuilder::createTerrain(){

    return new OceanTerrain();

 }
 NPC* OceanBuilder::createNPC(){

    return new OceanNPC();


 }
  Obstacle* OceanBuilder::createObstacle(){
    
        return new OceanObstacle();

  }