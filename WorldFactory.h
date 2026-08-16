#ifndef WORLDFACTORY_H
#define WORLDFACTORY_H
#include "AbstractNPC.h"
#include "AbstractTerrain.h"
#include "AbstractObstacle.h"

class WorldFactory {
public:
    virtual ~WorldFactory() = default;
    
    virtual AbstractNPC* createNPC() = 0;
    virtual AbstractTerrain* createTerrain() = 0;
    virtual AbstractObstacle* createObstacle() = 0;
};

#endif