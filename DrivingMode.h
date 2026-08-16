#ifndef COS214_P2_DRIVINGMODE_H
#define COS214_P2_DRIVINGMODE_H

#include "TravelMode.h"

class DrivingMode : public TravelMode{
public:
    void move(Traveler* traveler);
};


#endif //COS214_P2_DRIVINGMODE_H
