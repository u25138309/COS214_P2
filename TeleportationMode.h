#ifndef COS214_P2_TELEPORTATIONMODE_H
#define COS214_P2_TELEPORTATIONMODE_H


#include "TravelMode.h"

class TeleportationMode : public TravelMode{
public:
    void move(Traveler* traveler);
};


#endif //COS214_P2_TELEPORTATIONMODE_H
