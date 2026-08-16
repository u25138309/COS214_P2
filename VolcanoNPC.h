#ifndef VOLCANONPC_H
#define VOLCANONPC_H
#include "AbstractNPC.h"
#include <string>

class VolcanoNPC : public AbstractNPC{
private:
    int maxHeatLevel;
public:
    VolcanoNPC(const std::string& name, int health, int maxHeat);
    void interact();
};

#endif