#ifndef TRAVELLER_H
#define TRAVELLER_H

#include "MapComponent.h"

class TravelMode;

class Traveler {
    private:
        TravelMode* travelMode;
        int stamina;
        bool hasWings;
        bool hasVehicle;
        MapComponent* location;
    public:
        Traveler(TravelMode* travelMode, MapComponent* location);
        ~Traveler();
        void move();
        void setMode(TravelMode* travelMode);
        int getStamina();
        void setStamina(int stamina);
        bool getHasWings();
        void setHasWings(bool wings);
        bool getHasVehicle();
        void setHasVehicle(bool vehicle);
};


#endif //COS214_P2_TRAVELLER_H
