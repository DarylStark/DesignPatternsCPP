#include "MazeGame.h"
#include "MazeFactory.h"
#include "EnchantedMaze.h"
#include "BombedMaze.h"

int main()
{
    MazeGame game;

    MazeFactory my_default_factory;
    EnchantedMazeFactory my_enchanged_factory;
    BombedMazeFactory my_bombed_factory;

    Maze *maze = game.CreateMaze(my_default_factory);

    return 0;
}
