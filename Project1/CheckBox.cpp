// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "CheckBox.h"



CheckBox::CheckBox()
{
	_state = false;
}

CheckBox::CheckBox(int h, int w, int x, int y, const string & text, bool state) :Button(h, w, x, y, text)
{
	_state = state;
}


CheckBox::~CheckBox()
{
}

void CheckBox::Draw()
{
	zgl_DrawRect(_x_pos, _y_pos, _w, _h);
	zgl_DrawString(_x_pos + _w + 15, _y_pos + _h / 2 - 8, _text.c_str());
	if (_state) {
		zgl_DrawLine(_x_pos, _y_pos, _x_pos + _w, _y_pos + _h);
		zgl_DrawLine(_x_pos + _w, _y_pos, _x_pos, _y_pos + _h);
	}

}

void CheckBox::MouseClick(int x, int y)
{
	_state = !_state;
}
