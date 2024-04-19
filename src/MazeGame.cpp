#include "MazeGame.h"

Maze *MazeGame::CreateMaze(MazeFactory &factory)
{
    Maze *aMaze = factory.make_maze();
    Room *r1 = factory.make_room(1);
    Room *r2 = factory.make_room(2);
    Door *theDoor = factory.make_door(r1, r2);

    aMaze->add_room(r1);
    aMaze->add_room(r2);

    r1->set_side(North, new Wall);
    r1->set_side(East, theDoor);
    r1->set_side(South, new Wall);
    r1->set_side(West, new Wall);

    r2->set_side(North, new Wall);
    r2->set_side(East, new Wall);
    r2->set_side(South, new Wall);
    r2->set_side(West, theDoor);

    return aMaze;
}