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
     glOrtho(0,1000,0,1000, -1.0, 1.0);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy){

    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(cx,cy);
    for(int i=0 ; i<100 ; i++){
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

    //wheels
    glColor3f( 0.3 ,0.3, 0.3);
    circle(80,100,180,200);
    circle(80,100,380,150);

    glColor3f( 0.5 ,0.5, 0.5);
    circle(80,100,200,200);
    circle(80,100,400,150);


    glColor3f(0,0.6, 0.6);
    circle(30,40,200,200);
    circle(30,40,400,150);


    //red front
    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(80,180);
    glVertex2i(340,130);
    glVertex2i(350,230);
    glVertex2i(370,250);
    glVertex2i(360,270);
    glVertex2i(100,320);
    glEnd();


    //smile white
    glColor3f( 1,1, 1);
    circle(100,80,230,270);

    //smile lines
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(145,270);
    glVertex2i(145,225);
    glBegin(GL_LINES);
    glVertex2i(180,270);
    glVertex2i(180,200);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(230,270);
    glVertex2i(230,190);
    glEnd();
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(280,270);
    glVertex2i(280,200);
    glEnd();
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(320,270);
    glVertex2i(320,230);
    glEnd();

    //smile red
    glColor3f( 1,0,0);
    circle(100,80,235,300);


    //left mirror
    glColor3f( 0,0, 0);
    circle(32,22,215,405);
    glColor3f( 1,0, 0);
    circle(30,20,215,405);


    //wind shield
    glColor3f(0.2,0.5, 1);
    glBegin(GL_POLYGON);
    glVertex2i(220,400);
    glVertex2i(480,350);
    glVertex2i(520,470);
    glVertex2i(270,520);
    glEnd();


    //eyes
    glColor3f( 0,0,0);
    circle(62,102,300,400);
    glColor3f( 1,1,1);
    circle(60,100,300,400);

    glColor3f( 0,0,0);
    circle(62,102,400,380);
    glColor3f( 1,1,1);
    circle(60,100,400,380);

    glColor3f(0.2,0.5, 1);
    circle(30,50,310,400);
    circle(30,50,430,380);

    glColor3f(0,0,0);
    circle(25,45,315,400);
    circle(25,45,435,380);

    glColor3f(1,1,1);
    circle(10,10,315,430);
    circle(10,10,440,410);


    //hood
    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(100,320);
    glVertex2i(360,270);
    glVertex2i(490,350);
    glVertex2i(220,400);
    glEnd();



    //body
    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(490,350);
    glVertex2i(485,150);
    glVertex2i(801,200);
    glVertex2i(730,370);
    glEnd();

    glColor3f( 0.3 ,0.3, 0.3);
    circle(80,100,680,200);
    glColor3f( 0.5 ,0.5, 0.5);
    circle(80,100,700,200);
    glColor3f( 0,0.6, 0.6);
    circle(30,40,700,200);


    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(490,350);
    glVertex2i(330,270);
    glVertex2i(330,248);
    glVertex2i(450,245);
    glVertex2i(485,150);
    glEnd();



    //line hood

    //bottom
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(100,320);
    glVertex2i(360,270);
    glEnd();

    //right
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(360,270);
    glVertex2i(480,350);
    glEnd();

    //left
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(220,400);
    glVertex2i(100,320);
    glEnd();



    //headlights
    glColor3f( 1,1,0);
    circle(30,20,360,270);
    circle(30,20,120,330);

    //glass
    glColor3f(0.2,0.5, 1);
    glBegin(GL_POLYGON);
    glVertex2i(480,350);
    glVertex2i(620,360);
    glVertex2i(620,470);
    glVertex2i(510,470);
    glEnd();


    glColor3f(0.2,0.5, 1);
    glBegin(GL_POLYGON);
    glVertex2i(625,360);
    glVertex2i(730,370);
    glVertex2i(720,470);
    glVertex2i(625,470);
    glEnd();


    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(618,350);
    glVertex2i(625,360);
    glVertex2i(625,470);
    glVertex2i(618,470);
    glEnd();

    //right body line
    glColor3f( 0,0,0);
    glBegin(GL_LINES);
    glVertex2i(480,350);
    glVertex2i(730,370);
    glEnd();

    //body end line
    glColor3f( 1,0,0);
    glBegin(GL_LINES);
    glVertex2i(730,370);
    glVertex2i(720,470);
    glEnd();


    //wind shield right line
    glColor3f( 1,0,0);
    glBegin(GL_LINES);
    glVertex2i(480,350);
    glVertex2i(510,470);
    glEnd();


    //roof
    glColor3f( 1,0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(270,520);
    glVertex2i(520,470);
    glVertex2i(720,470);
    glVertex2i(520,510);
    glEnd();


    //right mirror
    glColor3f( 0,0, 0);
    circle(32,22,500,350);
    glColor3f( 1,0, 0);
    circle(30,20,500,350);



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
