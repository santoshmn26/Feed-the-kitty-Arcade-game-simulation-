// The green arrow class
#ifndef arrow_g1
#define arrow_g1
#include"color_g.h"
using namespace std;
class arrow_g :public m_color_g
{
public:
	arrow_g(); // constructor
	string get_green_arrow(); // function that returns a green arrow face
	virtual void display(); // simple function that displayes a dice face with green arrow
protected:
	string symbol;
	string sym_co;

};
#endif
