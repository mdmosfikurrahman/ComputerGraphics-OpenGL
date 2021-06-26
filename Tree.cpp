#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);

    glBegin(GL_QUADS); // Sky
    //Square
    glColor3f(0.0, 0.7, 0.9);
    glVertex3f(0.0f, 0.6f, 0.0f);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(1.0f, 1.0f, 0.6f);
    glColor3f(0.0, 0.7, 0.9);
    glVertex3f(1.0f, 0.6f, 0.0f);
    glEnd();

    glBegin(GL_QUADS); // Earth
    //Square
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(0.0f, 0.6f, 0.0f);
    glColor3f(0.0, 0.4, 0.0);
    glVertex3f(1.0f, 0.6f, 0.0f);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.8f, 0.0f);
    glVertex3f(0.54f, 0.74f, 0.0f);
    glVertex3f(0.46f, 0.74f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.75f, 0.0f);
    glVertex3f(0.56f, 0.7f, 0.0f);
    glVertex3f(0.44f, 0.7f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.74f, 0.0f);
    glVertex3f(0.58f, 0.66f, 0.0f);
    glVertex3f(0.42f, 0.66f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.72f, 0.0f);
    glVertex3f(0.6f, 0.62f, 0.0f);
    glVertex3f(0.4f, 0.62f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.70f, 0.0f);
    glVertex3f(0.62f, 0.58f, 0.0f);
    glVertex3f(0.38f, 0.58f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.68f, 0.0f);
    glVertex3f(0.64f, 0.54f, 0.0f);
    glVertex3f(0.36f, 0.54f, 0.0f);
    glEnd();

    glBegin(GL_QUADS); // Root
    //Square
    glColor3f(0.6, 0.3, 0.3);
    glVertex3f(0.52f, 0.5f, 0.0f);
    glVertex3f(0.52f, 0.36f, 0.0f);
    glVertex3f(0.48f, 0.36f, 0.0f);
    glVertex3f(0.48f, 0.5f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.66f, 0.0f);
    glVertex3f(0.66f, 0.5f,0.0f);
    glVertex3f(0.34f, 0.5f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    //Triangle
    glColor3f(0.0, 0.6, 0.0);

    glVertex3f(0.5f, 0.64f, 0.0f);
    glVertex3f(0.68f, 0.46f, 0.0f);
    glVertex3f(0.32f, 0.46f, 0.0f);
    glEnd();

    glFlush ();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Tree");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
