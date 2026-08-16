#ifndef DESERTTERRAIN_H
#define DESERTTERRAIN_H
#include "AbstractTerrain.h"

#include <string>

class DesertTerrain : public AbstractTerrain{
private:
    int sandDepth;
public:
    DesertTerrain(const std::string& type, int cost, int depth);
    void displayTerrain();
};

#endif