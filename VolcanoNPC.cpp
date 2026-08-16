#include "VolcanoNPC.h"
#include <iostream>

VolcanoNPC::VolcanoNPC(const std::string& name, int health, int maxHeat)
    : AbstractNPC(name, health), maxHeatLevel(maxHeat) {}

void VolcanoNPC::interact() {
    std::cout << "Volcano NPC [" << name << " | HP: " << health 
              << "] offers obsidian gear. (Max Heat Tolerance: " << maxHeatLevel << ")\n";
}