#include"dice.h"
#include"arrow_g.h"
#include"arrow_r.h"
#include"bowl_g.h"
#include"bowl_r.h"
#include"color_g.h"
#include"color_r.h"
#include"mice_g.h"
#include"mice_r.h"
#include"sleeping_cat_g.h"
#include"sleeping_cat_r.h"
#include"game.h"
#include<time.h>
using namespace std;
void main()
{
	try {
		srand((int)time(0));
		int i, players, dice_num=2, mice_num;
		string *dice1, *dice2;
		m_dice d;
		dice1 = new string[6]; dice2 = new string[6];
		m_game g;
		dice1 = g.create_dice(); // getting the dice
		dice2 = g.create_dice(); // getting the second dice
		cout << "DICE1:";
		for (i = 0; i < 6; i++)
			cout << dice1[i] << '\t';
		cout << endl;
		cout << "DICE2:";
		for (i = 0; i < 6; i++)
			cout << dice2[i] << '\t';
		cout << endl;
		cout << "Number of players: "; // Getting the total number of players
		cin >> players;
		g.set_players(players);
		cout << endl;
		cout << "Number of mice: "; // Getting the total number of mice
		cin >> mice_num;
		g.set_mice_num(mice_num);
		cout << endl;
		g.play(players, dice_num, mice_num, dice1, dice2);

	}
	catch (exception ex) {

	}
















































}
	