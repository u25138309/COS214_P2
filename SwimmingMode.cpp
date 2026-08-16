#include "SwimmingMode.h"
#include <iostream>

void SwimmingMode::move(Traveler* traveler) {
    std::cout << "Swimming" << std::endl;
    traveler->setStamina(traveler->getStamina() - 1);
}