#include <iostream>
#include <string>

#include "DesertFactory.h"
#include "SwampFactory.h"
#include "VolcanoFactory.h"
#include "WorldFactory.h"

#include "AbstractNPC.h"
#include "AbstractObstacle.h"
#include "AbstractTerrain.h"

#include "Trip.h"
#include "FastestRouteStrategy.h"
#include "ShortestRouteStrategy.h"
#include "ScenicRouteStrategy.h"

#include "Region.h"
#include "Location.h"

#include "Traveler.h"
#include "WalkingMode.h"
#include "DrivingMode.h"
#include "FlyingMode.h"
#include "TeleportationMode.h"

#include "Location.h"
#include "Region.h"
#include "WeatherDecorator.h"
#include "TerrainDecorator.h"
#include "TollDecorator.h"
#include "RadiationDecorator.h"

void testFactory(WorldFactory* factory, const std::string& envName) {
    std::cout << "\n==========================================" << std::endl;
    std::cout << " Testing " << envName << std::endl;
    std::cout << "==========================================" << std::endl;

    if (!factory) {
        std::cout << "[ERROR] Factory instance is null!" << std::endl;
        return;
    }

    AbstractTerrain* terrain = factory->createTerrain();
    AbstractNPC* npc = factory->createNPC();
    AbstractObstacle* obstacle = factory->createObstacle();

    if (terrain) {
        std::cout << "[TERRAIN] ";
        terrain->displayTerrain();
    } else {
        std::cout << "[ERROR] Failed to create Terrain." << std::endl;
    }

    // 3. Test NPC
    if (npc) {
        std::cout << "[NPC] Name: " << npc->getName() << " | Health: " << npc->getHealth() << std::endl;
        std::cout << "[NPC Interaction] ";
        npc->interact();
    } else {
        std::cout << "[ERROR] Failed to create NPC." << std::endl;
    }

    // 4. Test Obstacle
    if (obstacle) {
        std::cout << "[OBSTACLE Hazard] ";
        obstacle->triggerHazard();
    } else {
        std::cout << "[ERROR] Failed to create Obstacle." << std::endl;
    }

    delete terrain;
    delete npc;
    delete obstacle;
}

int main() {
    std::cout << "==========================================" << std::endl;
    std::cout << "    COS 214 - ABSTRACT FACTORY TEST RUN   " << std::endl;
    std::cout << "==========================================" << std::endl;

    WorldFactory* desertFactory = new DesertFactory();
    testFactory(desertFactory, "Desert Environment");
    delete desertFactory;

    WorldFactory* swampFactory = new SwampFactory();
    testFactory(swampFactory, "Swamp Environment");
    delete swampFactory;

    WorldFactory* volcanoFactory = new VolcanoFactory();
    testFactory(volcanoFactory, "Volcano Environment");
    delete volcanoFactory;

    std::cout << "\n==========================================" << std::endl;
    std::cout << "       ABSTRACT FACTORY TESTS PASSED      " << std::endl;
    std::cout << "==========================================" << std::endl;

    std::cout << "=== Testing Strategy Pattern (Trip & RouteStrategy) ===" << std::endl << std::endl;

    std::cout << "[1] Initializing Trip with FastestRouteStrategy..." << std::endl;
    Trip* myTrip = new Trip(new FastestRouteStrategy());
    myTrip->planRoute(nullptr, nullptr);
    std::cout << std::endl;

    std::cout << "[2] Switching strategy to ShortestRouteStrategy..." << std::endl;
    myTrip->setStrategy(new ShortestRouteStrategy());
    myTrip->planRoute(nullptr, nullptr);
    std::cout << std::endl;

    std::cout << "[3] Switching strategy to ScenicRouteStrategy..." << std::endl;
    myTrip->setStrategy(new ScenicRouteStrategy());
    myTrip->planRoute(nullptr, nullptr);
    std::cout << std::endl;

    delete myTrip; 

    std::cout << "=== Strategy Pattern Test Passed Cleanly! ===" << std::endl;


    std::cout << "=== Testing Composite Pattern ===" << std::endl << std::endl;

    MapComponent* world = new Region("Mainland");

    MapComponent* forestRegion = new Region("Eldoria Forest");
    MapComponent* mountainRegion = new Region("Dragon's Spine");

    MapComponent* glade = new Location("Emerald Glade", 10);
    MapComponent* outpost = new Location("Guard Outpost", 5);
    MapComponent* peak = new Location("Frozen Summit", 25);

    forestRegion->add(glade);
    forestRegion->add(outpost);
    mountainRegion->add(peak);

    world->add(forestRegion);
    world->add(mountainRegion);

    std::cout << "--- World Map Display ---" << std::endl;
    world->display();

    std::cout << "\nTotal World Travel Cost: " << world->getTravelCost() << std::endl;

    delete world;

    std::cout << "\n=== Composite Test Passed ===" << std::endl;


    std::cout << "=== Testing State Pattern (Traveler & TravelMode) ===" << std::endl << std::endl;

    Traveler* traveler = new Traveler(new WalkingMode(), nullptr);

    std::cout << "Initial Stamina: " << traveler->getStamina() << std::endl << std::endl;

    std::cout << "[Step 1] Normal Walk:" << std::endl;
    traveler->move();
    std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    std::cout << "[Step 2] Give vehicle and move:" << std::endl;
    traveler->setHasVehicle(true);
    traveler->move(); // Triggers transition to DrivingMode
    std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    std::cout << "[Step 3] Give wings and move:" << std::endl;
    traveler->setHasWings(true);
    traveler->move(); // Triggers transition to FlyingMode
    std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    std::cout << "[Step 4] Draining stamina during flight:" << std::endl;
    traveler->setStamina(2); 
    traveler->move(); 
    std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    std::cout << "[Step 5] Force TeleportationMode:" << std::endl;
    traveler->setStamina(20);
    traveler->setMode(new TeleportationMode());
    traveler->move(); 
    std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    delete traveler;

    std::cout << "=== State Pattern Test Passed Cleanly! ===" << std::endl;


    std::cout << "=== Testing Decorator Pattern with Composite ===" << std::endl << std::endl;

    std::cout << "[1] Base Location:" << std::endl;
    MapComponent* baseLocation = new Location("Mountain Pass", 15);
    baseLocation->display();
    std::cout << "Base Cost: " << baseLocation->getTravelCost() << std::endl << std::endl;

    std::cout << "[2] Decorating Location with Blizzard Weather:" << std::endl;
    MapComponent* snowyPass = new WeatherDecorator(baseLocation, "Blizzard", 10);
    snowyPass->display();
    std::cout << "Decorated Cost: " << snowyPass->getTravelCost() << std::endl << std::endl;

    std::cout << "[3] Stacking Toll & Radiation Decorators:" << std::endl;
    MapComponent* dangerousPass = new TollDecorator(
                                      new RadiationDecorator(snowyPass, 3, 5), 20);
    dangerousPass->display();
    std::cout << "Total Stacked Cost: " << dangerousPass->getTravelCost() << std::endl << std::endl;

    std::cout << "[4] Decorating an entire Composite Region:" << std::endl;
    MapComponent* region = new Region("Wasteland Sector");
    region->add(new Location("Bunker A", 5));
    region->add(new Location("Bunker B", 10));

    MapComponent* rainyRegion = new WeatherDecorator(region, "Heavy Acid Rain", 15);
    rainyRegion->display();
    std::cout << "Total Region Cost (Base leaves + Weather): " << rainyRegion->getTravelCost() << std::endl << std::endl;

    delete dangerousPass;
    delete rainyRegion;

    std::cout << "=== Decorator Pattern Test Passed Cleanly! ===" << std::endl;


    return 0;
}