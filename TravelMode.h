#ifndef TRAVELMODE_H
#define TRAVELMODE_H

#include "Traveler.h"

class TravelMode {
    public:
    TravelMode();
    virtual ~TravelMode();
    virtual void move(Traveler* traveler) = 0;
};


#endif //COS214_P2_TRAVELMODE_H
