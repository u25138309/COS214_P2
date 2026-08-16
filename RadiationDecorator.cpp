#include "RadiationDecorator.h"

RadiationDecorator::RadiationDecorator(MapComponent* comp, int radLevel, int penaltyRate)
    : Decorator(comp), radiationLevel(radLevel), staminaPenaltyRate(penaltyRate) {}

int RadiationDecorator::getTravelCost() {
    int radCost = radiationLevel * staminaPenaltyRate;
    if (component) {
        return component->getTravelCost() + radCost;
    }
    return radCost;
}

void RadiationDecorator::display() {
    if (component) {
        component->display();
    }
    std::cout << " [Radiation Modifier: Level " << radiationLevel 
              << " | Stamina Penalty Rate: " << staminaPenaltyRate << "]\n";
}