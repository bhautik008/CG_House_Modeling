// CSC 706 - Project Q1
// Bhautik Bhanani
// Hardik Prajapati

// house.cpp
#include <windows.h>
#include <iostream>
#include <GL/glut.h>

GLfloat shining[] = { 30.0f };
GLfloat ambientcolor[3];
GLfloat diffusecolor[3];
GLfloat speccolor[3];

void display () {
	/* clear window */
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	/* future matrix manipulations should affect the modelview matrix */
	glMatrixMode(GL_MODELVIEW);
	/* draw scene */
	glPushMatrix();
	
	glPushMatrix();
	glRotated(90,1,1,1);
	ambientcolor[0] = 0.0; ambientcolor[1] = 0.392; ambientcolor[2] = 0.0;
	diffusecolor[0] = 0.0; diffusecolor[1] = 0.392; diffusecolor[2] = 0.0;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	//glRectf(-3,0,3,3);
	glPopMatrix();
	
	ambientcolor[0] = 0.412; ambientcolor[1] = 0.412; ambientcolor[2] = 0.412;
	diffusecolor[0] = 0.412; diffusecolor[1] = 0.412; diffusecolor[2] = 0.412;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	// house
	glPushMatrix();
	glutSolidCube(2);	// building
	glPopMatrix();
	
	glPushMatrix();
	
	ambientcolor[0] = 0.545; ambientcolor[1] = 0.0; ambientcolor[2] = 0.0;
	diffusecolor[0] = 0.545; diffusecolor[1] = 0.0; diffusecolor[2] = 0.0;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	glTranslated(0, 1,0);	//.....
	glRotated(270.0,1,0,0);	//........ // roof
	glutSolidCone(1.5,1,16,8);
	glPopMatrix();
	
	glPushMatrix();
	
	ambientcolor[0] = 0.627; ambientcolor[1] = 0.322; ambientcolor[2] = 0.176;
	diffusecolor[0] = 0.627; diffusecolor[1] = 0.322; diffusecolor[2] = 0.176;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	glTranslated(1.4,2,0);//........ // chimney
	glScaled(1,2,1);//........
	glutSolidCube(.25);
	glPopMatrix();
	
	// car
	glPushMatrix();
	
	ambientcolor[0] = 0.0; ambientcolor[1] = 0.0; ambientcolor[2] = 0.545;
	diffusecolor[0] = 0.0; diffusecolor[1] = 0.0; diffusecolor[2] = 0.545;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	glTranslated(-2.5,-3.5,0.7);
	//glRotated(270,1,1,1);
	glScaled(3,1,1.5);
	glutSolidCube(.5); // body
	glPopMatrix();
	
	ambientcolor[0] = 0.412; ambientcolor[1] = 0.412; ambientcolor[2] = 0.412;
	diffusecolor[0] = 0.412; diffusecolor[1] = 0.412; diffusecolor[2] = 0.412;
	speccolor[0] = 0.0f; speccolor[1] = 0.1f; speccolor[2] = 0.1f;
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientcolor);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffusecolor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, speccolor);
	glMaterialfv(GL_FRONT, GL_SHININESS, shining);
	
	glPushMatrix();
	glTranslated(-2.7,-3.4,1.28);
	glScaled(1.5,1.5,1.5);
	glutSolidTorus(.05,.1,8,8); // wheel
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-1.6,-3.4,1.28);
	glScaled(1.5,1.5,1.5);
	glutSolidTorus(.05,.1,8,8); // wheel
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-1.6,-3.4,0.5);
	glScaled(1.5,1.5,1.5);
	glutSolidTorus(.05,.1,8,8); // wheel
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-1.6,-3.4,0.5);
	glScaled(1.5,1.5,1.5);
	glutSolidTorus(.05,.1,8,8); // wheel
	glPopMatrix();
	
	glPopMatrix();
	/* flush drawing routines to the window */
	glFlush();
}

void reshape ( int width, int height ) {
	/* define the viewport transformation */
	glViewport(0,0,width,height);
}

int main ( int argc, char * argv[] ) {
	/* initialize GLUT, using any commandline parameters passed to the
	program */
	glutInit(&argc,argv);
	/* setup the size, position, and display mode for new windows */
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
	/* create and set up a window */
	glutCreateWindow("hello, house!");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glClearColor(1.0f, 1.0f, 1.0f,0.0f);  // background is white
	/* set up depth-buffering */
	glEnable(GL_DEPTH_TEST);
	/* turn on default lighting */
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	/* define the projection transformation */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(40,1,4,20);
	/* define the viewing transformation */
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(5.0,5.0,5.0,0.0,0.0,0.0,0.0,1.0,0.0);
	/* tell GLUT to wait for events */
	glutMainLoop();
	return 0;
}
