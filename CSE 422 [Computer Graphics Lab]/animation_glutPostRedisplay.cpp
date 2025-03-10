#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

float p=-4;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-10.0, 10, -10.0, 10, -1.0, 1.0);
}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    if(p<=10) p+=0.005;
    else p=-10;

    glutPostRedisplay();

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(-2,p);
    glVertex2f(2,p);
    glVertex2f(2,p-6);
    glVertex2f(-2,p-6);
    glEnd();
    glutSwapBuffers();
}

int main(int argc,char **argv){

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Animation");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
