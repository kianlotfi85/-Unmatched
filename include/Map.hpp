#ifndef MAP_H
#define MAP_H

#include "Space.hpp"
#include <vector>

class Map
{
public:

    bool canMove( int from, int to ) const;
    std::vector<int> getReahableSpaces( int fromID, int moves) const;
    int getDistance(int from, int to) const;
    void moveFighter(int from, int to) const;
private:

    std::vector<Space> spaces;
    std::vector<int> secretPassageSpaces;

};


#endif