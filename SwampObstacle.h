#ifndef SWAMPOBSTACLE_H
#define SWAMPOBSTACLE_H
#include "AbstractObstacle.h"

#include <string>

class SwampObstacle : public AbstractObstacle{
private:
    int poisonDamage;
public:
    SwampObstacle(const std::string& name, int dmg, int poisonDmg);
    void triggerHazard();
};

#endif