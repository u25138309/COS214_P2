#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
#include "MapComponent.h"

class AbstractTerrain;
class AbstractNPC;
class AbstractObstacle;
class WorldFactory;

class Location : public MapComponent{
private:
    std::string name;
    int travelCost;
    AbstractTerrain* terrain;
    AbstractNPC* npc;
    AbstractObstacle* obstacle;
public:
    Location(const std::string& name, int cost = 0);
    ~Location();
    
    void display();
    void add(MapComponent* comp);
    void remove(MapComponent* comp);
    MapComponent* getChild(int index);
    int getTravelCost();

    void setTerrain(AbstractTerrain* terrain);
    void setNPC(AbstractNPC* npc);
    void setObstacle(AbstractObstacle* obstacle);
    void populateLocation(WorldFactory* factory);
};

#endif