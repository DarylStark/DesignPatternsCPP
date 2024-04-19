#ifndef __MAZEGAME_H__
#define __MAZEGAME_H__

#include "Maze.h"
#include "MazeFactory.h"

class MazeGame
{
public:
    Maze *CreateMaze(MazeFactory &factory);
};

#endif /* __MAZEGAME_H__ */