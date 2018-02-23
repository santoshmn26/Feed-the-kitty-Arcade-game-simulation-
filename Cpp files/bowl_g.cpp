// memberfunction definitions for green bowl header
#include"bowl_g.h"
using namespace std;
bowl_g::bowl_g()
{
	symbol = "BW";
}
string bowl_g::get_green_bw()
{
	sym_co = "G-BW";
	return (sym_co);
}
void bowl_g::display()
{
	m_color_g::display();
	cout << "BW";
}