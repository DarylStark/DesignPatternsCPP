#ifndef __MAPSITES_H__
#define __MAPSITES_H__

enum Direction
{
    North,
    South,
    East,
    West
};

class MapSite
{
public:
    virtual void enter() = 0;
};

class Room : public MapSite
{
public:
    Room(int room_number);
    MapSite *get_side(Direction direction) const;
    void set_side(Direction direction, MapSite *mapSite);
    virtual void enter();
    int room_number() const;

private:
    MapSite *_sides[4];
    int _room_number;
};

class Wall : public MapSite
{
public:
    Wall();
    virtual void enter();
};

class Door : public MapSite
{
public:
    Door(Room *room1 = 0, Room *room2 = 0);
    virtual void enter();
    Room *other_side_from(Room *room) const;

private:
    Room *_room1;
    Room *_room2;
    bool _is_open;
};

#endif /* __MAPSITES_H__ */