#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showMenus()
{
	int yres = 800;
	Rect r;
	r.bot = yres - 40;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0, "Press F1 to Start");
	ggprint8b(&r, 16, 0, "Press F2 to Pause");
	ggprint8b(&r, 16, 0, "Press F3 for controls");
	ggprint8b(&r, 16, 0, "Made by:");
	ggprint8b(&r, 16, 0, "Brock Simpson");
	ggprint8b(&r, 16, 0, "Gavin March");
	ggprint8b(&r, 16, 0, "Andrew Lane");
	ggprint8b(&r, 16, 0, "Framework by Gordon");
	ggprint8b(&r, 16, 0, "Music does not belong to this program");
}

void showMenus2()
{
	int yres = 800;
	Rect r;
	r.bot = yres - 40;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, 0, "-Controls-");
	ggprint8b(&r, 16, 0, "Left key-Move left");
	ggprint8b(&r, 16, 0, "Right key-Move right ");
	ggprint8b(&r, 16, 0, "Space bar- Jump");
	ggprint8b(&r, 16, 0, "F key-Fire weapon");
	ggprint8b(&r, 16, 0, "More to come!");
}
