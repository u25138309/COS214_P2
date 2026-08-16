#include "Traveler.h"

Traveler::Traveler(TravelMode* travelMode, MapComponent* mapComponent) {
    this->travelMode = travelMode;
    this->stamina = 20;
    this->hasWings = false;
    this->hasVehicle = false;
    this->location = mapComponent;             //dont know how to handle yet
}

Traveler::~Traveler() {
    delete this->travelMode;
}

void Traveler::move()
{
    TravelMode* oldMode = travelMode;

    if (travelMode != nullptr)
    {
        travelMode->move(this);
    }

    if (oldMode != travelMode)
    {
        delete oldMode;
    }
}

void Traveler::setMode(TravelMode* travelMode) {
    if (travelMode != nullptr && this->travelMode != travelMode) {
        this->travelMode = travelMode;
    }
}

int Traveler::getStamina() {
    return this->stamina;
}

void Traveler::setStamina(int stamina) {
    this->stamina = stamina;
}

bool Traveler::getHasWings() {
    return this->hasWings;
}

void Traveler::setHasWings(bool wings) {
    this->hasWings = wings;
}

bool Traveler::getHasVehicle() {
    return this->hasVehicle;
}

void Traveler::setHasVehicle(bool vehicle) {
    this->hasVehicle = vehicle;
}