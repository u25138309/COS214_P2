#ifndef ABSTRACTNPC_H
#define ABSTRACTNPC_H

#include <string>

class AbstractNPC{
protected:
    std::string name;
    int health;
public:
    AbstractNPC(const std::string& name, int health);
    virtual ~AbstractNPC() = default;
    
    virtual void interact() = 0;
    std::string getName();
    int getHealth();
};

#endif