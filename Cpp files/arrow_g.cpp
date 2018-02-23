// Definition for green arrow class
#include"arrow_g.h"
using namespace std;
arrow_g::arrow_g()
{
	symbol = "AR";
}
string arrow_g::get_green_arrow()
{
	sym_co = "G-AR";
	return (sym_co);
}
void arrow_g::display() 
{
	m_color_g::display();
	cout << "AR";
}