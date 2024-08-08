#include <GL/gl.h>
#include <GL/glut.h>


void drawLines() {
  glClear(GL_COLOR_BUFFER_BIT); 

  glColor3f(1.0f, 1.0f, 1.0f); 
  glBegin(GL_LINES);

  
  for (int i = 0; i < 10; ++i) {
    glVertex2i(50 + i * 40, 50);  
    glVertex2i(150 + i * 40, 150); 
  }

  glEnd();

  glutSwapBuffers(); 
}

void init() {
  
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
  
  glMatrixMode(GL_PROJECTION); 
  glLoadIdentity();
  gluOrtho2D(0.0, 400.0, 0.0, 300.0);
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
  glutInitWindowSize(400, 300);  
  glutInitWindowPosition(100, 100); 
  glutCreateWindow("Multiple Lines with Loop"); 
  init(); 
  glutDisplayFunc(drawLines); 
  glutMainLoop(); 

  return 0;
}
