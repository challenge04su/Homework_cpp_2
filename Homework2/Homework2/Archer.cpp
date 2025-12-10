#include "Archer.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Archer ::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	cout << "* 궁수로 전직하였습니다." << endl;
	accuracy = 80;

}

void Archer::attack(Monster* monster)
{
	int damage = power - monster->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	cout << "내 화살을 맞아라." << endl;
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