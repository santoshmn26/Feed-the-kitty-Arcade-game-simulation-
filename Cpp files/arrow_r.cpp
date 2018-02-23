// Definition for red arrow class
#include"arrow_r.h"
using namespace std;
arrow_r::arrow_r()
{
	symbol = "AR";
}
string arrow_r::get_red_arrow()
{
	sym_co = "R-AR";
	return (sym_co);
}
void arrow_r::display()
{
	m_color_r::display();
	cout << "AR";
}