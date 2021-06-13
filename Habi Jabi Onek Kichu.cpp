#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdlib.h>

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.5, 0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.8, 0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.8, 0.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.5, -0.2);
    glVertex2f(-0.8, -0.35);
    glVertex2f(-0.8, -0.65);
    glVertex2f(-0.5, -0.8);
    glVertex2f(-0.2, -0.65);
    glVertex2f(-0.2, -0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(0.2, -0.5);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(0.5, -0.8);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(0.8, -0.5);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(0.5, -0.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glVertex2f(1, 0.0);
    glVertex2f(-1.0, 0.0);
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main()
{
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Habi Jabi Onek Kichu");

    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
