#ifndef VOLCANOOBSTACLE_H
#define VOLCANOOBSTACLE_H
#include "AbstractObstacle.h"

#include <string>

class VolcanoObstacle : public AbstractObstacle{
private:
    double blastRadius;
public:
    VolcanoObstacle(const std::string& name, int dmg, double radius);
    void triggerHazard();
};

#endif