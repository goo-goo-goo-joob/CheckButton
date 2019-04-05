// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include "Button.h"

Button::Button()
{
	_text = "";
	_func = nullptr;
}

Button::Button(int h, int w, int x, int y, const string & text) :Widget(h, w, x, y), _text(text)
{
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

