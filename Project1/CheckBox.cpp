#include "CheckBox.h"



CheckBox::CheckBox()
{
}


CheckBox::~CheckBox()
{
}

void CheckBox::Draw()
{
	zgl_DrawRect(_x_pos, _y_pos, _w, _h);
	zgl_LoadFont("1251");
	zgl_DrawString(300, 150, _text.c_str());
	if (Inside(_x, _y) && _isClicked > 1) {
		_state = !_state;
	}
	if (_isClicked > 1)
		_isClicked = 0;
	if (_state) {
		zgl_DrawLine(100, 100, 200, 200);
		zgl_DrawLine(200, 100, 100, 200);
	}

}
