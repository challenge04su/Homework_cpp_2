#include "Thief.h"
#include "Monster.h"
#include <iostream>

using namespace std;

Thief ::Thief(string nickname) : Player(nickname)
{
	job_name = "도적";
	cout << "* 도적로 전직하였습니다." << endl;
	speed = 80;

}

void Thief::attack(Monster* monster)
{
	int damage = ( power - monster->getDefence() ) / 5;
	if (damage % 5 == 0)
	{
		damage = 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		cout << "이제부터 이것은 제꺼입니다." << endl;
		cout << job_name << "이 " << monster->getName() << "에게 " << damage << " 피해를 입혔다!" << endl;

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
}