#ifndef __MAZEFACTORY_H__
#define __MAZEFACTORY_H__

#include "Maze.h"
#include "MapSite.h"

class MazeFactory
{
public:
    virtual Maze *make_maze() const;
    virtual Wall *make_wall() const;
    virtual Room *make_room(int n) const;
    virtual Door *make_door(Room *r1, Room *r2) const;
};

#endif /* __MAZEFACTORY_H__ */