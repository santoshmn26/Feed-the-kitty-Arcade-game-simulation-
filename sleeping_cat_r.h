// red sleeping cat class header
#ifndef sleeping_cat_r1
#define sleeping_cat_r1

#include"color_r.h"
using namespace std;
class sleeping_cat_r :public m_color_r
{
public:
	sleeping_cat_r(); // constructor
	string get_red_sc(); // member function to return red sleeping cat dice face 
	virtual void display();  // member function to display a red sleeping cat dice face
protected:
	string symbol;
	string sym_co;

};

#endif