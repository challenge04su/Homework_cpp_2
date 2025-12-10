#include <iostream>
#include "Monster.h"
#include "Player.h"

using namespace std;

Monster :: Monster(string name) : name(name), HP(10), power(30), defence(10), speed(10) {}

string Monster :: getName() { return name; }
int Monster :: getHP() { return HP; }
int Monster :: getPower() { return power; }
int Monster :: getDefence() { return defence; }
int Monster :: getSpeed() { return speed; }

void Monster :: setName(string name)
{
    this->name = name;
}
bool Monster :: setHP(int HP)
{
    if (HP >= 1)
    {
        this->HP = HP;
        return true;
    }
    else
    {
        this->HP = 0;
        return false;
    }
}
void Monster:: setDefence(int defence)
{
    this->defence = defence;
}
void Monster:: setSpeed(int speed)
{
    this->speed = speed;
}

void Monster::attack(Player* player)
{
    cout << endl;
    cout << name << " attack " << player->getNickname() << " !" << endl;

    int damage = power - player->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }

    cout << player->getNickname() << "에게 데미지를 " << damage << " 만큼 입혔습니다." << endl;

    bool alive = player->setHP(player->getHP() - damage);

    if (alive)
    {
        cout << player->getNickname() << "의 남은 HP : " << player->getHP() << endl;
    }
    else
    {
        cout << player->getNickname() << "의 남은 HP : " << player->getHP() << endl;
        cout << name << "의 승리입니다." << endl;
    }
}