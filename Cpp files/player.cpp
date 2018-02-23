#include"player.h"

string player::roll_dice(string dices)
{
	int x;
	string s;
	x = rand() % 5 + 1;
	s = dices[x];
	return(s);
}

void player::move(string faces){}

player::player(){}

player::~player(){}