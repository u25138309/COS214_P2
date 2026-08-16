#include "DrivingMode.h"
#include "FlyingMode.h"
#include <iostream>

void DrivingMode::move(Traveler *traveler) {
    std::cout << "Driving" << std::endl;
    traveler->setStamina(traveler->getStamina() - 2);
    if (traveler->getHasWings() && traveler->getStamina() >= 5)
    {
        std::cout << "Switch to Flying" << std::endl;
        traveler->setMode(new FlyingMode());
    }
}
