#ifndef PLAYER
#define PLAYER
#include "main_dice.h"

using namespace std;

class player {
protected:


public:
	int ID;
	player();
	~player();
	string roll_dice(string dices);
	void move(string faces);
	int mymice;
	string *dices = new string[6];
	string *faces = new string[6];


	int mice_count;
};
#endif