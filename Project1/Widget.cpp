// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "Widget.h"



Widget::Widget()
{
	_h = 0;
	_w = 0;
	_x_pos = 0;
	_y_pos = 0;
}

Widget::Widget(int h, int w, int x, int y)
{
	_h = h;
	_w = w;
	_x_pos = x;
	_y_pos = y;
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

