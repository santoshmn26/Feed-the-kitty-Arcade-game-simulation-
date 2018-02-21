// the color red class
#ifndef color_r
#define color_r
#include"dice.h"
using namespace std;
class m_color_r :public m_dice
{
public:
	m_color_r(); // constructor
	virtual void display(); // simple display method
protected:
	char color;

};
#endif