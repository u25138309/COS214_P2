#include "AbstractObstacle.h"

AbstractObstacle::AbstractObstacle(const std::string& hazardName, int damage) 
    : hazardName(hazardName), damage(damage) {}