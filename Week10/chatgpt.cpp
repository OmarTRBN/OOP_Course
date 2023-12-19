#include <iostream>
#include <eigen3/Eigen/Dense>
#include <GL/glut.h>

using namespace Eigen;

struct Position
{
    MatrixXd angle{1, 3};    // Roll, pitch, yaw
    MatrixXd distance{1, 3}; // X, Y, Z
};

Position objectPosition; // Global object position

void drawObject()
{
    glPushMatrix();

    // Apply rotations
    glRotatef(objectPosition.angle(0, 0), 1.0, 0.0, 0.0); // Roll
    glRotatef(objectPosition.angle(0, 1), 0.0, 1.0, 0.0); // Pitch
    glRotatef(objectPosition.angle(0, 2), 0.0, 0.0, 1.0); // Yaw

    // Translate to the object's position
    glTranslatef(objectPosition.distance(0, 0), objectPosition.distance(0, 1), objectPosition.distance(0, 2));

    // Draw the object (in this case, a cube)
    glutWireCube(1.0);

    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); // Set the camera position

    drawObject();

    glutSwapBuffers();
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)width / (double)height, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Object Visualization");
    glEnable(GL_DEPTH_TEST);

    // Set initial object position
    objectPosition.angle << 30.0, 45.0, 60.0;  // Initial angles (roll, pitch, yaw)
    objectPosition.distance << 1.0, 2.0, -5.0; // Initial distances (X, Y, Z)

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();

    return 0;
}
