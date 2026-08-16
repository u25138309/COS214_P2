#include "Region.h"
#include "WorldFactory.h"
#include <iostream>

Region::Region(const std::string& name) : name(name) {}

Region::~Region() {
    for (MapComponent* child : children) {
        delete child;
    }
    children.clear();
}

void Region:display(){
    std::cout << " REGION: " << name << " (Children: " << children.size() << ")\n";

    for (MapComponent* child : children) {
        if (child) {
            child->display();
        }
    }
}

void Region::add(MapComponent* comp) {
    if (comp) {
        children.push_back(comp);
    }
}

void Region::remove(MapComponent* comp) {
    if (!comp) return;

    for (size_t i = 0; i < children.size(); ++i) {
        if (children[i] == comp) {
            delete children[i];
            children.erase(children.begin() + i);
            break;
        }
    }
}

MapComponent* Region::getChild(int index) {
    if (index >= 0 && index < static_cast<int>(children.size())) {
        return children[index];
    }
    return nullptr;
}

int Region::getTravelCost() {
    int totalCost = 0;
    for (MapComponent* child : children) {
        if (child) {
            totalCost += child->getTravelCost();
        }
    }
    return totalCost;
}

void Region::populateRegion(WorldFactory* factory) {
    if (!factory) return;

    for (MapComponent* child : children) {
        if (child) {
            Region* subRegion = dynamic_cast<Region*>(child);
            if (subRegion) {
                subRegion->populateRegion(factory);
            } else {
                child->populateRegion(factory);
            }
        }
    }
}