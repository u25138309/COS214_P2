#include "VolcanoObstacle.h"
#include <iostream>

VolcanicObstacle::VolcanicObstacle(const std::string& name, int dmg, double radius)
    : AbstractObstacle(name, dmg), blastRadius(radius) {}

void VolcanicObstacle::triggerHazard() {
    std::cout << "Hazard Triggered: " << hazardName << "! Deals " << damage 
              << " blast damage across a " << blastRadius << "m radius.\n";
}