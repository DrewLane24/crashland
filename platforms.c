/* Gavin March
 * Homework 2
 * Key press is g(for Gavin) to 
 * execute code in program
*/

#include <GL/glx.h>
#include <X11/keysym.h>
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>
#include "platforms.h"

Platforms platforms;
Platforms platforms2;
GLuint pFormTexture;

#ifdef USE_PLATFORMS
void draw_platforms(void)
{
		glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
		glLineWidth(100);
		glBegin(GL_LINES);
			glVertex2f(platforms.pos[0]-platforms.width2, platforms.pos[1]);
			glVertex2f(platforms.pos[0]+platforms.width2, platforms.pos[1]);
			glVertex2f(platforms2.pos[0]-platforms2.width2, platforms2.pos[1]);
			glVertex2f(platforms2.pos[0]+platforms2.width2, platforms2.pos[1]);
		glEnd();
		glLineWidth(1);

		glColor4f(1.0f, 1.0f, 1.0f, 0.8f);
		glPushMatrix();
		glTranslatef(platforms.pos[0],platforms.pos[1],platforms.pos[2]);
		glEnable(GL_ALPHA_TEST);
		glAlphaFunc(GL_GREATER, 0.0f);
		glBindTexture(GL_TEXTURE_2D, pFormTexture);
		glBegin(GL_QUADS);
			float w = platforms.width2;
			glTexCoord2f(0.0f, 0.0f); glVertex2f(-w,  w);
			glTexCoord2f(1.0f, 0.0f); glVertex2f( w,  w);
			glTexCoord2f(1.0f, 1.0f); glVertex2f( w, -w);
			glTexCoord2f(0.0f, 1.0f); glVertex2f(-w, -w);
		glEnd();
		glBindTexture(GL_TEXTURE_2D, 0);
		glDisable(GL_ALPHA_TEST);
		glPopMatrix();
                
		glColor4f(1.0f, 1.0f, 1.0f, 0.8f);
		glPushMatrix();
		glTranslatef(platforms2.pos[0],platforms2.pos[1],platforms2.pos[2]);
		glEnable(GL_ALPHA_TEST);
		glAlphaFunc(GL_GREATER, 0.0f);
		glBindTexture(GL_TEXTURE_2D, pFormTexture);
		glBegin(GL_QUADS);
			float w2 = platforms2.width2;
			glTexCoord2f(0.0f, 0.0f); glVertex2f(-w2,  w2);
			glTexCoord2f(1.0f, 0.0f); glVertex2f( w2,  w2);
			glTexCoord2f(1.0f, 1.0f); glVertex2f( w2, -w2);
			glTexCoord2f(0.0f, 1.0f); glVertex2f(-w2, -w2);
		glEnd();
		glBindTexture(GL_TEXTURE_2D, 0);
		glDisable(GL_ALPHA_TEST);
		glPopMatrix();
}
#endif
