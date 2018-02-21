// Green bowl header file
// Class green bowl
#ifndef bowl_g1
#define bowl_g1
#include"color_g.h"
using namespace std;
class bowl_g :public m_color_g
{
public:
	bowl_g(); // constructor
	string get_green_bw(); // member function to generate a dice face of green bowl
	virtual void display(); // funtion to display a dice face of green bowl
protected:
	string symbol;
	string sym_co;

};
#endif
