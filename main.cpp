#include <windows.h>
#include <GL/glut.h>
#include<math.h>

void initGL(){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

//home square
    glBegin(GL_QUADS);
     glColor3f(0.8f, 0.1f, 0.1f);
        glVertex2f(-0.5f,-0.8f);
        glVertex2f(0.5f, -0.8f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(-0.5f, 0.2f);
    glEnd();
// chader jonno
   glBegin(GL_TRIANGLES);
   glColor3f(0.4f, 0.2f, 0.0f);
        glVertex2f(0.0f, 0.8f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.15f,-0.8f);
        glVertex2f(0.15f, -0.8f);
        glVertex2f(0.15f, -0.2f);
        glVertex2f(-0.15f, -0.2f);
    glEnd();
//windows
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.8f, 1.0f);
        glVertex2f(0.25f,-0.15f);
        glVertex2f(0.4f, -0.15f);
        glVertex2f(0.4f, 0.0f);
        glVertex2f(0.25f, 0.0f);
    glEnd();
// niche river
 glBegin(GL_QUADS);
    glColor3f(0.0f, 0.3f, 0.8f);
        glVertex2f(-20.6f,-0.85f);
        glVertex2f(20.6f, -0.85f);
        glVertex2f(20.6f,-1.0f);
        glVertex2f(-20.6f, -1.0f);
    glEnd();
//circle
    float x_center = 0.7f, y_center = 0.7f;
    float radius = 0.15f;

   glBegin(GL_POINTS);
for(float r = 0; r <= radius; r += 0.001f) { // chhoto radius theke boro porjonto
    for(float angle = 0; angle <= 360; angle += 0.5f) {
        float x = x_center + r * cos(angle * 3.1416 / 180);
        float y = y_center + r * sin(angle * 3.1416 / 180);
        glColor3f(1.0f, 0.0f, 0.0f); // red color
        glVertex2f(x, y);
    }
}
glEnd();
//janala
 glBegin(GL_QUADS);
    glColor3f(0.4f, 0.8f, 1.0f);
        glVertex2f(-0.25f,-0.15f);
        glVertex2f(-0.4f, -0.15f);
        glVertex2f(-0.4f, 0.0f);
        glVertex2f(-0.25f, 0.0f);
    glEnd();

    //stand
     glBegin(GL_QUADS);
 glColor3f(0.3f, 0.2f, 0.0f); // Brown stick
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.88f, -0.8f);
    glVertex2f(-0.88f, 0.3f);
    glVertex2f(-0.9f, 0.3f);
    glEnd();

     glBegin(GL_QUADS);
        glColor3f(0.0f, 0.5f, 0.0f); // Green flag
    glVertex2f(-0.88f, 0.3f);
    glVertex2f(-0.58f, 0.3f);
    glVertex2f(-0.58f, 0.1f);
    glVertex2f(-0.88f, 0.1f);
    glEnd();

    float fx_center = -0.73f, fy_center = 0.2f;
float fradius = 0.06f;

glBegin(GL_POINTS);
for(float r = 0; r <= fradius; r += 0.001f) { // chhoto radius theke boro porjonto
    for(float angle = 0; angle <= 360; angle += 0.5f) {
        float x = fx_center + r * cos(angle * 3.1416 / 180);
        float y = fy_center + r * sin(angle * 3.1416 / 180);
        glColor3f(1.0f, 0.0f, 0.0f); // red color
        glVertex2f(x, y);
    }
}
glEnd();

    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Red House");
    glutInitWindowSize(900,900);
    glutInitWindowPosition(300,300);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
