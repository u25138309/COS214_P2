#include "VolcanoObstacle.h"
#include <iostream>

VolcanoObstacle::VolcanoObstacle(const std::string& name, int dmg, double radius)
    : AbstractObstacle(name, dmg), blastRadius(radius) {}

void VolcanoObstacle::triggerHazard() {
    std::cout << "Hazard Triggered: " << hazardName << "! Deals " << damage 
              << " blast damage across a " << blastRadius << "m radius.\n";
}