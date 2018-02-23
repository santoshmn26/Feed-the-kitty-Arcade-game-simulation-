	#include"sleeping_cat_g.h"
	using namespace std;
	sleeping_cat_g::sleeping_cat_g()
	{
		symbol = "SC";
	}
	string sleeping_cat_g::get_green_sc()
	{
		sym_co = "G-SC";
		return (sym_co);
	}
	void sleeping_cat_g::display()
	{
		m_color_g::display();
		cout << "SC";
	}