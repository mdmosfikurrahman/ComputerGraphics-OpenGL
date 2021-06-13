#include <windows.h>
#include <GL/glut.h>

void initGL()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); // Four Vertex = One Quad
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex2f(-0.8, 0.1); // Define vertices in counter-clockwise (CCW) order
    glVertex2f(-0.2, 0.1); //  so that the normal (front-face) is facing you
    glVertex2f(-0.2, 0.7);
    glVertex2f(-0.8, 0.7);

    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex2f(-0.7, -0.6);
    glVertex2f(-0.1, -0.6);
    glVertex2f(-0.1,  0.0);
    glVertex2f(-0.7,  0.0);

    glColor3f(0.2, 0.2, 0.2); // Dark Gray
    glVertex2f(-0.9, -0.7);
    glColor3f(1.0, 1.0, 1.0); // White
    glVertex2f(-0.5, -0.7);
    glColor3f(0.2, 0.2, 0.2); // Dark Gray
    glVertex2f(-0.5, -0.3);
    glColor3f(1.0, 1.0, 1.0); // White
    glVertex2f(-0.9, -0.3);
    glEnd();

    glBegin(GL_TRIANGLES); // Three Vertex = One Triangle
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex2f(0.1, -0.6);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.4, -0.1);

    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex2f(0.3, -0.4);
    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex2f(0.9, -0.4);
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex2f(0.6, -0.9);
    glEnd();

    glBegin(GL_POLYGON); // Connect with all vertex = Polygon
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex2f(0.4, 0.2);
    glVertex2f(0.6, 0.2);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.6);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.3, 0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glVertex2f(1, 0.0);
    glVertex2f(-1.0, 0.0);
    glEnd();

    glFlush(); // Render Command
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // GLUT Initialize
    glutCreateWindow("Vertex, Primitive & Color"); // Window with this title
    glutInitWindowSize(320, 320); // Width and Height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	
    glutDisplayFunc(display); // Register callback handler for window re-paint event
    initGL(); // Our own OpenGL initialization
	glutMainLoop(); // Enter the event-processing loop
    
	return 0;
}
