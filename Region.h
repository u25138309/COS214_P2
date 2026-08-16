#ifndef REGION_H
#define REGION_H
#include <iostream>
#include <string>
#include <vector>
#include "MapComponent.h"

class WorldFactory;

class Region : public MapComponent{
private:
    std::string name;
    std::vector<MapComponent*> children;
public:
    Region(const std::string& name);
    ~Region();

    void display();
    void add(MapComponent* comp);
    void remove(MapComponent* comp);
    MapComponent* getChild(int index);
    int getTravelCost();
    void populateRegion(WorldFactory* factory);
};

#endif