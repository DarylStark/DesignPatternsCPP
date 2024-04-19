#include "MapSite.h"

Room::Room(int room_number) : _room_number(room_number)
{
}

MapSite *Room::get_side(Direction direction) const
{
    return _sides[direction];
}

void Room::set_side(Direction direction, MapSite *mapSite)
{
    _sides[direction] = mapSite;
}

void Room::enter()
{
    // TODO: Implement this method.
}

int Room::room_number() const
{
    return _room_number;
}

Wall::Wall()
{
}

void Wall::enter()
{
    // TODO: Implement this method.
}

Door::Door(Room *room1, Room *room2) : _room1(room1), _room2(room2), _is_open(true)
{
}

void Door::enter()
{
    // TODO: Implement this method.
}

Room *Door::other_side_from(Room *room) const
{
    if (room == _room1)
        return _room2;
    return _room1;
}