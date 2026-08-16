#ifndef COS214_P2_FASTESTROUTESTRATEGY_H
#define COS214_P2_FASTESTROUTESTRATEGY_H

#include "RouteStrategy.h"

class FastestRouteStrategy : public RouteStrategy {
public:
    void planRoute(MapComponent *start, MapComponent *destination) override;
};


#endif //COS214_P2_FASTESTROUTESTRATEGY_H
