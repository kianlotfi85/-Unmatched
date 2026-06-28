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
    void set_id( const int ); 
    void setOccupant( Fighter* occupant );

    // Getters 
    const int get_id() const; 
    const bool isEmpty() const;
    bool isInZone(Zone z) const;
    bool isSecretPassage() const;
    Fighter* getOccupant() const; // oh who is in my Space 


private:
    //integers
    int id; // the id of the Space

    // vectors
    std::vector<Zone> zones; // the zones that Space is part of them
    std::vector<int> neighbors; // Vector of Space neighbors The number of neighbors is not fixed.
   
    //booleans 
    bool SecretPassage = false; // is the Space secret passage?
};


#endif