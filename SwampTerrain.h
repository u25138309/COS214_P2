#ifndef SWAMPTERRAIN_H
#define SWAMPTERRAIN_H
#include "AbstractTerrain.h"

#include <string>

class SwampTerrain : public AbstractTerrain{
private:
    int mudDepth;
public:
    SwampTerrain(const std::string& type, int cost, int depth);
    void displayTerrain();
};

#endif