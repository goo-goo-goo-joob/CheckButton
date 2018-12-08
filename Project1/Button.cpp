// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
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
	_func = nullptr;
}

Button::~Button()
{
}

void Button::setText(const string& text)
{
	_text = text;
}

void Button::setFunc(void(*f)(void))
{
	_func = f;
}

