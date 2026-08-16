#ifndef COS214_P2_SCENICROUTESTRATEGY_H
#define COS214_P2_SCENICROUTESTRATEGY_H

#include "RouteStrategy.h"

class ScenicRouteStrategy : public RouteStrategy {
public:
    void planRoute(MapComponent *start, MapComponent *destination) override;
};


#endif //COS214_P2_SCENICROUTESTRATEGY_H
