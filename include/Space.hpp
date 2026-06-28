#ifndef SPACE_H
#define SPACE_H

#include "enums.hpp"
#include "fighter.hpp"
#include <vector>

class Space
{
public:
    Space(int id, std::vector<int> neighbors, std::vector<Zone> zones );
    const int get_id() const; 
    void set_id( const int ); 
    bool isEmpty(); // is Space empty?
    Fighter* getOccupmant();


private:
    int id; // the id of the Space
    std::vector<Zone> zones; // the zones that Space is part of them
    std::vector<int> neighbors; // Vector of Space neighbors The number of neighbors is not fixed.
    bool isSecretPassage = false; // is the Space secret passage?
};


#endif