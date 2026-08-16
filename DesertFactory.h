#ifndef DESERTFACTORY_H
#define DESERTFACTORY_H
#include "WorldFactory.h"
#include "AbstractNPC.h"
#include "AbstractTerrain.h"

class DesertFactory : public WorldFactory{
public:
    AbstractNPC* createNPC();
    AbstractTerrain* createTerrain();
    AbstractObstacle* createObstacle();
};

#endif