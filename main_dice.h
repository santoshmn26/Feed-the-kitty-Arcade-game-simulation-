#ifndef DICE1
#define DICE1
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
#include<time.h>
#include<string>
#include<string.h>
using namespace std;

class main_dice
{
private:
protected:
public:
	main_dice();
	~main_dice();
	void display();
	string diceID;
	string roll(string dices);
	string *dices=new string[6];
	string *faces = new string[6];
	string dice2;
private:
protected:
};


#endif
