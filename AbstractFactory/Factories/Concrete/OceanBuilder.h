//concrete factory class for abstract factory design pattern
#ifndef OCEANBUILDER_H
#define OCEANBUILDER_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/WorldBuilder.h"
//must include all the products that it makes 
#include "../../Products/Concrete/OceanTerrain.h"
#include "../../Products/Concrete/OceanNPC.h"
#include "../../Products/Concrete/OceanObstacle.h"


class OceanBuilder: public WorldBuilder{};

#endif