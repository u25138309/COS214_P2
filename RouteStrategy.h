#ifndef COS214_P2_ROUTESTRATEGY_H
#define COS214_P2_ROUTESTRATEGY_H

#include "MapComponent.h"

class RouteStrategy {
    public:
        RouteStrategy();
        virtual ~RouteStrategy();
        virtual void planRoute(MapComponent* start, MapComponent* destination) = 0;
};


#endif //COS214_P2_ROUTESTRATEGY_H
