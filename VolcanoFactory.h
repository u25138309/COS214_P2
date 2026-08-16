#ifndef VOLCANOFACTORY_H
#define VOLCANOFACTORY_H
#include "WorldFactory.h"

class VolcanoFactory : public WorldFactory{
public:
    AbstractNPC* createNPC();
    AbstractTerrain* createTerrain();
    AbstractObstacle* createObstacle();
};

#endif