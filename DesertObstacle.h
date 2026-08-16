#ifndef DESERTOBSTACLE_H
#define DESERTOBSTACLE_H
#include "AbstractObstacle.h"

#include <string>

class DesertObstacle : public AbstractObstacle{
private:
    int dehydration;
public:
    DesertObstacle(const std::string& name, int dmg, int dehydrate);
    void triggerHazard();
};

#endif