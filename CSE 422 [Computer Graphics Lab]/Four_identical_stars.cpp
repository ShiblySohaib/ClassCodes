#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>


void init(void)
{
  glClearColor(255,255,255,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 100, 0.0, 100.0, -1.0, 1.0);
}


void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);


   //red
   glColor3f(0,0,255);
   glBegin(GL_POLYGON);
   glVertex2i(47,22);
   glVertex2i(50,0);
   glVertex2i(53,22);
   glVertex2i(75,25);
   glVertex2i(53,28);
   glVertex2i(50,50);
   glVertex2i(47,28);
   glVertex2i(25,25);
   glEnd();

   //green
   glColor3f(0,255,0);
   glBegin(GL_POLYGON);
   glVertex2i(72,47);
   glVertex2i(75,25);
   glVertex2i(78,47);
   glVertex2i(100,50);
   glVertex2i(78,53);
   glVertex2i(75,75);
   glVertex2i(72,53);
   glVertex2i(50,50);
   glEnd();

   //green
   glColor3f(255,0,0);
   glBegin(GL_POLYGON);
   glVertex2i(47,72);
   glVertex2i(50,50);
   glVertex2i(53,72);
   glVertex2i(75,75);
   glVertex2i(53,78);
   glVertex2i(50,100);
   glVertex2i(47,78);
   glVertex2i(25,75);
   glEnd();

   //yellow
   glColor3f(255,255,0);
   glBegin(GL_POLYGON);
   glVertex2i(22,47);
   glVertex2i(25,25);
   glVertex2i(28,47);
   glVertex2i(50,50);
   glVertex2i(28,53);
   glVertex2i(25,75);
   glVertex2i(23,53);
   glVertex2i(0,50);
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
