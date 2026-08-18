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
    // std::cout << "==========================================" << std::endl;
    // std::cout << "    COS 214 - ABSTRACT FACTORY TEST RUN   " << std::endl;
    // std::cout << "==========================================" << std::endl;

    // WorldFactory* desertFactory = new DesertFactory();
    // testFactory(desertFactory, "Desert Environment");
    // delete desertFactory;

    // WorldFactory* swampFactory = new SwampFactory();
    // testFactory(swampFactory, "Swamp Environment");
    // delete swampFactory;

    // WorldFactory* volcanoFactory = new VolcanoFactory();
    // testFactory(volcanoFactory, "Volcano Environment");
    // delete volcanoFactory;

    // std::cout << "\n==========================================" << std::endl;
    // std::cout << "       ABSTRACT FACTORY TESTS PASSED      " << std::endl;
    // std::cout << "==========================================" << std::endl;

    // std::cout << "=== Testing Strategy Pattern (Trip & RouteStrategy) ===" << std::endl << std::endl;

    // std::cout << "[1] Initializing Trip with FastestRouteStrategy..." << std::endl;
    // Trip* myTrip = new Trip(new FastestRouteStrategy());
    // myTrip->planRoute(nullptr, nullptr);
    // std::cout << std::endl;

    // std::cout << "[2] Switching strategy to ShortestRouteStrategy..." << std::endl;
    // myTrip->setStrategy(new ShortestRouteStrategy());
    // myTrip->planRoute(nullptr, nullptr);
    // std::cout << std::endl;

    // std::cout << "[3] Switching strategy to ScenicRouteStrategy..." << std::endl;
    // myTrip->setStrategy(new ScenicRouteStrategy());
    // myTrip->planRoute(nullptr, nullptr);
    // std::cout << std::endl;

    // delete myTrip; 

    // std::cout << "=== Strategy Pattern Test Passed Cleanly! ===" << std::endl;


    // std::cout << "=== Testing Composite Pattern ===" << std::endl << std::endl;

    // MapComponent* world = new Region("Mainland");

    // MapComponent* forestRegion = new Region("Eldoria Forest");
    // MapComponent* mountainRegion = new Region("Dragon's Spine");

    // MapComponent* glade = new Location("Emerald Glade", 10);
    // MapComponent* outpost = new Location("Guard Outpost", 5);
    // MapComponent* peak = new Location("Frozen Summit", 25);

    // forestRegion->add(glade);
    // forestRegion->add(outpost);
    // mountainRegion->add(peak);

    // world->add(forestRegion);
    // world->add(mountainRegion);

    // std::cout << "--- World Map Display ---" << std::endl;
    // world->display();

    // std::cout << "\nTotal World Travel Cost: " << world->getTravelCost() << std::endl;

    // delete world;

    // std::cout << "\n=== Composite Test Passed ===" << std::endl;


    // std::cout << "=== Testing State Pattern (Traveler & TravelMode) ===" << std::endl << std::endl;

    // Traveler* traveler = new Traveler(new WalkingMode(), nullptr);

    // std::cout << "Initial Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // std::cout << "[Step 1] Normal Walk:" << std::endl;
    // traveler->move();
    // std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // std::cout << "[Step 2] Give vehicle and move:" << std::endl;
    // traveler->setHasVehicle(true);
    // traveler->move(); // Triggers transition to DrivingMode
    // std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // std::cout << "[Step 3] Give wings and move:" << std::endl;
    // traveler->setHasWings(true);
    // traveler->move(); // Triggers transition to FlyingMode
    // std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // std::cout << "[Step 4] Draining stamina during flight:" << std::endl;
    // traveler->setStamina(2); 
    // traveler->move(); 
    // std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // std::cout << "[Step 5] Force TeleportationMode:" << std::endl;
    // traveler->setStamina(20);
    // traveler->setMode(new TeleportationMode());
    // traveler->move(); 
    // std::cout << "Current Stamina: " << traveler->getStamina() << std::endl << std::endl;

    // delete traveler;

    // std::cout << "=== State Pattern Test Passed Cleanly! ===" << std::endl;


    // std::cout << "=== Testing Decorator Pattern with Composite ===" << std::endl << std::endl;

    // std::cout << "[1] Base Location:" << std::endl;
    // MapComponent* baseLocation = new Location("Mountain Pass", 15);
    // baseLocation->display();
    // std::cout << "Base Cost: " << baseLocation->getTravelCost() << std::endl << std::endl;

    // std::cout << "[2] Decorating Location with Blizzard Weather:" << std::endl;
    // MapComponent* snowyPass = new WeatherDecorator(baseLocation, "Blizzard", 10);
    // snowyPass->display();
    // std::cout << "Decorated Cost: " << snowyPass->getTravelCost() << std::endl << std::endl;

    // std::cout << "[3] Stacking Toll & Radiation Decorators:" << std::endl;
    // MapComponent* dangerousPass = new TollDecorator(
    //                                   new RadiationDecorator(snowyPass, 3, 5), 20);
    // dangerousPass->display();
    // std::cout << "Total Stacked Cost: " << dangerousPass->getTravelCost() << std::endl << std::endl;

    // std::cout << "[4] Decorating an entire Composite Region:" << std::endl;
    // MapComponent* region = new Region("Wasteland Sector");
    // region->add(new Location("Bunker A", 5));
    // region->add(new Location("Bunker B", 10));

    // MapComponent* rainyRegion = new WeatherDecorator(region, "Heavy Acid Rain", 15);
    // rainyRegion->display();
    // std::cout << "Total Region Cost (Base leaves + Weather): " << rainyRegion->getTravelCost() << std::endl << std::endl;

    // delete dangerousPass;
    // delete rainyRegion;

    // std::cout << "=== Decorator Pattern Test Passed Cleanly! ===" << std::endl;

    //-----------------------------------------------------------------------------------------------------------------
    // 1. Setup World Hierarchy (Composite)
    Region* worldMap = new Region("Aethelgard World");
    Region* desertRegion = new Region("Shifting Dunes");
    Region* swampRegion = new Region("Misty Bog");
    Region* volcanoRegion = new Region("Ashen Peaks");

    Location* desertLoc = new Location("Oasis Outpost", 12);
    Location* swampLoc = new Location("Sunken Ruins", 18);
    Location* volcanoLoc = new Location("Magma Cavern", 25);

    desertRegion->add(desertLoc);
    swampRegion->add(swampLoc);
    volcanoRegion->add(volcanoLoc);

    worldMap->add(desertRegion);
    worldMap->add(swampRegion);
    worldMap->add(volcanoRegion);

    // Dynamic Decorator target pointer initialized to root map
    MapComponent* activeMap = worldMap;

    // 2. Setup Traveler (State)
    Traveler* player = new Traveler(new WalkingMode(), activeMap);

    // 3. Setup Trip Planner (Strategy)
    Trip* tripPlanner = new Trip(new FastestRouteStrategy());

    // 4. Setup Biome Factories (Abstract Factory)
    WorldFactory* desertFact = new DesertFactory();
    WorldFactory* swampFact = new SwampFactory();
    WorldFactory* volcanoFact = new VolcanoFactory();

    int choice = 0;
    while (choice != 7) {
        std::cout << "\n=============================================\n";
        std::cout << "      WAYFARER: THE PATTERN EXPEDITION       \n";
        std::cout << "=============================================\n";
        std::cout << "Player Status | Stamina: " << player->getStamina() 
                  << " | Has Wings: " << (player->getHasWings() ? "Yes" : "No")
                  << " | Has Vehicle: " << (player->getHasVehicle() ? "Yes" : "No") << "\n";
        std::cout << "Current Map Total Travel Cost: " << activeMap->getTravelCost() << "\n";
        std::cout << "---------------------------------------------\n";
        std::cout << "1. Walk/Move Character \n";
        std::cout << "2. Switch Route Strategy & Plan Trip \n";
        std::cout << "3. Inspect Map Structure \n";
        std::cout << "4. Step into Biome & Spawn Hazards/NPCs \n";
        std::cout << "5. Stack Condition Modifiers on Map \n";
        std::cout << "6. Toggle Player Gear \n";
        std::cout << "7. Exit Expedition\n";
        std::cout << "Select Action (1-7): ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        std::cout << "\n---------------------------------------------\n";

        switch (choice) {
            case 1: {
                std::cout << "[ACTION: MOVE]\n";
                player->move();
                break;
            }
            case 2: {
                std::cout << "[ACTION: SELECT ROUTE STRATEGY]\n";
                std::cout << "1. Fastest Route\n2. Shortest Route\n3. Scenic Route\nChoice: ";
                int stratChoice;
                std::cin >> stratChoice;
                if (stratChoice == 1) tripPlanner->setStrategy(new FastestRouteStrategy());
                else if (stratChoice == 2) tripPlanner->setStrategy(new ShortestRouteStrategy());
                else if (stratChoice == 3) tripPlanner->setStrategy(new ScenicRouteStrategy());

                tripPlanner->planRoute(desertLoc, volcanoLoc);
                break;
            }
            case 3: {
                std::cout << "[ACTION: DISPLAY COMPOSITE MAP]\n";
                activeMap->display();
                break;
            }
            case 4: {
                std::cout << "[ACTION: EXPLORE BIOME FACTORY]\n";
                std::cout << "Choose Biome: 1. Desert | 2. Swamp | 3. Volcano\nChoice: ";
                int bChoice;
                std::cin >> bChoice;
                WorldFactory* selectedFact = nullptr;
                if (bChoice == 1) selectedFact = desertFact;
                else if (bChoice == 2) selectedFact = swampFact;
                else if (bChoice == 3) selectedFact = volcanoFact;

                if (selectedFact) {
                    AbstractTerrain* t = selectedFact->createTerrain();
                    AbstractNPC* n = selectedFact->createNPC();
                    AbstractObstacle* o = selectedFact->createObstacle();

                    std::cout << "\n--- Spawned Biome Elements ---\n";
                    if (t) { t->displayTerrain(); }
                    if (n) { std::cout << "NPC Met: " << n->getName() << "\nInteraction: "; n->interact(); }
                    if (o) { std::cout << "Hazard: "; o->triggerHazard(); }

                    delete t;
                    delete n;
                    delete o;
                }
                break;
            }
            case 5: {
                std::cout << "[ACTION: DECORATE MAP ENVIRONMENT]\n";
                std::cout << "1. Apply Acid Rain (+15 Cost)\n";
                std::cout << "2. Place Toll Gate (+20 Cost)\n";
                std::cout << "3. Add Radiation Zone (Level 3)\n";
                std::cout << "Choice: ";
                int dChoice;
                std::cin >> dChoice;

                if (dChoice == 1) {
                    activeMap = new WeatherDecorator(activeMap, "Acid Rainstorm", 15);
                } else if (dChoice == 2) {
                    activeMap = new TollDecorator(activeMap, 20);
                } else if (dChoice == 3) {
                    activeMap = new RadiationDecorator(activeMap, 3, 5);
                }
                std::cout << "Map decorated successfully!\n";
                break;
            }
            case 6: {
                std::cout << "[ACTION: TOGGLE GEAR]\n";
                std::cout << "1. Toggle Wings\n2. Toggle Vehicle\nChoice: ";
                int gChoice;
                std::cin >> gChoice;
                if (gChoice == 1) player->setHasWings(!player->getHasWings());
                if (gChoice == 2) player->setHasVehicle(!player->getHasVehicle());
                break;
            }
            case 7:
                std::cout << "Exiting Expedition... Cleaning up memory.\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
                break;
        }
    }

    delete player;        
    delete tripPlanner;   
    delete activeMap;     
    delete desertFact;
    delete swampFact;
    delete volcanoFact;


    return 0;
}