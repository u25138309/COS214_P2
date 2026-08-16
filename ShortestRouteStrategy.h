#ifndef COS214_P2_SHORTESTROUTESTRATEGY_H
#define COS214_P2_SHORTESTROUTESTRATEGY_H
#include "RouteStrategy.h"

class ShortestRouteStrategy : public RouteStrategy {
    public:
        void planRoute(MapComponent *start, MapComponent *destination) override;
};


#endif //COS214_P2_SHORTESTROUTESTRATEGY_H
