#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "Button.h"
class CheckBox :
	public Button
{
public:
	CheckBox();
	~CheckBox();
	void Draw() override;
};

#endif /*CHECKBOX_H*/
