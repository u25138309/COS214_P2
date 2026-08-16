#ifndef SWAMPFACTORY_H
#define SWAMPFACTORY_H
#include "WorldFactory.h"

class SwampFactory : public WorldFactory{
public:
    AbstractNPC* createNPC();
    AbstractTerrain* createTerrain();
    AbstractObstacle* createObstacle();
};

#endif