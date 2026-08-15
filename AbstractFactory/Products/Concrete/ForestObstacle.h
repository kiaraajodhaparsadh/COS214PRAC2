#ifndef FORESTOBSTACLE_H
#define FORESTOBSTACLE_H
#include <iostream>
#include <string>
#include <vector>
#include "../Abstract/Obstacle.h"

class ForestObstacle :public Obstacle{

      public:

    void interact();
    void display();
};
#endif