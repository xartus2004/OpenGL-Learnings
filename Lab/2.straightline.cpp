#include <GL/gl.h>
#include <GL/glut.h>

void display() {
  glDrawBuffer(GL_BACK);
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(0.5f, 0.5f, 0.5f);
  glBegin(GL_LINES);
    glVertex2i(5, 5);
    glVertex2i(5, 15);
  glEnd();
  glutSwapBuffers();
}

void init() {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0f, 20.0f, 0.0f, 20.0f);
  glClearColor(0.39f, 0.19f, 0.0f, 0.0f);
  glMatrixMode(GL_MODELVIEW);
  glutInitDisplayMode(GLUT_DOUBLE);
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB);
  glutInitWindowPosition(100,200);
  glutInitWindowSize(200,200);

  glutCreateWindow("PC-F");
  glutDisplayFunc(display);
  init();
  glutMainLoop();

  return 0;
}