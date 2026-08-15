//concrete factory class for abstract factory design pattern
#ifndef FORESTBUILDER_H
#define FORESTBUILDER_H
#include "../Abstract/WorldBuilder.h"
#include <iostream>
#include <string>
#include <vector>
#include "../../Products/Concrete/ForestObstacle.h"
#include "../../Products/Concrete/ForestNPC.h"
#include "../../Products/Concrete/ForestTerrain.h"

class ForestBuilder :public WorldBuilder{};
#endif