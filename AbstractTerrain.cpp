#include "AbstractTerrain.h"

AbstractTerrain::AbstractTerrain(const std::string& type, int cost) 
    : terrainType(type), movementCost(cost) {}