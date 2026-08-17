#include "Decorator.h"

Decorator::Decorator(MapComponent* comp) : component(comp) {}

Decorator::~Decorator() {
    delete component;
}

void Decorator::add(MapComponent* comp) {
    if (component) {
        component->add(comp);
    }
}

void Decorator::remove(MapComponent* comp) {
    if (component) {
        component->remove(comp);
    }
}

MapComponent* Decorator::getChild(int index) {
    if (component) {
        return component->getChild(index);
    }
    return nullptr;
}

void Decorator::populateRegion(WorldFactory* factory) {
    if (component) {
        component->populateRegion(factory);
    }
}