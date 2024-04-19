#include "MazeFactory.h"

Maze *MazeFactory::make_maze() const
{
    return new Maze;
}

Wall *MazeFactory::make_wall() const
{
    return new Wall;
}

Room *MazeFactory::make_room(int n) const
{
    return new Room(n);
}

Door *MazeFactory::make_door(Room *r1, Room *r2) const
{
    return new Door(r1, r2);
}