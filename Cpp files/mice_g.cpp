#include"mice_g.h"
using namespace std;
mice_g::mice_g()
{
	symbol = "MI";
}
string mice_g::get_green_mi()
{
	sym_co = "G-MI";
	return (sym_co);
}
void mice_g::display()
{
	m_color_g::display();
	cout << "MI";
}