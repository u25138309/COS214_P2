#include "Trip.h"

Trip::Trip(RouteStrategy* strategy)
{
    if (strategy != nullptr) {
        this->strategy = strategy;
    }
}

Trip::~Trip()
{
    delete strategy;
}

void Trip::planRoute(MapComponent* start, MapComponent* destination) {
    if (strategy != nullptr)
    {
        strategy->planRoute(start, destination);
    }
}

void Trip::setStrategy(RouteStrategy* strategy)
{
    if (this->strategy != strategy)
    {
        delete this->strategy;
        this->strategy = strategy;
    }
}