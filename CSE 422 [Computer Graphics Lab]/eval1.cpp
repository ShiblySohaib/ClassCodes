#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>>

void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1000, 0.0, 1000.0, -1.0, 1.0);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(cx,cy);
    int division = 1;
    for(int i=0 ; i<=50 ; i++){
        float angle = 2*3.14 *i/50;
        float x=rx*cosf(angle);
        float y=ry*sinf(angle);
        glVertex2f(x+cx,y+cy);
    }
    glEnd();
}


void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);

    //water
	glColor3f( 0 ,0, 1);
	glBegin(GL_POLYGON);
	glVertex2i(0,200);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,200);
	glVertex2i(1000,200);
	glEnd();
	circle(100, 30, 100, 200);
	circle(100, 30, 300, 200);
	circle(100, 30, 700, 200);
	circle(100, 30, 900, 200);


	//boat
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(300,300);
	glVertex2i(400,200);
	glVertex2i(600,200);
	glVertex2i(700,300);
	glEnd();

	//column1
	glColor3f( 58 ,29, 0);
	glBegin(GL_POLYGON);
	glVertex2i(350,500);
	glVertex2i(350,300);
	glVertex2i(400,300);
	glVertex2i(400,500);
	glEnd();

	//column2
	glColor3f(0.62,0.12,0.94);
	glBegin(GL_POLYGON);
	glVertex2i(400,450);
	glVertex2i(400,300);
	glVertex2i(450,300);
	glVertex2i(450,450);
	glEnd();

	//triangle
	glColor3f(0, 255,0);
	glBegin(GL_POLYGON);
	glVertex2i(450,400);
	glVertex2i(450,300);
	glVertex2i(550,300);
	glEnd();

	//flagpole
	glColor3f( 0 ,0, 1);
	glBegin(GL_POLYGON);
	glVertex2i(570,600);
	glVertex2i(570,300);
	glVertex2i(580,300);
	glVertex2i(580,600);
	glEnd();



	//flaggrec
	glColor3f(0, 255,0);
	glBegin(GL_POLYGON);
	glVertex2i(580,540);
	glVertex2i(580,400);
	glVertex2i(800,400);
	glVertex2i(800,540);
	glEnd();

	//flagcircle
	glColor3f(255, 0,0);
	circle(50,50,690,470);




	glEnd();


	glutSwapBuffers();
}



int main(int argc,char **argv)
{

	glutInit(&argc,argv);
	glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
	glutInitWindowPosition(0,0);
	glutInitWindowSize(500,500);
	glutCreateWindow("Lab Final");
	init();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
