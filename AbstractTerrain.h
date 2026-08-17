#ifndef ABSTRACTTERRAIN_H
#define ABSTRACTTERRAIN_H
#include <iostream>
#include <string>

class AbstractTerrain {
protected:
    std::string terrainType;
    int movementCost;
public:
    AbstractTerrain(const std::string& type, int cost);
    virtual ~AbstractTerrain() = default;
    virtual void displayTerrain() = 0;
};

#endif