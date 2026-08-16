#include "WalkingMode.h"
#include "DrivingMode.h"
#include <iostream>

void WalkingMode::move(Traveler* traveler) {
    std::cout << "Walking" << std::endl;
    traveler->setStamina(traveler->getStamina() + 1);
    if (traveler->getHasVehicle())
    {
        std::cout << "Switch to Vehicle" << std::endl;
        traveler->setMode(new DrivingMode());
    }
}