// the green color class
#ifndef color_g
#define color_g
#include"dice.h"
using namespace std;
class m_color_g :public m_dice
{
public:
	m_color_g(); // constructor
	virtual void display(); // simple display method 
protected:
	char color;

};
#endif