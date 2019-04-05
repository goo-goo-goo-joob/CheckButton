// This is an independent project of an individual developer. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#define ZGL_SHARED
#define _USE_MATH_DEFINES
#include "Widget.h"
#include "Button.h"
#include "CheckBox.h"


void Draw(void);
void Mouse(unsigned int button, int x, int y);

CheckBox*  cbList;
int cbCount = 3;

int isClicked = 0;

void sth() {
	printf("Clicked\n");
	return;
}

int main()
{
	cbList = new CheckBox[cbCount];
	cbList[0] = CheckBox(50, 50, 50, 50, "Accept End user agreement");
	cbList[0].setFunc(*sth);
	cbList[1] = CheckBox(10, 10, 50, 150, "Yes");
	cbList[2] = CheckBox(50, 50, 50, 200, "NONONO");
	zgl_CreateWindow(640, 380, "The W");
	zgl_SetWindowColor(ZGL_GRAY);
	zgl_SetFontColor(ZGL_BLACK);
	zgl_SetDrawColor(ZGL_DARKGRAY);

	zgl_LoadFont("1251");

	zgl_SetUserDrawFunction(Draw);
	zgl_SetUserMouseFunction(Mouse);
	auto result = zgl_Main();
	delete[] cbList;
	return result;
}

void Mouse(unsigned int button, int x, int y)
{
	isClicked += 1;
	if (isClicked > 1) {
		for (int i = 0; i < cbCount; i++)
			if (cbList[i].Inside(x, y))
				cbList[i].MouseClick(x, y);
	}
	if (isClicked > 1)
		isClicked = 0;
}

void Draw(void)
{
	for (int i = 0; i < cbCount; i++)
		cbList[i].Draw();
}

