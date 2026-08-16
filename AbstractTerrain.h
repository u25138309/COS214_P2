#ifndef ABSTRACTTERRAIN_H
#define ABSTRACTTERRAIN_H
#include <iostream>

class AbstractTerrain {
protected:
    std::string terrainType;
    int movementCost;
public:
    AbstractTerrain(const std::string& type, int cost) : terrainType(type), movementCost(cost) {}
    virtual ~AbstractTerrain() = default;
    virtual void displayTerrain() = 0;
};

#endif