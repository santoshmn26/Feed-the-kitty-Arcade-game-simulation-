// Green sleeping cat class header
#ifndef sleeping_cat_g1
#define sleeping_cat_g1
#include"color_g.h"
using namespace std;
class sleeping_cat_g:public m_color_g
{
public:
	sleeping_cat_g(); // constructor
	string get_green_sc(); // member function to return green sleeping cat dice face 
	virtual void display(); // member function to display a green sleeping cat dice face
protected:
	string symbol;
	string sym_co;
};
#endif