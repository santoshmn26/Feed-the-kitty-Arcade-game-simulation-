#include"sleeping_cat_r.h"
using namespace std;
sleeping_cat_r::sleeping_cat_r()
{
	symbol = "SC";
}
string sleeping_cat_r::get_red_sc()
{
	sym_co = "R-SC";
	return (sym_co);
}
void sleeping_cat_r::display()
{
	m_color_r::display();
	cout << "AR";
}