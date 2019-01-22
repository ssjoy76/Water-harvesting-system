#include<windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void graphicsDisplay(void)
{

  /* Clears buffers to preset values */
  glClear(GL_COLOR_BUFFER_BIT);
  /* Plot the points */
  glBegin(GL_LINES);
  /* Plot the first point */
       glVertex2d(30,40);
       glVertex2d(50,90);
  glEnd();

  glFlush();
}
void Init()
{
  /* Set clear color to white */
  glClearColor(1.0,1.0,1.0,0);
  /* Set fill color to black */
  glColor3f(0.0,0.0,0.0);
  /* glViewport(0 , 0 , 640 , 480); */
  /* glMatrixMode(GL_PROJECTION); */
  /* glLoadIdentity(); */
  gluOrtho2D(0 , 640 , 0 , 480);
}
int main(int argc, char **argv)
{

  /* Initialise GLUT library */
  glutInit(&argc,argv);
  /* Set the initial display mode */
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
  /* Set the initial window position and size */
  glutInitWindowPosition(0,0);
  glutInitWindowSize(640,480);
  /* Create the window with title "DDA_Line" */
  glutCreateWindow("Display");
  /* Initialize drawing colors */
  Init();
  /* Call the displaying function */
  glutDisplayFunc(graphicsDisplay);
  /* Keep displaying untill the program is closed */
  glutMainLoop();
  return 0;
}
