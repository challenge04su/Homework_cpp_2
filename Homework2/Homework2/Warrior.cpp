#include "Warrior.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "전사";
	cout << "* 전사로 전직하였습니다." << endl;
	HP = 80;

}

void Warrior :: attack(Monster* monster)
{
	int damage = power - monster->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	cout << "검을 휘두른다. 피해라." << endl;
	cout << job_name << "가 " << monster->getName() << "에게 " << damage << "를 입혔다!" << endl;

	bool isAlive = monster->setHP(monster->getHP() - damage);

	if (isAlive)
	{
		cout << monster->getName() << "의 남은 HP : " << monster->getHP() << endl;
	}
	else
	{
		cout << monster->getName() << "의 남은 HP : " << monster->getHP() << endl;
		cout << job_name << " " << nickname << "이(가) 우승했습니다! " << endl;
	}
}