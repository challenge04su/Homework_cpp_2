#pragma once
#include "Player.h"
#include <string>

using namespace std;

class Thief : public Player
{
public:
	Thief(string nickname);
	void attack() override;
};