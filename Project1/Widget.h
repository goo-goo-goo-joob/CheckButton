#pragma once
#include <iostream>
#include <string>
#include "zgl.h"
#pragma warning(disable: 4996) 

using namespace std;

class Widget
{
protected:
	int _x;
	int _y;
	int _w;
	int _h;
	int _x_pos;
	int _y_pos;
	int _isClicked;
public:
	Widget();
	virtual ~Widget();
	virtual void Draw() = 0;
	bool Inside(int x, int y) const;
	virtual void MouseClick(int x, int y);
};