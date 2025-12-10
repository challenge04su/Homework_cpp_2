#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Thief : public Player
{
public:
	Thief(string nickname);
	virtual void attack(Monster* monster) override;
};