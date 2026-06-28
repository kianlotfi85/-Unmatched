#ifndef SPACE_H
#define SPACE_H
#include "enums.hpp"
#include <vector>
class Space
{
public:

private:

    int id; // the id of the Space
    std::vector<Zone> zones; // the zones that Space is part of them
    std::vector<int> neighbors; // Vector of Space neighbors The number of neighbors is not fixed.
       
};


#endif