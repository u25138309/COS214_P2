#include "VolcanoTerrain.h"
#include <iostream>

VolcanoTerrain::VolcanoTerrain(const std::string& type, int cost, double depth)
    : AbstractTerrain(type, cost), lavaDepth(depth) {}

void VolcanoTerrain::displayTerrain() {
    std::cout << "Terrain: " << terrainType << " | Movement Cost: " << movementCost 
              << " | Lava Depth: " << lavaDepth << "m\n";
}