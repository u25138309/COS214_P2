#ifndef VOLCANOTERRAIN_H
#define VOLCANOTERRAIN_H
#include "AbstractTerrain.h"

#include <string>

class VolcanoTerrain : public AbstractTerrain{
private:
    double lavaDepth;
public:
    VolcanoTerrain(const std::string& type, int cost, double depth);
    void displayTerrain();
};

#endif