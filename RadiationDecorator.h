#ifndef RADIATIONDECORATOR_H
#define RADIATIONDECORATOR_H
#include <iostream>
#include "Decorator.h"

class RadiationDecorator : public Decorator{
private:
    int radiationLevel;
    int staminaPenaltyRate;
public:
    RadiationDecorator(MapComponent* comp, int radLevel, int penaltyRate);
    int getTravelCost();
    void display();
};

#endif