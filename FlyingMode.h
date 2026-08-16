#ifndef COS214_P2_FLYINGMODE_H
#define COS214_P2_FLYINGMODE_H

#include "TravelMode.h"

class FlyingMode : public TravelMode{
public:
    void move(Traveler* traveler);
};

#endif //COS214_P2_FLYINGMODE_H