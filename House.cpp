#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdlib.h>

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // RoofTop
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.99, 0.1);
    glVertex3f(0.0, 3.0, 0.0);
    glColor3f(0.99, 0.1, 0.1);
    glVertex3f(-2.0, 1.0, 0.0);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(2.0, 1.0, 0.0);
    glEnd();

    // Home Frame
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.5, 1.0);
    glVertex3f(1.25, 1.0, 0.0);
    glColor3f(0.5, 0.25, 1.0);
    glVertex3f(-1.25, 1.0, 0.0);
    glColor3f(0.25, 1.0, 0.5);
    glVertex3f(-1.25, -2.0, 0.0);
    glColor3f(0.25, 0.50, 0.75);
    glVertex3f(1.25, -2.0, 0.0);
    glEnd();

    // Window RIGHT
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.4, 0.0);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(0.5, 0.4, 0.0);
    glColor3f(0.0, 0.0, 0.5);
    glVertex3f(0.5, 0.0, 0.0);
    glColor3f(0.5, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();

    // Window LEFT
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0, 0.4, 0.0);
    glColor3f(1.0, 0.5, 1.0);
    glVertex3f(-0.5, 0.4, 0.0);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-0.5, 0.0, 0.0);
    glColor3f(0.5, 1.0, 1.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glEnd();

    // Basement
    glBegin(GL_POLYGON);
    glColor3f(0.33, 0.66, 0.99);
    glVertex3f(1.5, -2.0, 0.0);
    glColor3f(0.99, 0.33, 0.66);
    glVertex3f(-1.5, -2.0, 0.0);
    glColor3f(0.99, 0.66, 0.33);
    glVertex3f(-1.5, -2.25, 0.0);
    glColor3f(0.66, 0.33, 0.99);
    glVertex3f(1.5, -2.25, 0.0);
    glEnd();

    // Door
    glBegin(GL_POLYGON);
    glColor3f(0.5, 1.0, 1.5);
    glVertex3f(0.5, -0.25, 0.0);
    glColor3f(1.5, 1.0, 0.5);
    glVertex3f(-0.5, -0.25, 0.0);
    glColor3f(0.5, 1.5, 1.0);
    glVertex3f(-0.5, -2.0, 0.0);
    glColor3f(1.5, 0.5, 1.0);
    glVertex3f(0.5, -2.0, 0.0);
    glEnd();

    // Door Line Divider
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0, -0.25, 0.0);
    glVertex3f(0, -2.0, 0.0);
    glEnd();

    glFlush();
    /** glFlush()
     *
     * empties all commands in these buffers
     * and forces all pending commands will to be executed
     * immediately without waiting buffers are full
     */

}

void init()
{
    // glClearColor(RED, GREEN, BLUE, ALPHA);
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // glOrtho(Left, Right, Bottom, Top, nearVal, farVal);
    glOrtho(-3, 3, -3, 3, -3, 3);
}

int main()
{
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(200, 200);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Amar Bari");

    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
