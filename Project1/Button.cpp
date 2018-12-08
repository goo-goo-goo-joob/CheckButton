#include "Button.h"



Button::Button()
{
	_h = 100;
	_w = 100;
	_x = 0;
	_y = 0;
	_x_pos = 100;
	_y_pos = 100;
	_state = false;
	_text = "None";
	_isClicked = 0;
}

Button::~Button()
{
}

void Button::setText(const string text)
{
	_text = text;
}

void Button::setFunc(void(*f)(void))
{
	_func = f;
}

