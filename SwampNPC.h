#ifndef SWAMPNPC_H
#define SWAMPNPC_H
#include "AbstractNPC.h"
#include <string>

class SwampNPC : public AbstractNPC{
private:
    bool isHostile;
public:
    SwampNPC(const std::string& name, int health, bool hostile);
    void interact();
};

#endif