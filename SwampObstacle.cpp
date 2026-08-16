#include "SwampObstacle.h"
#include <iostream>

SwampObstacle::SwampObstacle(const std::string& name, int dmg, int poisonDmg)
    : AbstractObstacle(name, dmg), poisonDamage(poisonDmg) {}

void SwampObstacle::triggerHazard() {
    std::cout << "Hazard Triggered: " << hazardName << "! Deals " << damage 
              << " initial damage and " << poisonDamage << " poison damage over time.\n";
}