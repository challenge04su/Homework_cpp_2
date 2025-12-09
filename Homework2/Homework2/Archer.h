#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Archer : public Player
{
public:
	Archer(string nickname);
	void attack() override;
};

