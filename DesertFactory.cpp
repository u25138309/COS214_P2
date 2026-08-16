#include "DesertFactory.h"
#include "DesertNPC.h"
#include "DesertTerrain.h"
#include "DesertObstacle.h"

AbstractNPC* DesertFactory::createNPC(){
    return new DesertNPC("Nomad", 100, 45);
}

AbstractTerrain* DesertFactory::createTerrain() {
    return new DesertTerrain("Sand Dunes", 15, 3);
}

AbstractObstacle* DesertFactory::createObstacle() {
    return new DesertObstacle("Quicksand", 25, 10);
}