#include "SwampTerrain.h"
#include <iostream>

SwampTerrain::SwampTerrain(const std::string& type, int cost, int depth) 
    : AbstractTerrain(type, cost) , mudDepth(depth) {}

void SwampTerrain::displayTerrain() {
    std::cout << "Terrain: " << terrainType << " | Movement Cost: " << movementCost 
              << " | Mud Depth: " << mudDepth << "m\n";
}