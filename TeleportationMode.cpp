#include "TeleportationMode.h"
#include <iostream>
#include "WalkingMode.h"

void TeleportationMode::move(Traveler* traveler) {
    std::cout << "Traveller teleports to another location."<< std::endl;
    traveler->setStamina(traveler->getStamina() - 10);
    std::cout << "Switching to Walking." << std::endl;
    traveler->setMode(new WalkingMode());
}
