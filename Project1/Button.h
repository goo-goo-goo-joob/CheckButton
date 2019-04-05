#ifndef BUTTON_H
#define BUTTON_H
#define ZGL_SHARED
#include "Widget.h"
class Button :
	public Widget
{
protected:
	string _text;
	void(*_func) ();
public:
	Button();
	Button(int h, int w, int x, int y, const string & text);
	~Button();
	void setText(const string& text);
	void setFunc(void(*f)(void));
};

#endif /*BUTTON_H*/
