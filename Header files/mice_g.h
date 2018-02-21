// Green Mice class 
#ifndef mice_g1
#define mice_g1
#include"color_g.h"
using namespace std;
class mice_g :public m_color_g
{
public:
	mice_g(); // constructor 
	string get_green_mi(); // member function to get a dice face of green mice
	virtual void display(); // member function to display a dice face of a green mice
protected:
	string symbol;
	string sym_co;

};
#endif