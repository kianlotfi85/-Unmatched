#ifndef MAP_H
#define MAP_H

#include "Space.hpp"
#include <vector>

class Map
{
public:
    Map(); // Note : Map constructor --> need? list of Spaces - list of secretPassages
    bool canMove( int from, int to ) const;
    std::vector<int> getReachableSpaces( int fromID, int maxMoves); // BFS algorithm
    int getDistance(int from, int to) const;
    void moveFighter(int from, int to) const;
    
private:
    void initializeSpaces(); // Helper function
    std::vector<Space> spaces;
    std::vector<int> secretPassageSpaces; // List of secretPassages

};


#endif