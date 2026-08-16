#ifndef TERRAINDECORATOR_H
#define TERRAINDECORATOR_H
#include <iostream>
#include <string>
#include "Decorator.h"

class TerrainDecorator : public Decorator{
private:
    std::string terrainType;
    int terrainCost;
public:
    TerrainDecorator(MapComponent* comp, const std::string& type, int cost);
    int getTravelCost();
    void display();
};

#endif