#include "Thief.h"
#include <iostream>

using namespace std;

Thief ::Thief(string nickname) : Player(nickname)
{
	job_name = "도적";
	cout << "* 도적로 전직하였습니다." << endl;
	speed = 80;

}
void Thief :: attack()
{
	cout << "이제부터 이것은 제꺼입니다." << endl;
}