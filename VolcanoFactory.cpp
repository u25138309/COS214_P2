#include "VolcanoFactory.h"
#include "VolcanoNPC.h"
#include "VolcanoTerrain.h"
#include "VolcanoObstacle.h"

AbstractNPC* VolcanoFactory::createNPC() {
    return new VolcanoNPC("Fire Elemental", 150, 1000);
}

AbstractTerrain* VolcanoFactory::createTerrain() {
    return new VolcanoTerrain("Lava Field", 35, 2.5);
}

AbstractObstacle* VolcanoFactory::createObstacle() {
    return new VolcanoObstacle("Eruption Blast", 50, 15.0);
}