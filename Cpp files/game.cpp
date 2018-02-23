#include "game.h"

using namespace std;

m_game::m_game()
{
	
}


m_game::~m_game()
{

	delete[] dices;
	delete[] Mice;
	delete[] players;
}
int m_game::set_players(int num_players)
{
	cout << "The total number of players are  " << num_players << endl;	
	for (int i = 0; i < num_players; i++)
		players[i].ID = (i + 1);
	return(num_players);
}
void m_game::set_dice_num(int num_dices)
{
	cout << "The total number of Dice are  " << num_dices << endl;
	main_dice *dices;
	dices = new main_dice[num_dices];
}
void m_game::set_mice_num(int mices)
{
	cout << "The total number of mice used in game are  " << mices << endl;
}

string* m_game::create_dice()
{
	int cr, sr, i, s0, s11, s2, s3, t = 1, co, f, c, s1, *sa, *ca;
	string s;
	ifstream in;
	in.open("input.txt");
	in >> f >> c >> s1;
	sa = new int[s1];
	ca = new int[c];
	string *symb = new string[s1];
	string *cao = new string[s1];
	for (i = 0; i < c; i++)
	{
		in >> cao[i];
		in >> ca[i];
	}
	for (i = 0; i < s1; i++)
	{
		in >> symb[i];
		in >> sa[i];
	}
	for (i = 1; i < 4; i++)
		sa[i] = sa[i - 1] + sa[i]; string *dice1; dice1 = new string[6];
	s0 = sa[0]; s11 = sa[1]; s2 = sa[2]; s3 = sa[3]; co = ca[0];
	arrow_g ga; bowl_g gb; mice_g gm; sleeping_cat_g g;
	arrow_r ra; bowl_r rb; mice_r rm; sleeping_cat_r r;
	for (i = 0; i < f; i++)
	{
		cr = rand() % 99 + 1;
		sr = rand() % 99 + 1;
		if (sr <= s0)
		{
			if (cr <= co)
			{
				s = g.get_green_sc();
				dice1[i] = s;
			}
			else
			{
				s = r.get_red_sc();
				dice1[i] = s;
			}
		}
		if ((sr > s0) && (sr <= s11))
		{
			if (cr < co) {
				s = ga.get_green_arrow();
				dice1[i] = s;
			}
			else {
				s = ra.get_red_arrow();
				dice1[i] = s;
			}
		}
		if ((sr > s11) && (sr <= s2))
		{
			if (cr < co) {
				s = gb.get_green_bw();
				dice1[i] = s;
			}
			else {
				s = rb.get_red_bw();
				dice1[i] = s;
			}
		}
		if ((sr > s2) && (sr <= s3))
		{
			if (cr < co) {
				s = gm.get_green_mi();
				dice1[i] = s;
			}
			else
			{
				s = rm.get_red_mi();
				dice1[i] = s;
			}
		}
	}
	return dice1;
	//dices[cnt++]=dice1;
}
void m_game::checkGameStatus(int player, int x1, int y1)
{
	cout << "Current player: " << currentplayer.ID << endl;
	if (((x1 == 0) && (y1 == 0)) || ((x1 == 1) && (y1 == 1)))
	{
		cout << "Game Direction: No Change" << endl;
		gamed = true;
	}
	else
	{
		cout << "Game Direction: Changes" << endl;
		gamed = false;
	}
if (oo == 1)
gamedirection(gamed);
oo = 1;
		cout << "Next player: " << nextplayer.ID << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "Bowl" << '\t';
	for (i = 0; i < player; i++)
		cout<<"Player-"<<players[i].ID << '\t';
		cout << endl<<bowlmouse<<'\t';
	for (i = 0; i < player; i++)
		cout << players[i].mymice << '\t' << '\t';
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------" <<gamecnt<< endl;
	currentplayer.ID = nextplayer.ID;
	gamedirection(gamed);
}

void m_game::gamedirection(bool gamed)
{
if (gamed == true)
{
	if (currentplayer.ID == num_players)
	{
		nextplayer.ID = 1;
		ll = nextplayer.ID;
		if (players[ll - 1].mymice == 0)
		{
			currentplayer.ID = nextplayer.ID;
			gamedirection(gamed);
		}
	}
	else
	{
		nextplayer.ID = currentplayer.ID + 1;
		ll = nextplayer.ID;
		if (players[ll - 1].mymice == 0)
		{
			currentplayer.ID = nextplayer.ID;
			gamedirection(gamed);
		}
	}
}
	   else
	   {
		   if (currentplayer.ID == 1)
		   {
			   nextplayer.ID = num_players;
			   ll = nextplayer.ID;
			   if (players[ll - 1].mymice == 0)
			   {
				   currentplayer.ID = nextplayer.ID;
				   gamedirection(gamed);
			   }
		   }
		   else
		   {
			   nextplayer.ID = currentplayer.ID - 1;
			   ll = nextplayer.ID;
			   if (players[ll - 1].mymice == 0)
			   {
				   currentplayer.ID = nextplayer.ID;
				   gamedirection(gamed);
			   }

		   }
	   }

}




void m_game::play(int player, int dice_num, int mice_num,string *dice1,string *dice2)
{
	try {
		num_players = player;
		if (mice_num > player)
		{
			mouseforplayer = (mice_num / player);
			for (i = 0; i < player; i++)
				players[i].mymice = mouseforplayer;
			bowlmouse = mice_num - mouseforplayer*player;
		}
		currentplayer.ID = 1; nextplayer.ID = 2;
		checkGameStatus(player, x1, y1);
		while (gamecnt<1000)
		{
			for (i = 0; i < player; i++)
			{
				if (players[i].mymice == 0)
					mflag++;
			}
			if (mflag == (num_players))
			{
				gamecnt = 1000;
				goto breakloop;
			}
			else
			{mflag = 1;}
			x1 = dice_roll(dice1);
			y1 = dice_roll(dice2);
			checkGameStatus(player, x1, y1);
		breakloop:gamecnt++;
		}
		results();
	}
	catch (exception ex) {
		cout << "";

	}
}



int m_game::dice_roll(string *dice1)
{
	int randomdiceno;
	randomdiceno=rand()% 5+1;
	//return(dice1[randomdiceno]);
	dface1 = dice1[randomdiceno];
	if (dface1 == "G-SC")
	{
		cout << "Player-" <<currentplayer.ID << " Green - Sleep" << endl;
		return (0);
	}
	if (dface1 == "R-SC")
	{
		cout << "Player-" << currentplayer.ID << " Red - Sleep" << endl;
		return (1);
	}
	if (dface1 == "G-BW")
	{
		cout << "Player-" << currentplayer.ID << " Green - Bowl" << endl;
		l = currentplayer.ID;
		if (players[l-1].mymice>0)
		{
			players[l - 1].mymice--;
			bowlmouse++;
		}
		return (0);
	}
	if (dface1 == "R-BW")
	{
		cout << "Player-" << currentplayer.ID << " Red - Bowl" << endl;
		l = currentplayer.ID;
		if (players[l - 1].mymice > 0)
		{
			players[l - 1].mymice--;
			bowlmouse++;
		}
		return (1);
	}

	if (dface1 == "G-MI")
	{
		cout << "Player-" << currentplayer.ID << " Green - Mouse" << endl;
		l = currentplayer.ID;
		if (bowlmouse > 0)
		{
			players[l - 1].mymice++;
			bowlmouse--;
		}
		return (0);
	}
	if (dface1 == "R-MI")
	{
		cout << "Player-" << currentplayer.ID << " Red - Mouse" << endl;
		l = currentplayer.ID;
		if (bowlmouse > 0)
		{
			players[l - 1].mymice++;
			bowlmouse--;
		}
		return (1);
	}
	if (dface1 == "G-AR")
	{
		cout << "Player-" << currentplayer.ID << " Green - Arrow" << endl;
		l = currentplayer.ID;
		if (players[l-1].mymice > 0)
		{
			players[l - 1].mymice--;
			ln = nextplayer.ID;
			players[ln - 1].mymice++;
		}
		return (0);
	}
	if (dface1 == "R-AR")
	{
		cout << "Player-" << currentplayer.ID << "Red - Arrow" << endl;
		l = currentplayer.ID;
		if (players[l-1].mymice > 0)
		{
			players[l - 1].mymice--;
			ln = nextplayer.ID;
			players[ln - 1].mymice++;
		}
		return (1);
	}
}


void m_game::results()

{
	for (i = 0; i < num_players; i++)
	{
		if (players[i].mymice != 0)
		{
			cout << "Player-" << i + 1 << "   WON THE GAME!!!....";
			cout << "  With totally  " << players[i].mymice << "  mice" << endl;
		}
	}
}
