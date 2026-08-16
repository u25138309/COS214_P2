#include "SwimmingMode.h"
#include <iostream>

#include "WalkingMode.h"

void SwimmingMode::move(Traveler* traveler) {
    std::cout << "Swimming" << std::endl;
    traveler->setStamina(traveler->getStamina() - 1);
    if (traveler->getStamina() <= 0) {
        std::cout << "Switch to Walking" << std::endl;
        traveler->setMode(new WalkingMode());
    }
}
