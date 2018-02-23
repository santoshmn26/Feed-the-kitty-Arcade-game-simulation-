#include"mice_r.h"
using namespace std;
mice_r::mice_r()
{
	symbol = "MI";
}
string mice_r::get_red_mi()
{
	sym_co = "R-MI";
	return (sym_co);
}
void mice_r::display()
{
	m_color_r::display();
	cout << "MI";
}