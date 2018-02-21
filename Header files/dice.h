// The Dice class 
#ifndef dice
#define dice
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class m_dice
{
public:
	m_dice(); // constructor 
	virtual void display(); // simple display method used to display the generated dice
	string* gendice();  // Dice generate method used to generate a random dice
	~m_dice();
protected:
	int f, s, c, *sa;
};

#endif

