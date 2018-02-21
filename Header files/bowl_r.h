// Red bowl class
// header file for red bowl class
#ifndef bowl_r1
#define bowl_r1
#include"color_r.h"
using namespace std;
class bowl_r :public m_color_r
{
public:
	bowl_r(); // constructor
	string get_red_bw(); // member function to get a dice face of red bowl
	virtual void display(); // member funcion to display a dice face of a red bowl
protected:
	string symbol;
	string sym_co;

};

#endif