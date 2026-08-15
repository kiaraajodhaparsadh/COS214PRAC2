#ifndef QUESTDECORATOR_H
#define QUESTDECORATOR_H
#include <string>
#include <iostream>
#include <vector>
#include "PlaceDecorator.h"

class QuestDecorator :public PlaceDecorator{
public:
    QuestDecorator(Place* place);

    void print(int depth=0)const;
    
};
#endif