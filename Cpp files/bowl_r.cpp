#include"bowl_r.h"
using namespace std;
bowl_r::bowl_r()
{
	symbol = "BW";
}
string bowl_r::get_red_bw()
{
	sym_co = "R-BW";
	return (sym_co);
}
void bowl_r::display()
{
	m_color_r::display();
	cout << "BW";
}