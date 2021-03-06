/*
 *  File: render.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 * 
 *  Main rendering and initialization done here and a proceed to the welcome page
 */
#include "cus_header.h"

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);
}

void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	welcomeScn();

	glFlush();
	glutSwapBuffers();
}