#include"dice.h"
using namespace std;
m_dice::m_dice()
{
	sa = new int[s];	
}
	void m_dice::display()
	{
		int i;
		for (i = 0; i < s; i++)
			cout << sa[i] << endl;
	}
	m_dice::~m_dice(){delete[]sa;	}
	
	
	
	string* m_dice::gendice()
	{
		string *dice1;
		dice1 = new string[6];
		cout << "was here";
		return(dice1);
	}


	
