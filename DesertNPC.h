#ifndef DESERTNPC_H
#define DESERTNPC_H
#include "AbstractNPC.h"

#include <string>
class DesertNPC : public AbstractNPC{
private:
    int heatTolerance;
public:
    DesertNPC(const std::string& name, int health, int heatTol);
    void interact();
};

#endif