#include "Traveler.h"
#include "TravelMode.h"

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

void Traveler::move() {
    if (travelMode != nullptr) {
        travelMode->move(this);
    }
}

void Traveler::setMode(TravelMode* travelMode) {
    if (travelMode != nullptr && this->travelMode != travelMode) {
        delete this->travelMode;
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