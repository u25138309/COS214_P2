#include "DesertObstacle.h"
#include <iostream>

DesertObstacle::DesertObstacle(const std::string& name, int dmg, int dehydrate)
    : AbstractObstacle(name, dmg), dehydration(dehydrate) {}

void DesertObstacle::triggerHazard() {
    std::cout << "Hazard Triggered: " << hazardName << "! Deals " << damage 
              << " damage and increases dehydration by " << dehydration << ".\n";
}