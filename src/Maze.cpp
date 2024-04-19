#include "Maze.h"

Maze::Maze()
{
}

void Maze::add_room(Room *room)
{
    _rooms[room->room_number()] = room;
}

Room *Maze::room_no(int roomNo) const
{
    return _rooms.at(roomNo);
}