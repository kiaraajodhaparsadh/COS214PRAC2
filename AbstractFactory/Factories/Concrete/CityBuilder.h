//concrete factory class for the factory design pattern
#ifndef CITYBUILDER_H
#define CITYBUILDER_H
#include "../Abstract/WorldBuilder.h"
#include <vector>
#include <string>
#include <iostream>
#include "../../Products/Concrete/CityObstacle.h"
#include "../../Products/Concrete/CityNPC.h"
#include "../../Products/Concrete/CityTerrain.h"

class CityBuilder :public WorldBuilder{};
#endif