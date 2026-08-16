#ifndef COS214_P2_WALKINGMODE_H
#define COS214_P2_WALKINGMODE_H
#include "TravelMode.h"


class WalkingMode : public TravelMode{
public:
    void move(Traveler* traveler);
};


#endif //COS214_P2_WALKINGMODE_H
