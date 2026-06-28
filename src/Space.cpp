#include "../include/Space.hpp"


int Space::get_id() const
{
    return id;
}


void Space::setOccupant( Fighter* occupant )
{
    this->occupant = occupant;
}

void Space::set_id(int id)
{
    this -> id = id;
}

void Space::addZone(Zone newZone)
{
    zones.push_back(newZone);
}