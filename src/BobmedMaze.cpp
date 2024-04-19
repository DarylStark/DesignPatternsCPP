#include "BombedMaze.h"

void BombedWall::enter()
{
    // TODO: Implement this method.
}

RoomWithABomb::RoomWithABomb(int room_number) : Room(room_number)
{
}

void RoomWithABomb::enter()
{
    // TODO: Implement this method.
}

BombedWall *BombedMazeFactory::make_wall() const
{
    return new BombedWall;
}

RoomWithABomb *BombedMazeFactory::make_room(int n) const
{
    return new RoomWithABomb(n);
}