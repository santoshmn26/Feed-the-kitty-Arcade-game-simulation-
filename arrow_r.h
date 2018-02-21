// The red arrow class
#ifndef arrow_r1
#define arrow_r1
#include"color_r.h"
using namespace std;
class arrow_r :public m_color_r
{
public:
	arrow_r(); // constructor
	string get_red_arrow(); // member function that return a dice face that is a red arrow
	virtual void display(); // fucniton that returns a dice face of red arrow
protected:
	string symbol;
	string sym_co;

};
#endif
