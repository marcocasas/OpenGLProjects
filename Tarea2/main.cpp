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

	//Pintado de lineas
	for (int i = 0; i < 90; i++) {
		//y=x
		glBegin(GL_LINES);
			glVertex3f(41 + 5.5 * i, 14 + 5.5 * i, 0);
			glVertex3f(12 + 5.5 * i, 43 + 5.5 * i, 0);
		glEnd();

		//y=x upper
		glBegin(GL_LINES);
			glVertex3f(41 + 8.3	 * i, 250 + 14 + 8.3 * i, 0);
			glVertex3f(12 + 8.3 * i, 250 + 43 + 8.3 * i, 0);
		glEnd();


		//y=x down
		glBegin(GL_LINES);
			glVertex3f(41 + 5.5 * i, -250 + 14 + 5.5 * i, 0);
			glVertex3f(12 + 5.5 * i, -250 + 43 + 5.5 * i, 0);
		glEnd();

		//y = -x
		glBegin(GL_LINES);
			glVertex3f(41 + 7 * i, 488 - 7 * i, 0);
			glVertex3f(12 + 7 * i, 459 - 7 * i, 0);
		glEnd();

		//y = -x upper
		glBegin(GL_LINES);
			glVertex3f(41 + 5 * i, 250 + 488 - 5 * i, 0);
			glVertex3f(12 + 5 * i, 250 + 459 - 5 * i, 0);
		glEnd();

		//y = -x lower
		glBegin(GL_LINES);
			glVertex3f(41 + 7 * i, -250 + 488 - 7 * i, 0);
			glVertex3f(12 + 7 * i, -250 + 459 - 7 * i, 0);
		glEnd();
	}

	glColor3f(0.3176, 0.5725, 0.549);
	int radius;

	//Pintado de circulos grandes.
	for (double r = 135; r > 110; r--) {
		radius = r;

		//Fila superior de circulos.
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(250 - cos(i) * radius, 375 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(cos(i) * radius, 375 - sin(i) * radius, 0.0);
		glEnd();
	
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(500 - cos(i) * radius, 375 - sin(i) * radius, 0.0);
		glEnd();
	
		//Fila inferior de circulos.
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(250 - cos(i) * radius, 125 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(cos(i) * radius, 125 - sin(i) * radius, 0.0);
		glEnd();
		
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(500 - cos(i) * radius, 125 - sin(i) * radius, 0.0);
		glEnd();

		//Fila media izquierda de circulos.
		glBegin(GL_LINE_LOOP);	
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(125 - cos(i) * radius, 250 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(125 - cos(i) * radius, 500 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(125 - cos(i) * radius, sin(i) * radius, 0.0);
		glEnd();

		//Fila media derecha de circulos.
		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(375 - cos(i) * radius, 250 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(375 - cos(i) * radius, 500 - sin(i) * radius, 0.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
			for (double i = 0; i < 2 * PI; i += PI / 18)
				glVertex3f(375 - cos(i) * radius, sin(i) * radius, 0.0);
		glEnd();
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
