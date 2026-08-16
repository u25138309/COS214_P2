#include "SwampFactory.h"
#include "SwampNPC.h"
#include "SwampTerrain.h"
#include "SwampObstacle.h"

AbstractNPC* SwampFactory::createNPC() {
    return new SwampNPC("Bog Witch", 80, true);
}

AbstractTerrain* SwampFactory::createTerrain() {
    return new SwampTerrain("Muddy Marsh", 20, 5);
}

AbstractObstacle* SwampFactory::createObstacle() {
    return new SwampObstacle("Poison Gas", 30, 12);
}