#ifndef SPACE_H
#define SPACE_H

#include "enums.hpp"
#include "fighter.hpp"
#include <vector>

class Space
{
public:

    Space(int id, std::vector<int> neighbors, std::vector<Zone> zones );

    //Setters
    void set_id( int ); 
    void setOccupant( Fighter* occupant );
    void addZone(Zone);
    void setNeighbors( int neighbors );

    // Getters 
    int get_id() const; 
    const bool isEmpty() const;
    bool isInZone(Zone z) const;
    bool isSecretPassageGroup() const;
    Fighter* getOccupant() const; // oh who is in my Space 
    std::vector<int> getNeighbors() const; 


private:
    //integers
    int id; // the id of the Space

    // Fighter
    Fighter* occupant = nullptr;

    // vectors
    std::vector<Zone> zones; // the zones that Space is part of them
    std::vector<int> neighbors; // Vector of Space neighbors.
   
    //booleans 
    bool SecretPassage = false; // is the Space secret passage?
};


#endif