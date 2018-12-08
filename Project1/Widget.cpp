// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "Widget.h"



Widget::Widget()
{
}


Widget::~Widget()
{
}

bool Widget::Inside(int x, int y) const
{
	if ((x >= _x_pos) && (x <= (_x_pos + _w)))
	{
		if ((y >= _y_pos) && (y <= (_y_pos + _h)))
		{
			return true;
		}
	}

	return false;
}

void Widget::MouseClick(int x, int y)
{
	_x = x;
	_y = y;
	_isClicked += 1;
}
