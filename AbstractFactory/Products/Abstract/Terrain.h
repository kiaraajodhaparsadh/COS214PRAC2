#ifndef TERRAIN_H
#define TERRAIN_H
#include <iostream>
#include <string>
#include <vector>


class Terrain {

public:
    Terrain();
    virtual void generate() = 0;
    virtual void display() = 0;
    virtual ~Terrain();
    
};
#endif