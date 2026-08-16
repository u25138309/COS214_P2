#ifndef TOLLDECORATOR_H
#define TOLLDECORATOR_H
#include <iostream>
#include "Decorator.h"

class TollDecorator : public Decorator{
private:
    int tollFee;
public:
    TollDecorator(MapComponent* comp, int fee);
    int getTravelCost();
    void display();
};

#endif