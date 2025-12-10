#include "Magician.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "마법사";
	cout << "* 마법사로 전직하였습니다." << endl;
	MP = 80;

}

void Magician::attack(Monster* monster)
{
	int damage = power - monster->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	cout << "마법 시작한다. 잘 봐라." << endl;
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