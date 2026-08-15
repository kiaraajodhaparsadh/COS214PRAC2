#ifndef OCEANOBSTACLE_H
#define OCEANOBSTACLE_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Obstacle.h"

class OceanObstacle :public Obstacle{

      public:

    void interact();
    void display();
};
#endif