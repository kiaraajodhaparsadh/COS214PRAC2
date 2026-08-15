#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <iostream>
#include <string>
#include <vector>

class Obstacle{

    public:
        Obstacle();
        virtual void interact() = 0;
        virtual void display() = 0;
        virtual ~Obstacle();
};
#endif