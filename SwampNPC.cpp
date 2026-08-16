#include "SwampNPC.h"
#include <iostream>

SwampNPC::SwampNPC(const std::string& name, int health, bool hostile)
    : AbstractNPC(name, health), isHostile(hostile) {}

void SwampNPC::interact() {
    std::cout << "Swamp NPC [" << name << " | HP: " << health 
              << "] offers herbs. (Hostile: " << (isHostile ? "Yes" : "No") << ")\n";
}