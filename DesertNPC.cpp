#include "DesertNPC.h"
#include <iostream>

DesertNPC::DesertNPC(const std::string& name, int health, int heatTol)
    : AbstractNPC(name, health), heatTolerance(heatTol) {}

void DesertNPC::interact() {
    std::cout << "Desert NPC [" << name << " | HP: " << health 
              << "] shares water. (Heat Tolerance: " << heatTolerance << "°C)\n";
}