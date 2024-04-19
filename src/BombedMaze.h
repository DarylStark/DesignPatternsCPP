#ifndef __BOMBEDMAZE_H__
#define __BOMBEDMAZE_H__

#include "MapSite.h"
#include "MazeFactory.h"

class BombedWall : public Wall
{
public:
    void enter();
};

class RoomWithABomb : public Room
{
public:
    RoomWithABomb(int room_number);
    void enter();
};

class BombedMazeFactory : public MazeFactory
{
public:
    BombedWall *make_wall() const;
    RoomWithABomb *make_room(int n) const;
};

#endif /* __BOMBEDMAZE_H__ */