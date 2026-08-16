#include "FlyingMode.h"
#include <iostream>
#include "WalkingMode.h"

void FlyingMode::move(Traveler* traveler) {
    std::cout << "Flying" << std::endl;
    traveler->setStamina(traveler->getStamina() - 3);
    if (traveler->getStamina() <= 0)
    {
        std::cout << "Too tired to fly. Switching to Walking." << std::endl;
        traveler->setMode(new WalkingMode());
    }
}