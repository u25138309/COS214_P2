#include "WeatherDecorator.h"

WeatherDecorator::WeatherDecorator(MapComponent* comp, const std::string& condition, int extra)
    : Decorator(comp), weatherCondition(condition), extraCost(extra) {}

int WeatherDecorator::getTravelCost() {
    if (component) {
        return component->getTravelCost() + extraCost;
    }
    return extraCost;
}

void WeatherDecorator::display() {
    if (component) {
        component->display();
    }
    std::cout << " [Weather Modifier: " << weatherCondition 
              << " | Extra Cost: +" << extraCost << "]\n";
}