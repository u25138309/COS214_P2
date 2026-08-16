#ifndef WEATHERDECORATOR_H
#define WEATHERDECORATOR_H

#include <iostream>
#include <string>
#include "Decorator.h"

class WeatherDecorator : public Decorator{
private:
    std::string weatherCondition;
    int extraCost;
public:
    WeatherDecorator(MapComponent* comp, const std::string& condition, int extra);
    int getTravelCost();
    void display();
};

#endif