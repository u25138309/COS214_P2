#ifndef COS214_P2_TRIP_H
#define COS214_P2_TRIP_H

#include "MapComponent.h"
#include "RouteStrategy.h"

class Trip {
    private:
        RouteStrategy* strategy;
    public:
        Trip(RouteStrategy* strategy);
        ~Trip();
        void planRoute(MapComponent* start, MapComponent* destination);
        void setStrategy(RouteStrategy* strategy);
};


#endif //COS214_P2_TRIP_H
