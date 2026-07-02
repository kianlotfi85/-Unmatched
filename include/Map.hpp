#ifndef MAP_H
#define MAP_H

#include "Space.hpp"
#include <vector>

class Map
{
public:
    Map();
    bool canMove( int from, int to ) const;
    std::vector<int> getReachableSpaces( int fromID, int maxMoves); // BFS algorithm
    int getDistance(int from, int to) const;
    void moveFighter(int from, int to) const;
private:

    std::vector<Space> spaces;
    std::vector<int> secretPassageSpaces; // List of secretPassages

};


#endif