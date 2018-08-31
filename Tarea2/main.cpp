#include "GL/glut.h"
#include <math.h>

#define PI 3.141592654

void init(void) {
	glClearColor(0.5922, 0.7322, 0.7647, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void lineSegment(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3176, 0.5725, 0.549);
	int radius;
	for (double r = 125; r > 110; r--) {
		radius = r;

		//Fila superior de circulos.
		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(250 - cos(i) * radius, 375 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(cos(i) * radius, 375 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(500 - cos(i) * radius, 375 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		//Fila inferior de circulos.
		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(250 - cos(i) * radius, 125 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(cos(i) * radius, 125 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(500 - cos(i) * radius, 125 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		//Fila media izquierda de circulos.
		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(125 - cos(i) * radius, 250 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(125 - cos(i) * radius, 500 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18) //<-- Change this Value
			glVertex3f(125 - cos(i) * radius, sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		//Fila media derecha de circulos.
		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(375 - cos(i) * radius, 250 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(375 - cos(i) * radius, 500 - sin(i) * radius, 0.0);

		glEnd();
		glFlush();

		glBegin(GL_LINE_LOOP);

		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(375 - cos(i) * radius, sin(i) * radius, 0.0);

		glEnd();
		glFlush();
	}

}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Ejemplo");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();
}
