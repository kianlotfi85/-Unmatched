#ifndef SPACE_H
#define SPACE_H

#include "enums.hpp"
#include "fighter.hpp"
#include <vector>

class Space
{
public:
    Space(int id, std::vector<int> neighbors, std::vector<Zone> zones );

    void set_id( int ); 
    void setOccupant( Fighter* ); 
    void addZone(Zone); 
    void setNeighbors( int ); 
    void setPassageSecret( bool );

    int get_id() const;
    const bool isEmpty() const; 
    bool isInZone(Zone z) const;
    bool isSecretPassageGroup() const;
    Fighter* getOccupant() const;
    std::vector<int> getNeighbors() const; 
private:   
    int id; 
   
    Fighter* occupant = nullptr;

    std::vector<Zone> zones; // the zones that Space is part of them
    std::vector<int> neighbors; // Vector of Space neighbors.   
    
    bool SecretPassage = false; // is the Space secret passage?
};

#endif