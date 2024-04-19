#ifndef __MAZE_H__
#define __MAZE_H__

#include "MapSite.h"
#include <map>

class Maze
{
public:
    Maze();
    void add_room(Room *room);
    Room *room_no(int roomNo) const;

private:
    std::map<int, Room *> _rooms;
};

#endif /* __MAZE_H__ */