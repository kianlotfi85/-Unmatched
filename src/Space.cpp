#include "../include/Space.hpp"

// getters
int Space::get_id() const
{
    return id;
}

const bool Space::isEmpty() const
{
    if(occupant == nullptr)
    {
        return true;
    }
    return false;
}



// setters
void Space::setOccupant( Fighter* occupant )
{
    this -> occupant = occupant;
}

void Space::set_id(int id)
{
    this -> id = id;
}

void Space::addZone(Zone newZone)
{
    zones.push_back(newZone);
}

void Space::setNeighbors( int newNeighbor )
{
    neighbors.push_back(newNeighbor);
}