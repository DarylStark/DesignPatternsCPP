#include "EnchantedMaze.h"

EnchantedRoom::EnchantedRoom(int room_number)
    : Room(room_number)
{
}

void EnchantedRoom::enter()
{
    // TODO: Imeplemnt this method.
}

DoorNeedingSpell::DoorNeedingSpell(Room *room1, Room *room2)
    : Door(room1, room2)
{
}

void DoorNeedingSpell::enter()
{
    // TODO: Imeplemnt this method.
}

EnchantedRoom *EnchantedMazeFactory::make_room(int n) const
{
    return new EnchantedRoom(n);
}

DoorNeedingSpell *EnchantedMazeFactory::make_door(Room *r1, Room *r2) const
{
    return new DoorNeedingSpell(r1, r2);
}