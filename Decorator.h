#ifndef DECORATOR_H
#define DECORATOR_H
#include "MapComponent.h"

class WorldFactory;

class Decorator : public MapComponent{
protected:
    MapComponent* component;
public:
    Decorator(MapComponent* comp);
    virtual ~Decorator();

    virtual int getTravelCost() = 0;
    virtual void display() = 0;

    void add(MapComponent* comp);
    void remove(MapComponent* comp);
    MapComponent* getChild(int index);
    void populateRegion(WorldFactory* factory);
};

#endif