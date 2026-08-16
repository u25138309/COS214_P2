#ifndef ABSTRACTOBSTACLE_H
#define ABSTRACTOBSTACLE_H

class AbstractObstacle {
protected: 
    std::string hazardName;
    int damage;
public:
    virtual ~AbstractObstacle() = default;
    virtual void triggerHazard() = 0;
};

#endif