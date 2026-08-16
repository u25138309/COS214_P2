#include "Location.h"
#include "WorldFactory.h"
#include "AbstractTerrain.h"
#include "AbstractNPC.h"
#include "AbstractObstacle.h"
#include <iostream>

Location::Location(const std::string& name, int cost)
    : name(name), travelCost(cost), terrain(nullptr), npc(nullptr), obstacle(nullptr) {}

Location::~Location(){
    delete terrain;
    delete npc;
    delete obstacle;
}

void Location::display(){
    std::cout << "\n=== Location: " << name << " (Base Travel Cost: " << travelCost << ") ===\n";

    if(terrain){
        terrain->displayTerrain();
    } else {
        std::cout << "Terrain: None\n";
    }

    if (npc) {
        npc->interact();
    } else {
        std::cout << "NPC: None\n";
    }

    if (obstacle) {
        obstacle->triggerHazard();
    } else {
        std::cout << "Obstacle: None\n";
    }
}

void Location::add(MapComponent* comp) {
    std::cout << "Cannot add components to a Location (Leaf node).\n";
}

void Location::remove(MapComponent* comp) {
    std::cout << "Cannot remove components from a Location (Leaf node).\n";
}

MapComponent* Location::getChild(int index) {
    return nullptr;
}

int Location::getTravelCost() {
    int totalCost = travelCost;
    return totalCost;
}

void Location::setTerrain(AbstractTerrain* terrain) {
    delete this->terrain;
    this->terrain = terrain;
}

void Location::setNPC(AbstractNPC* npc) {
    delete this->npc;
    this->npc = npc;
}

void Location::setObstacle(AbstractObstacle* obstacle) {
    delete this->obstacle;
    this->obstacle = obstacle;
}

void Location::populateLocation(WorldFactory* factory){
    if(factory){
        delete terrain;
        delete npc;
        delete obstacle;

        terrain = factory->createTerrain();
        npc = factory->createNPC();
        obstacle = factory->createObstacle();
    }
}