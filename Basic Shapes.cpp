#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0, 1.0, 1.0);


    glBegin(GL_QUADS); //Begin quadrilateral coordinates

    //Trapezoid
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.35f, 0.05f, 0.0f);
    glVertex3f(0.40f, 0.35f, 0.0f);
    glVertex3f(0.00f, 0.35f, 0.0f);

    glEnd(); //End quadrilateral coordinates

    glBegin(GL_TRIANGLES); //Begin triangle coordinates

    //Pentagon
    glVertex3f(0.5f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.5f, 0.35f, 0.0f);

    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);

    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);
    glVertex3f(0.63f, 0.50f, 0.0f);

    //Triangle
    glVertex3f(0.30f, 0.65f, 0.0f);
    glVertex3f(0.60f, 0.65f, 0.0f);
    glVertex3f(0.45, 0.85f, 0.0f);

    glEnd();//End triangle coordinates
    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);

    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //glOrtho(Xlower, Xupper, Ylower, Yupper, NearVal, FarVal);
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Basic Shapes");

    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0; /* ISO C requires main to return int. */
}
