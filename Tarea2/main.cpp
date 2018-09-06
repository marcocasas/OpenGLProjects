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
	glColor3f(0.6941, 0.3412, 0.1059);
	glLineWidth(5);

	for (int i = 0; i < 90; i++) {
		//y=x
		glBegin(GL_LINES);
			glVertex3f(41 + 7 * i, 14 + 7 * i, 0);
			glVertex3f(12 + 7 * i, 43 + 7 * i, 0);
		glEnd();

		//y=x upper
		glBegin(GL_LINES);
		glVertex3f(41 + 7 * i, 250 + 14 + 7 * i, 0);
		glVertex3f(12 + 7 * i, 250 + 43 + 7 * i, 0);
		glEnd();


		//y=x down
		glBegin(GL_LINES);
			glVertex3f(41 + 7 * i, -250 + 14 + 7 * i, 0);
			glVertex3f(12 + 7 * i, -250 + 43 + 7 * i, 0);
		glEnd();

		//y = -x
		glBegin(GL_LINES);
			glVertex3f(41 + 7 * i, 488 - 7 * i, 0);
			glVertex3f(12 + 7 * i, 459 - 7 * i, 0);
		glEnd();

		//y = -x upper
		glBegin(GL_LINES);
		glVertex3f(41 + 7 * i, 250 + 488 - 7 * i, 0);
		glVertex3f(12 + 7 * i, 250 + 459 - 7 * i, 0);
		glEnd();

		//y = -x lower
		glBegin(GL_LINES);
		glVertex3f(41 + 7 * i, -250 + 488 - 7 * i, 0);
		glVertex3f(12 + 7 * i, -250 + 459 - 7 * i, 0);
		glEnd();
	}

	//Lineas para dar asimetria.
	//glBegin(GL_LINES);
	//	glVertex3f(0, 0, 0);
	//	glVertex3f(500, 500, 0);
	//glEnd();

	//glBegin(GL_LINES);
	//	glVertex3f(250, 0, 0);
	//	glVertex3f(500, 250, 0);
	//glEnd();

	//glBegin(GL_LINES);
	//	glVertex3f(250, 500, 0);
	//	glVertex3f(500, 250, 0);
	//glEnd();

	//Lineas naranja.
	//glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0, 0.0, 0.0);
	//for (double r = 200; r < 210; r++) {
	//	glBegin(GL_LINE_LOOP);
	//	glVertex3f(250, r + 100, -1.0);
	//	glVertex3f(400 - r, 250, -1.0);
	//	glVertex3f(250, 400 - r, -1.0);
	//	glVertex3f(r + 100, 250, -1.0);
	//	glEnd();
	//	glFlush();
	//}

	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3176, 0.5725, 0.549);
	int radius;
	float vertex[2];

	//Pintado de circulos grandes.
	for (double r = 135; r > 110; r--) {
		radius = r;

		//Fila superior de circulos.
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(250 - cos(i) * radius, 375 - sin(i) * radius, 0.0);
		glEnd();
		//glFlush();

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

	//Pintado de circulos pequenos decorativos.
	for (double r = 15; r > 7; r--) {
		glColor3f(0.1412, 0.3333, 0.3176);
		radius = r;

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(250 - cos(i) * radius, 375 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(250 - cos(i) * radius, 125 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(125 - cos(i) * radius, 250 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
		for (double i = 0; i < 2 * PI; i += PI / 18)
			glVertex3f(375 - cos(i) * radius, 250 - sin(i) * radius, 0.0);
		glEnd();

		glFlush();
	}

	//glBegin(GL_POLYGON);
	//	glVertex3f(250, 300, 0.0);
	//	glVertex3f(200, 250, 0.0);
	//	glVertex3f(250, 200, 0.0);
	//	glVertex3f(300, 250, 0.0);
	//glEnd();
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
