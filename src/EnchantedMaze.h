#ifndef __ENCHANTEDMAZE_H__
#define __ENCHANTEDMAZE_H__

#include "MazeFactory.h"
#include "MapSite.h"

class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int room_number);
    void enter();
};

class DoorNeedingSpell : public Door
{
public:
    DoorNeedingSpell(Room *room1, Room *room2);
    void enter();
};

class EnchantedMazeFactory : public MazeFactory
{
public:
    virtual EnchantedRoom *make_room(int n) const;
    virtual DoorNeedingSpell *make_door(Room *r1, Room *r2) const;
};

#endif /* __ENCHANTEDMAZE_H__ */