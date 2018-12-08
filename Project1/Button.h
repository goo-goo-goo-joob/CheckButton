#pragma once
#include "Widget.h"
class Button :
	public Widget
{
protected:
	bool _state;
	string _text;
	void(*_func) ();
public:
	Button();
	~Button();
	void setText(const string text);
	void setFunc(void(*f)(void));
};

