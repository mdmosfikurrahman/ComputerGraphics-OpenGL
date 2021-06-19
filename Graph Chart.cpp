#include<windows.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<stdio.h>

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);


    glBegin(GL_LINES);

    for(float i = 0.0; i <= 1.0; i += 0.1)
    {
        //Y-Axis
        glVertex3d(0.0 + i, 0.0, 0.0);
        glVertex3d(0.0 + i, 1.0, 0.0);

        //X-Axis
        glVertex3d(0.0, 0.0 + i, 0.0);
        glVertex3d(1.0, 0.0 + i, 0.0);
    }

    glEnd();

    glFlush ();
}

void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInitWindowSize(640, 640);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Graph Chart - OpenGL");

    init();
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}