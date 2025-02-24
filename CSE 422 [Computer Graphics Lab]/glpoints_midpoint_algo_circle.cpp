#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>>


int x = 0, y=0, r=0, pk=0;


void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-500.0, 500.0, -500.0, 500.0, -1.0, 1.0);
}


void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f( 1 ,0, 0);
	glBegin(GL_POINTS);
	pk = 1-r;
	while(x<=y){
        if(pk<0){
            x++;
            pk = pk+2*x+1;
        }
        else{
            x++;
            y--;
            pk = pk + 2*x + 1 - 2*y;
        }

        glVertex2i(x,y);
        glVertex2i(y,x);
        glVertex2i(x*-1,y);
        glVertex2i(y*-1,x);
        glVertex2i(x*-1,y*-1);
        glVertex2i(y*-1,x*-1);
        glVertex2i(x,y*-1);
        glVertex2i(y,x*-1);
	}
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
	scanf("%d",&r);
	y = r;
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
