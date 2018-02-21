// Red mice class
#ifndef mice_r1
#define mice_r1
#include"color_r.h"
using namespace std;
class mice_r :public m_color_r
{
public:
	mice_r(); // constructor
	string get_red_mi(); // member function to get red mice 
	virtual void display(); // member function to display a dice face of red mice
protected:
	string symbol;
	string sym_co;

};
#endif