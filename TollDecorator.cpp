#include "TollDecorator.h"

TollDecorator::TollDecorator(MapComponent* comp, int fee)
    : Decorator(comp), tollFee(fee) {}

int TollDecorator::getTravelCost() {
    if (component) {
        return component->getTravelCost() + tollFee;
    }
    return tollFee;
}

void TollDecorator::display() {
    if (component) {
        component->display();
    }
    std::cout << " [Toll Modifier: Gate Fee | Toll Cost: +" << tollFee << "]\n";
}