#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include <stdio.h>


#define HORIZON_DISTANCE 400


void init(void) {
    glClearColor(0,0,0,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1600, 0, 900, -1.0, 1.0);
}

void drawHorizonLine(float height) {
    glColor3f(0.3, 0.2, 0.1); //brown line
    glBegin(GL_LINES);
    glVertex2i(0, height);
    glVertex2i(1600, height);
    glEnd();
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

void drawHill(GLfloat rx, GLfloat ry, GLfloat cx){
    float cy = HORIZON_DISTANCE;
    glColor3f(0.4, 0.2, 0.0); //brown
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(cx,cy);
    int division = 1;
    for(int i=0 ; i<=25 ; i++){
        float angle = 2*3.14 *i/50;
        float x=rx*cosf(angle);
        float y=ry*sinf(angle);
        glVertex2f(x+cx,y+cy);
    }
    glEnd();
}


void drawTree(float x) {
    float y = HORIZON_DISTANCE;

    // Draw trunk
    glColor3f(0.2, 0.1, 0.1);
    glBegin(GL_QUADS);
    glVertex2f(x - 1, y);
    glVertex2f(x + 1, y);
    glVertex2f(x + 1, y + 30);
    glVertex2f(x - 1, y + 30);
    glEnd();

    // Draw leaves
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x - 10, y + 20);
    glVertex2f(x + 10, y + 20);
    glVertex2f(x, y + 40);
    glEnd();
}



void drawFencePillar(float x, float y){
    glLineWidth(3);
    glColor3f(0.6, 0.5, 0.0);
    glBegin(GL_LINES);
        glVertex2f(x, y);
        glVertex2f(x, y+30);
    glEnd();
}


void drawGrass(float x, float y){
    glLineWidth(3);
    glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_LINES);
        glVertex2f(x, y);
        glVertex2f(x, y+=10);
    glEnd();
}



void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawHorizonLine(HORIZON_DISTANCE);

    glBegin(GL_QUADS);
        glColor3f(0.1f, 0.5f, 0.1f); // Dark green (bottom)
        glVertex2f(0, 0);
        glVertex2f(1600, 0);

        glColor3f(0.6f, 0.6f, 0.3f); // Light green (top near horizon)
        glVertex2f(1600, HORIZON_DISTANCE);
        glVertex2f(0, HORIZON_DISTANCE);
    glEnd();

    //hills
    drawHill(90, 130, 90);
    drawHill(70, 90, 230);
    drawHill(70, 70, 360);
    drawHill(100, 150, 490);
    drawHill(80, 120, 650);
    drawHill(70, 80, 760);
    drawHill(90, 100, 870);
    drawHill(90, 130, 1010);
    drawHill(100, 150, 1180);
    drawHill(70, 90, 1320);
    drawHill(70, 120, 1430);
    drawHill(80, 90, 1520);

    //trees
    drawTree(50);
    drawTree(300);
    drawTree(430);
    drawTree(610);
    drawTree(750);
    drawTree(1080);
    drawTree(1200);
    drawTree(1500);




    //fence pillars
    for(int i=0;i<=900;i+=10){
        drawFencePillar(i,300);
    }
    for(float i=0,j=700;i<=300;i+=10){
        j+=(200/30.0);
        drawFencePillar(j, i);
    }

    //fence horizontal lines
    glLineWidth(3);
    glColor3f(0.6, 0.5, 0.0);
    glBegin(GL_LINES);
        glVertex2f(0, 310);
        glVertex2f(910, 310);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(0, 320);
        glVertex2f(910, 320);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(700, 0);
        glVertex2f(910, 310);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(700, 10);
        glVertex2f(910, 320);
    glEnd();
    glLineWidth(1);




    //grass
    float grassEnd = 700;
    for(int j=0;j<=280;j+=60){
        for(int i=0;i<=grassEnd;i+=60){
            drawGrass(i,j);
        }
        grassEnd+=35;
    }
    grassEnd = 700;
    for(int j=30;j<=280;j+=60){
        for(int i=30;i<=grassEnd;i+=60){
            drawGrass(i,j);
        }
        grassEnd+=35;
    }







    //graph
    glColor3f(1,0,0);
    for(int i=0;i<=900;i+=50){
        glBegin(GL_LINES);
        glVertex2f(0,i);
        glVertex2f(20,i);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(1600,i);
        glVertex2f(1580,i);
        glEnd();
    }
    for(int i=0;i<=1600;i+=50){
        glBegin(GL_LINES);
        glVertex2f(i,900);
        glVertex2f(i,880);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(i,0);
        glVertex2f(i,20);
        glEnd();
    }
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1600, 900);
    glutCreateWindow("Alien Invasion");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
