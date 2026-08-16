#include "Trip.h"

Trip(RouteStrategy* strategy);
~Trip();
void planRoute(MapComponent* start, MapComponent* destination);
void setStrategy(RouteStrategy* strategy);