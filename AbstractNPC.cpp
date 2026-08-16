#include "AbstractNPC.h"

AbstractNPC::AbstractNPC(const std::string& name, int health) 
    : name(name), health(health) {}

std::string AbstractNPC::getName(){
    return name;
}

int AbstractNPC::getHealth(){
    return health;
}