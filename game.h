// Game header file
#ifndef GAME
#define GAME
#include "main_dice.h"
#include "Player.h"
#include <fstream>
#include <time.h>
using namespace std;

class m_game
{
private:

public:
	m_game();
	~m_game();
	int set_players(int);
	void set_dice_num(int);
	void set_mice_num(int);
	int dice_roll(string *dice1);
	string* create_dice();
	void gamedirection(bool);
	void play(int players, int dice_num, int mice_num,string *dice1,string *dice2);
	void checkGameStatus(int player,int,int);
	void results();
protected:
	main_dice* dices;
	int i,mice_num, num_players,dice_num, mouseforplayer, bowlmouse;
	string *Mice, s;
	ifstream fin;
	int gamecnt = 0, mflag = 1,l,ln,x1=0,y1=0,oo=2,ll;
	bool gamed=true;
	string dface1, dface2;
	player *players = new player[num_players+1];
	player currentplayer, nextplayer;

};


#endif 