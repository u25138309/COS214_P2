#ifndef ABSTRACTOBSTACLE_H
#define ABSTRACTOBSTACLE_H

#include <string>

class AbstractObstacle {
protected: 
    std::string hazardName;
    int damage;
public:
    AbstractObstacle(const std::string& hazardName, int damage);
    virtual ~AbstractObstacle() = default;
    virtual void triggerHazard() = 0;
};

#endif