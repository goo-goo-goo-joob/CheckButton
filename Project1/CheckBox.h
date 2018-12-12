#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "Button.h"
class CheckBox :
	public Button
{
private:
	bool _state;

public:
	CheckBox();
	CheckBox(int h, int w, int x, int y, const string & text, bool state = false);
	~CheckBox();
	void Draw() override;
	void MouseClick(int x, int y) override;
};

#endif /*CHECKBOX_H*/
