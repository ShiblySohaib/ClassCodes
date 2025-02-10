#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

using namespace std;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1000, 0.0, 1000.0, -1.0, 1.0);
}


void Draw()
{
    glColor3f(1,1,0);
    glBegin(GL_LINES);
    glVertex2i(100,100);
    glVertex2i(500,100);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(500,100);
    glVertex2i(500,500);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(100,100);
    glVertex2i(100,500);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(100,500);
    glVertex2i(500,500);
    glEnd();

glutSwapBuffers();
}

int main(int argc,char **argv){
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
