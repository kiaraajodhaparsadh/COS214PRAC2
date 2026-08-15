#include <iostream>
#include <string>
#include <limits>

// --- State ---
#include "State/Traveller.h"
#include "State/OnFoot.h"
#include "State/OnBicycle.h"
#include "State/InAir.h"

// --- Strategy ---
#include "Strategy/Trip.h"
#include "Strategy/ShortestRoute.h"
#include "Strategy/FastestRoute.h"
#include "Strategy/ScenicRoute.h"
#include "Strategy/CheapestRoute.h"
#include "Strategy/SafestRoute.h"

// --- Composite & Decorator ---
#include "Composite_Decorator/Place.h"
#include "Composite_Decorator/Location.h"
#include "Composite_Decorator/Region.h"
#include "Composite_Decorator/WeatherDecorator.h"
#include "Composite_Decorator/TollDecorator.h"
#include "Composite_Decorator/QuestDecorator.h"

// --- Abstract Factory ---
#include "AbstractFactory/Factories/Abstract/WorldBuilder.h"
#include "AbstractFactory/Factories/Concrete/DesertBuilder.h"
#include "AbstractFactory/Factories/Concrete/OceanBuilder.h"
#include "AbstractFactory/Factories/Concrete/ForestBuilder.h"
#include "AbstractFactory/Factories/Concrete/CityBuilder.h"

// ---------- setup helpers ----------

Region* buildMap() {
    Region* root = new Region("Wayfarer World");

    // Create regions
    Region* Africa = new Region("Africa");
    Region* Europe = new Region("Europe");

    // Create locations
    Place* desert = new Location("Sahara Desert");
    Place* paris = new Location("Paris");
    Place* capeTown = new Location("Cape Town");

    // Decorate locations
    desert = new WeatherDecorator(desert);
    desert = new TollDecorator(desert);

    paris = new QuestDecorator(paris);

    capeTown = new WeatherDecorator(capeTown);
    capeTown = new QuestDecorator(capeTown);

    // Add locations to regions
    Africa->add(desert);
    Africa->add(capeTown);

    Europe->add(paris);

    // Add regions to root
    root->add(Africa);
    root->add(Europe);

    return root;
}

void printMenu() {
    std::cout << "\n--- Wayfarer ---\n"
              << "1. Move traveller\n"
              << "2. Change travel mode\n"
              << "3. Plan a trip (choose route strategy)\n"
              << "4. Print the map\n"
              << "5. Visit a biome (spawn NPC/terrain/obstacle)\n"
              << "6. Change biome/factory\n"
              << "7. Quit\n"
              << "Choice: ";
}

int main() {

    // -------------------------------------------------
    // Construct one of everything
    // -------------------------------------------------

    Traveller traveller;
    traveller.setState(new OnFoot());

    Trip trip(new ShortestRoute());

    Region* world = buildMap();

    WorldBuilder* currentFactory = new DesertBuilder();

    bool running = true;

    // -------------------------------------------------
    // Menu loop
    // -------------------------------------------------

    while (running) {

        printMenu();

        int choice;
        std::cin >> choice;

        if (std::cin.fail()) {
    if (std::cin.eof()) {
        std::cout << "\nInput closed. Exiting.\n";
        break; // exits the while loop
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter a number.\n";
    continue;
}

        switch (choice) {

            // -----------------------------------------
            // 1. Move traveller
            // -----------------------------------------

            case 1:
                std::cout << "\nTraveller movement:\n";
                traveller.move();
                break;


            // -----------------------------------------
            // 2. Change travel mode
            // -----------------------------------------

            case 2: {
                int mode;

                std::cout << "\nChoose travel mode:\n";
                std::cout << "1. On Foot\n";
                std::cout << "2. Bicycle\n";
                std::cout << "3. In Air\n";
                std::cout << "Choice: ";

                std::cin >> mode;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(
                        std::numeric_limits<std::streamsize>::max(),
                        '\n'
                    );

                    std::cout << "Invalid input.\n";
                    break;
                }

                switch (mode) {

                    case 1:
                        traveller.setState(new OnFoot());
                        std::cout << "Travel mode changed to On Foot.\n";
                        break;

                    case 2:
                        traveller.setState(new OnBicycle());
                        std::cout << "Travel mode changed to Bicycle.\n";
                        break;

                    case 3:
                        traveller.setState(new InAir());
                        std::cout << "Travel mode changed to In Air.\n";
                        break;

                    default:
                        std::cout << "Invalid travel mode.\n";
                }

                break;
            }


            // -----------------------------------------
            // 3. Plan a trip
            // -----------------------------------------

            case 3: {
                int strategyChoice;
                std::string from;
                std::string to;

                std::cout << "\nChoose route strategy:\n";
                std::cout << "1. Shortest Route\n";
                std::cout << "2. Fastest Route\n";
                std::cout << "3. Scenic Route\n";
                std::cout << "4. Cheapest Route\n";
                std::cout << "5. Safest Route\n";
                std::cout << "Choice: ";

                std::cin >> strategyChoice;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(
                        std::numeric_limits<std::streamsize>::max(),
                        '\n'
                    );

                    std::cout << "Invalid input.\n";
                    break;
                }

                switch (strategyChoice) {

                    case 1:
                        trip.setStrategy(new ShortestRoute());
                        break;

                    case 2:
                        trip.setStrategy(new FastestRoute());
                        break;

                    case 3:
                        trip.setStrategy(new ScenicRoute());
                        break;

                    case 4:
                        trip.setStrategy(new CheapestRoute());
                        break;

                    case 5:
                        trip.setStrategy(new SafestRoute());
                        break;

                    default:
                        std::cout << "Invalid strategy.\n";
                        break;
                }

                if (strategyChoice < 1 || strategyChoice > 5) {
                    break;
                }

                std::cout << "Enter starting location: ";
                std::cin >> from;

                std::cout << "Enter destination: ";
                std::cin >> to;

                std::cout << "\nPlanned route:\n";
                trip.plan(from, to);

                break;
            }


            // -----------------------------------------
            // 4. Print map
            // -----------------------------------------

            case 4:
                std::cout << "\n--- World Map ---\n";
                world->print();
                break;


            // -----------------------------------------
            // 5. Visit biome
            // -----------------------------------------

            case 5: {
                Terrain* terrain = currentFactory->createTerrain();
                NPC* npc = currentFactory->createNPC();
                Obstacle* obstacle = currentFactory->createObstacle();

                std::cout << "\n--- Biome ---\n";

                std::cout << "\nTerrain:\n";
                terrain->generate();
                terrain->display();

                std::cout << "\nNPC:\n";
                npc->interact();
                npc->move();

                std::cout << "\nObstacle:\n";
                obstacle->interact();
                obstacle->display();

                // WorldBuilder does NOT own these objects.
                // main() must delete them.
                delete terrain;
                delete npc;
                delete obstacle;

                break;
            }


            // -----------------------------------------
            // 6. Change biome/factory
            // -----------------------------------------

            case 6: {
                int biome;

                std::cout << "\nChoose biome:\n";
                std::cout << "1. Desert\n";
                std::cout << "2. Ocean\n";
                std::cout << "3. Forest\n";
                std::cout << "4. City\n";
                std::cout << "Choice: ";

                std::cin >> biome;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(
                        std::numeric_limits<std::streamsize>::max(),
                        '\n'
                    );

                    std::cout << "Invalid input.\n";
                    break;
                }

                WorldBuilder* newFactory = 0;

                switch (biome) {

                    case 1:
                        newFactory = new DesertBuilder();
                        std::cout << "Biome changed to Desert.\n";
                        break;

                    case 2:
                        newFactory = new OceanBuilder();
                        std::cout << "Biome changed to Ocean.\n";
                        break;

                    case 3:
                        newFactory = new ForestBuilder();
                        std::cout << "Biome changed to Forest.\n";
                        break;

                    case 4:
                        newFactory = new CityBuilder();
                        std::cout << "Biome changed to City.\n";
                        break;

                    default:
                        std::cout << "Invalid biome.\n";
                        break;
                }

                if (newFactory != 0) {
                    delete currentFactory;
                    currentFactory = newFactory;
                }

                break;
            }


            // -----------------------------------------
            // 7. Quit
            // -----------------------------------------

            case 7:
                running = false;
                break;


            default:
                std::cout << "Not a valid option.\n";
        }
    }

    // -------------------------------------------------
    // Cleanup
    // -------------------------------------------------

    delete world;
    delete currentFactory;

    return 0;
}