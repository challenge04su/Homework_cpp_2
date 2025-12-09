#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Magician : public Player
{
public:
	Magician(string nickname);
	void attack() override;
};
