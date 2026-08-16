#ifndef COS214_P2_SWIMMINGMODE_H
#define COS214_P2_SWIMMINGMODE_H

#include "TravelMode.h"

class SwimmingMode : public TravelMode{
public:
    void move(Traveler* traveler);
};


#endif //COS214_P2_SWIMMINGMODE_H
