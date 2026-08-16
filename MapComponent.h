#ifndef MAPCOMPONENT_H
#define MAPCOMPONENT_H

class MapComponent{
public:
    virtual ~MapComponent() = default;
    virtual void display() = 0;
    virtual void add(MapComponent* comp) = 0;
    virtual void remove(MapComponent* comp) = 0;
    virtual MapComponent* getChild(int index) = 0;
    virtual int getTravelCost() = 0;
};

#endif