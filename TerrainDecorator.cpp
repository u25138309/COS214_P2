#include "TerrainDecorator.h"

TerrainDecorator::TerrainDecorator(MapComponent* comp, const std::string& type, int cost)
    : Decorator(comp), terrainType(type), terrainCost(cost) {}

int TerrainDecorator::getTravelCost() {
    if (component) {
        return component->getTravelCost() + terrainCost;
    }
    return terrainCost;
}

void TerrainDecorator::display() {
    if (component) {
        component->display();
    }
    std::cout << " [Terrain Modifier: " << terrainType 
              << " | Terrain Cost: +" << terrainCost << "]\n";
}