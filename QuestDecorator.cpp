#include <string>
#include <iostream>
#include <vector>
#include "QuestDecorator.h"

QuestDecorator::QuestDecorator(Place* place)
    : PlaceDecorator(place) {
}

void QuestDecorator::print(int depth)const {
    place->print();
    std::cout << "Quest available at this place." << std::endl;
}