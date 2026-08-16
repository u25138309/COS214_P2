#include "DesertTerrain.h"
#include <iostream>

DesertTerrain::DesertTerrain(const std::string& type, int cost, int depth)
    : AbstractTerrain(type, cost), sandDepth(depth) {}

void DesertTerrain::displayTerrain() {
    std::cout << "Terrain: " << terrainType << " | Movement Cost: " << movementCost 
              << " | Sand Depth: " << sandDepth << "m\n";
}