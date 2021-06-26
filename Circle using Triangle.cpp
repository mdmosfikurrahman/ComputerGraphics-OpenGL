#include <GL/glut.h>
#include<math.h>

const int steps = 1000;

void display(void)
{
    float prevX = 0, prevY = 0, radious = 0.5, angle = 3.1416*2/steps;

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1, 1, 0);
    glBegin(GL_TRIANGLES);

    for(int i = 0; i <= steps; i++)
    {
        float newX = radious*sin(angle*i);
        float newY = -radious*cos(angle*i);


        glVertex3f(0.5f,0.5f,0.0f);

        glVertex3f(prevX+0.5, prevY+0.5, 0.f);
        glVertex3f(newX+0.5, newY+0.5, 0.f);

        prevX = newX;
        prevY = newY;
    }

    glEnd();
    glFlush ();
}

void init(void)
{
    glClearColor (0, 0, 0, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (512, 512);
    glutInitWindowPosition (100, 100);

    glutCreateWindow ("Circle using Triangle");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
