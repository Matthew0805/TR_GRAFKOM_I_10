
#include <windows.h>
#include <stdlib.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR_GRAFKOM_Palazzo Versace Dubai");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}


void tampil(void)
{
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();

    //1b
    glBegin(GL_QUADS);
    glColor3ub(193, 167, 140);
    glVertex3f(-18.0, 0.0, -18.0);
    glVertex3f(18.0, 0.0, -18.0);
    glVertex3f(18.0, 10.0, -18.0);
    glVertex3f(-18.0, 10.0, -18.0);
    //2b
    glVertex3f(18.0, 0.0, -18.0);
    glVertex3f(18.0, 10.0, -18.0);
    glVertex3f(18.0, 10.0, -9.0);
    glVertex3f(18.0, 0.0, -9.0);
    //3b
    glVertex3f(18.0, 0.0, -9.0);
    glVertex3f(37.0, 0.0, -12.0);
    glVertex3f(37.0, 10.0, -12.0);
    glVertex3f(18.0, 10.0, -9.0);
    //4b
    glVertex3f(37.0, 0.0, -12.0);
    glVertex3f(40.0, 0.0, 0.0);
    glVertex3f(40.0, 10.0, 0.0);
    glVertex3f(37.0, 10.0, -12.0);
    //5b
    glVertex3f(40.0, 0.0, 0.0);
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(40.0, 10.0, 0.0);
    //6b
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(24.0, 10.0, 4.0);
    //7b
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(28.0, 10.0, 26.0);
    //8b
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(16.0, 10.0, 28.0);
    //9b
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(10.0, 10.0, -6.0);
    //10b
    glVertex3f(-18.0, 0.0, -18.0);
    glVertex3f(-18.0, 10.0, -18.0);
    glVertex3f(-18.0, 10.0, -9.0);
    glVertex3f(-18.0, 0.0, -9.0);
    //11b
    glVertex3f(-18.0, 0.0, -9.0);
    glVertex3f(-37.0, 0.0, -12.0);
    glVertex3f(-37.0, 10.0, -12.0);
    glVertex3f(-18.0, 10.0, -9.0);
    //12b
    glVertex3f(-37.0, 0.0, -12.0);
    glVertex3f(-40.0, 0.0, 0.0);
    glVertex3f(-40.0, 10.0, 0.0);
    glVertex3f(-37.0, 10.0, -12.0);
    //13b
    glVertex3f(-40.0, 0.0, 0.0);
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-40.0, 10.0, 0.0);
    //14b
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-24.0, 10.0, 4.0);
    //15b
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-28.0, 10.0, 26.0);
    //16b
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glEnd();

    //1a
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 10.0, -18.0);
    glVertex3f(18.0, 10.0, -18.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(-18.0, 24.0, -18.0);
    //2a
    glVertex3f(18.0, 10.0, -18.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(18.0, 25.0, -6.0);
    glVertex3f(18.0, 10.0, -6.0);
    //3a
    glVertex3f(18.0, 10.0, -6.0);
    glVertex3f(37.0, 10.0, -12.0);
    glVertex3f(37.0, 24.0, -12.0);
    glVertex3f(18.0, 24.0, -6.0);
    //4a
    glVertex3f(37.0, 10.0, -12.0);
    glVertex3f(40.0, 10.0, 0.0);
    glVertex3f(40.0, 24.0, 0.0);
    glVertex3f(37.0, 24.0, -12.0);
    //5a
    glVertex3f(40.0, 10.0, 0.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(40.0, 24.0, 0.0);
    //6a
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(28.0, 24.0, 26.0);
    glVertex3f(24.0, 24.0, 4.0);
    //7a
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(16.0, 24.0, 28.0);
    glVertex3f(28.0, 24.0, 26.0);
    //8a
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(10.0, 24.0, -6.0);
    glVertex3f(16.0, 24.0, 28.0);
    //9a
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(10.0, 24.0, -6.0);
    //10a
    glVertex3f(-18.0, 10.0, -18.0);
    glVertex3f(-18.0, 24.0, -18.0);
    glVertex3f(-18.0, 24.0, -6.0);
    glVertex3f(-18.0, 10.0, -6.0);
    //11a
    glVertex3f(-18.0, 10.0, -6.0);
    glVertex3f(-37.0, 10.0, -12.0);
    glVertex3f(-37.0, 24.0, -12.0);
    glVertex3f(-18.0, 24.0, -6.0);
    //12a
    glVertex3f(-37.0, 10.0, -12.0);
    glVertex3f(-40.0, 10.0, 0.0);
    glVertex3f(-40.0, 24.0, 0.0);
    glVertex3f(-37.0, 24.0, -12.0);
    //13a
    glVertex3f(-40.0, 10.0, 0.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-40.0, 24.0, 0.0);
    //14a
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-28.0, 24.0, 26.0);
    glVertex3f(-24.0, 24.0, 4.0);
    //15a
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glVertex3f(-28.0, 24.0, 26.0);
    //16a
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 0.0, -18.0);
    glVertex3f(18.0, 0.0, -18.0);
    glVertex3f(18.0, 0.0, -6.0);
    glVertex3f(-18.0, 0.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(18.0, 0.0, -9.0);
    glVertex3f(37.0, 0.0, -12.0);
    glVertex3f(40.0, 0.0, 0.0);
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(10.0, 0.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-40.0, 0.0, 0.0);
    glVertex3f(-37.0, 0.0, -12.0);
    glVertex3f(-18.0, 0.0, -9.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glEnd();

    //tengah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 10.0, -18.0);
    glVertex3f(18.0, 10.0, -18.0);
    glVertex3f(18.0, 10.0, -6.0);
    glVertex3f(-18.0, 10.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(18.0, 10.0, -9.0);
    glVertex3f(37.0, 10.0, -12.0);
    glVertex3f(40.0, 10.0, 0.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(10.0, 10.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-40.0, 10.0, 0.0);
    glVertex3f(-37.0, 10.0, -12.0);
    glVertex3f(-18.0, 10.0, -9.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 24.0, -18.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(18.0, 24.0, -6.0);
    glVertex3f(-18.0, 24.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 24.0, -6.0);
    glVertex3f(18.0, 24.0, -9.0);
    glVertex3f(37.0, 24.0, -12.0);
    glVertex3f(40.0, 24.0, 0.0);
    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(28.0, 24.0, 26.0);
    glVertex3f(16.0, 24.0, 28.0);
    glVertex3f(10.0, 24.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glVertex3f(-28.0, 24.0, 26.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-40.0, 24.0, 0.0);
    glVertex3f(-37.0, 24.0, -12.0);
    glVertex3f(-18.0, 24.0, -9.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glEnd();

    //jendela
    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-16.5, 25.0, -6.0);
    glVertex3f(16.5, 25.0, -6.0);
    glVertex3f(16.5, 27.0, -6.0);
    glVertex3f(-16.5, 27.0, -6.0);

    glVertex3f(-16.0, 25.0, -18.0);
    glVertex3f(16.0, 25.0, -18.0);
    glVertex3f(16.0, 27.0, -18.0);
    glVertex3f(-16.0, 27.0, -18.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-15.0, 25.0, -6.0);
    glVertex3f(-15.0, 27.0, -6.0);
    glVertex3f(-13.5, 25.0, -6.0);
    glVertex3f(-13.5, 27.0, -6.0);
    glVertex3f(-12.0, 25.0, -6.0);
    glVertex3f(-12.0, 27.0, -6.0);
    glVertex3f(-10.5, 25.0, -6.0);
    glVertex3f(-10.5, 27.0, -6.0);
    glVertex3f(-9.0, 25.0, -6.0);
    glVertex3f(-9.0, 27.0, -6.0);
    glVertex3f(-7.5, 25.0, -6.0);
    glVertex3f(-7.5, 27.0, -6.0);
    glVertex3f(-6.0, 25.0, -6.0);
    glVertex3f(-6.0, 27.0, -6.0);
    glVertex3f(-4.5, 25.0, -6.0);
    glVertex3f(-4.5, 27.0, -6.0);
    glVertex3f(-3.0, 25.0, -6.0);
    glVertex3f(-3.0, 27.0, -6.0);
    glVertex3f(-1.5, 25.0, -6.0);
    glVertex3f(-1.5, 27.0, -6.0);
    glVertex3f(-0.0, 25.0, -6.0);
    glVertex3f(-0.0, 27.0, -6.0);

    glVertex3f(15.0, 25.0, -6.0);
    glVertex3f(15.0, 27.0, -6.0);
    glVertex3f(13.5, 25.0, -6.0);
    glVertex3f(13.5, 27.0, -6.0);
    glVertex3f(12.0, 25.0, -6.0);
    glVertex3f(12.0, 27.0, -6.0);
    glVertex3f(10.5, 25.0, -6.0);
    glVertex3f(10.5, 27.0, -6.0);
    glVertex3f(9.0, 25.0, -6.0);
    glVertex3f(9.0, 27.0, -6.0);
    glVertex3f(7.5, 25.0, -6.0);
    glVertex3f(7.5, 27.0, -6.0);
    glVertex3f(6.0, 25.0, -6.0);
    glVertex3f(6.0, 27.0, -6.0);
    glVertex3f(4.5, 25.0, -6.0);
    glVertex3f(4.5, 27.0, -6.0);
    glVertex3f(3.0, 25.0, -6.0);
    glVertex3f(3.0, 27.0, -6.0);
    glVertex3f(1.5, 25.0, -6.0);
    glVertex3f(1.5, 27.0, -6.0);

    glVertex3f(-15.0, 25.0, -18.0);
    glVertex3f(-15.0, 27.0, -18.0);
    glVertex3f(-13.5, 25.0, -18.0);
    glVertex3f(-13.5, 27.0, -18.0);
    glVertex3f(-12.0, 25.0, -18.0);
    glVertex3f(-12.0, 27.0, -18.0);
    glVertex3f(-10.5, 25.0, -18.0);
    glVertex3f(-10.5, 27.0, -18.0);
    glVertex3f(-9.0, 25.0, -18.0);
    glVertex3f(-9.0, 27.0, -18.0);
    glVertex3f(-7.5, 25.0, -18.0);
    glVertex3f(-7.5, 27.0, -18.0);
    glVertex3f(-6.0, 25.0, -18.0);
    glVertex3f(-6.0, 27.0, -18.0);
    glVertex3f(-4.5, 25.0, -18.0);
    glVertex3f(-4.5, 27.0, -18.0);
    glVertex3f(-3.0, 25.0, -18.0);
    glVertex3f(-3.0, 27.0, -18.0);
    glVertex3f(-1.5, 25.0, -18.0);
    glVertex3f(-1.5, 27.0, -18.0);
    glVertex3f(-0.0, 25.0, -18.0);
    glVertex3f(-0.0, 27.0, -18.0);

    glVertex3f(15.0, 25.0, -18.0);
    glVertex3f(15.0, 27.0, -18.0);
    glVertex3f(13.5, 25.0, -18.0);
    glVertex3f(13.5, 27.0, -18.0);
    glVertex3f(12.0, 25.0, -18.0);
    glVertex3f(12.0, 27.0, -18.0);
    glVertex3f(10.5, 25.0, -18.0);
    glVertex3f(10.5, 27.0, -18.0);
    glVertex3f(9.0, 25.0, -18.0);
    glVertex3f(9.0, 27.0, -18.0);
    glVertex3f(7.5, 25.0, -18.0);
    glVertex3f(7.5, 27.0, -18.0);
    glVertex3f(6.0, 25.0, -18.0);
    glVertex3f(6.0, 27.0, -18.0);
    glVertex3f(4.5, 25.0, -18.0);
    glVertex3f(4.5, 27.0, -18.0);
    glVertex3f(3.0, 25.0, -18.0);
    glVertex3f(3.0, 27.0, -18.0);
    glVertex3f(1.5, 25.0, -18.0);
    glVertex3f(1.5, 27.0, -18.0);
    glEnd();

    //jendela samping
    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-18.0, 25.0, -7.5);
    glVertex3f(-18.0, 25.0, -16.5);
    glVertex3f(-18.0, 27.0, -16.5);
    glVertex3f(-18.0, 27.0, -7.5);

    glVertex3f(18.0, 25.0, -7.5);
    glVertex3f(18.0, 25.0, -16.5);
    glVertex3f(18.0, 27.0, -16.5);
    glVertex3f(18.0, 27.0, -7.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 25.0, -9.0);
    glVertex3f(-18.0, 27.0, -9.0);
    glVertex3f(-18.0, 25.0, -10.5);
    glVertex3f(-18.0, 27.0, -10.5);
    glVertex3f(-18.0, 25.0, -12.0);
    glVertex3f(-18.0, 27.0, -12.0);
    glVertex3f(-18.0, 25.0, -13.5);
    glVertex3f(-18.0, 27.0, -13.5);
    glVertex3f(-18.0, 25.0, -15.0);
    glVertex3f(-18.0, 27.0, -15.0);

    glVertex3f(18.0, 25.0, -9.0);
    glVertex3f(18.0, 27.0, -9.0);
    glVertex3f(18.0, 25.0, -10.5);
    glVertex3f(18.0, 27.0, -10.5);
    glVertex3f(18.0, 25.0, -12.0);
    glVertex3f(18.0, 27.0, -12.0);
    glVertex3f(18.0, 25.0, -13.5);
    glVertex3f(18.0, 27.0, -13.5);
    glVertex3f(18.0, 25.0, -15.0);
    glVertex3f(18.0, 27.0, -15.0);
    glEnd();

    //atas 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 24.0, -18.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(18.0, 24.0, -6.0);
    glVertex3f(-18.0, 24.0, -6.0);

    glVertex3f(-18.0, 28.0, -18.0);
    glVertex3f(18.0, 28.0, -18.0);
    glVertex3f(18.0, 28.0, -6.0);
    glVertex3f(-18.0, 28.0, -6.0);

    glVertex3f(-18.0, 24.0, -18.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(18.0, 28.0, -18.0);
    glVertex3f(-18.0, 28.0, -18.0);

    glVertex3f(-18.0, 24.0, -6.0);
    glVertex3f(18.0, 24.0, -6.0);
    glVertex3f(18.0, 28.0, -6.0);
    glVertex3f(-18.0, 28.0, -6.0);

    glVertex3f(-18.0, 24.0, -6.0);
    glVertex3f(-18.0, 24.0, -18.0);
    glVertex3f(-18.0, 28.0, -18.0);
    glVertex3f(-18.0, 28.0, -6.0);

    glVertex3f(18.0, 24.0, -6.0);
    glVertex3f(18.0, 24.0, -18.0);
    glVertex3f(18.0, 28.0, -18.0);
    glVertex3f(18.0, 28.0, -6.0);
    glEnd();

    //jendela atas
    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-7.0, 28.5, -6.0);
    glVertex3f(7.0, 28.5, -6.0);
    glVertex3f(7.0, 29.5, -6.0);
    glVertex3f(-7.0, 29.5, -6.0);

    glVertex3f(-7.0, 28.5, -18.0);
    glVertex3f(7.0, 28.5, -18.0);
    glVertex3f(7.0, 29.5, -18.0);
    glVertex3f(-7.0, 29.5, -18.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(193, 167, 140);
    glVertex3f(-5.5, 28.5, -6.0);
    glVertex3f(-5.5, 29.5, -6.0);
    glVertex3f(-4.0, 28.5, -6.0);
    glVertex3f(-4.0, 29.5, -6.0);
    glVertex3f(-2.5, 28.5, -6.0);
    glVertex3f(-2.5, 29.5, -6.0);
    glVertex3f(-1.0, 28.5, -6.0);
    glVertex3f(-1.0, 29.5, -6.0);
    glVertex3f(0.5, 28.5, -6.0);
    glVertex3f(0.5, 29.5, -6.0);
    glVertex3f(2.0, 28.5, -6.0);
    glVertex3f(2.0, 29.5, -6.0);
    glVertex3f(3.5, 28.5, -6.0);
    glVertex3f(3.5, 29.5, -6.0);
    glVertex3f(5.0, 28.5, -6.0);
    glVertex3f(5.0, 29.5, -6.0);

    glVertex3f(-5.5, 28.5, -18.0);
    glVertex3f(-5.5, 29.5, -18.0);
    glVertex3f(-4.0, 28.5, -18.0);
    glVertex3f(-4.0, 29.5, -18.0);
    glVertex3f(-2.5, 28.5, -18.0);
    glVertex3f(-2.5, 29.5, -18.0);
    glVertex3f(-1.0, 28.5, -18.0);
    glVertex3f(-1.0, 29.5, -18.0);
    glVertex3f(0.5, 28.5, -18.0);
    glVertex3f(0.5, 29.5, -18.0);
    glVertex3f(2.0, 28.5, -18.0);
    glVertex3f(2.0, 29.5, -18.0);
    glVertex3f(3.5, 28.5, -18.0);
    glVertex3f(3.5, 29.5, -18.0);
    glVertex3f(5.0, 28.5, -18.0);
    glVertex3f(5.0, 29.5, -18.0);
    glEnd();

    //atas 2
    glBegin(GL_QUADS);
    glColor3ub(193, 167, 140);
    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-8.0, 28.0, -18.0);
    glVertex3f(8.0, 28.0, -18.0);
    glVertex3f(8.0, 28.0, -6.0);

    glVertex3f(-8.0, 30.0, -6.0);
    glVertex3f(-8.0, 30.0, -18.0);
    glVertex3f(8.0, 30.0, -18.0);
    glVertex3f(8.0, 30.0, -6.0);

    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-8.0, 28.0, -18.0);
    glVertex3f(-8.0, 30.0, -18.0);
    glVertex3f(-8.0, 30.0, -6.0);

    glVertex3f(8.0, 28.0, -6.0);
    glVertex3f(8.0, 28.0, -18.0);
    glVertex3f(8.0, 30.0, -18.0);
    glVertex3f(8.0, 30.0, -6.0);

    glVertex3f(8.0, 28.0, -6.0);
    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-8.0, 30.0, -6.0);
    glVertex3f(8.0, 30.0, -6.0);

    glVertex3f(8.0, 28.0, -18.0);
    glVertex3f(-8.0, 28.0, -18.0);
    glVertex3f(-8.0, 30.0, -18.0);
    glVertex3f(8.0, 30.0, -18.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(193, 167, 140);
    glVertex3f(-6.0, 30.0, -6.0);
    glVertex3f(6.0, 30.0, -6.0);
    glVertex3f(0.0, 32.0, -6.0);

    glVertex3f(-6.0, 30.0, -18.0);
    glVertex3f(6.0, 30.0, -18.0);
    glVertex3f(0.0, 32.0, -18.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-6.0, 30.0, -6.0);
    glVertex3f(0.0, 32.0, -6.0);
    glVertex3f(0.0, 32.0, -18.0);
    glVertex3f(-6.0, 30.0, -18.0);

    glVertex3f(6.0, 30.0, -6.0);
    glVertex3f(0.0, 32.0, -6.0);
    glVertex3f(0.0, 32.0, -18.0);
    glVertex3f(6.0, 30.0, -18.0);

    //kiri kecil
    glVertex3f(8.0, 28.0, -6.0);
    glVertex3f(16.0, 28.0, -6.0);
    glVertex3f(16.0, 28.0, -18.0);
    glVertex3f(8.0, 28.0, -18.0);

    glVertex3f(8.0, 29.0, -6.0);
    glVertex3f(16.0, 29.0, -6.0);
    glVertex3f(16.0, 29.0, -18.0);
    glVertex3f(8.0, 29.0, -18.0);

    glVertex3f(8.0, 28.0, -6.0);
    glVertex3f(16.0, 28.0, -6.0);
    glVertex3f(16.0, 29.0, -6.0);
    glVertex3f(8.0, 29.0, -6.0);

    glVertex3f(8.0, 28.0, -18.0);
    glVertex3f(16.0, 28.0, -18.0);
    glVertex3f(16.0, 29.0, -18.0);
    glVertex3f(8.0, 29.0, -18.0);

    glVertex3f(8.0, 28.0, -6.0);
    glVertex3f(8.0, 28.0, -18.0);
    glVertex3f(8.0, 29.0, -18.0);
    glVertex3f(8.0, 29.0, -6.0);

    glVertex3f(16.0, 28.0, -6.0);
    glVertex3f(16.0, 28.0, -18.0);
    glVertex3f(16.0, 29.0, -18.0);
    glVertex3f(16.0, 29.0, -6.0);

    //kanan kecil
    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-16.0, 28.0, -6.0);
    glVertex3f(-16.0, 28.0, -18.0);
    glVertex3f(-8.0, 28.0, -18.0);

    glVertex3f(-8.0, 29.0, -6.0);
    glVertex3f(-16.0, 29.0, -6.0);
    glVertex3f(-16.0, 29.0, -18.0);
    glVertex3f(-8.0, 29.0, -18.0);

    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-16.0, 28.0, -6.0);
    glVertex3f(-16.0, 29.0, -6.0);
    glVertex3f(-8.0, 29.0, -6.0);

    glVertex3f(-8.0, 28.0, -18.0);
    glVertex3f(-16.0, 28.0, -18.0);
    glVertex3f(-16.0, 29.0, -18.0);
    glVertex3f(-8.0, 29.0, -18.0);

    glVertex3f(-8.0, 28.0, -6.0);
    glVertex3f(-8.0, 28.0, -18.0);
    glVertex3f(-8.0, 29.0, -18.0);
    glVertex3f(-8.0, 29.0, -6.0);

    glVertex3f(-16.0, 28.0, -6.0);
    glVertex3f(-16.0, 28.0, -18.0);
    glVertex3f(-16.0, 29.0, -18.0);
    glVertex3f(-16.0, 29.0, -6.0);
    glEnd();

     //atas kanan
    glBegin(GL_QUADS);
    glVertex3f(-12.0, 24.0, 6.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-27.0, 24.0, 20.0);
    glVertex3f(-15.0, 24.0, 22.0);

    glVertex3f(-12.0, 26.0, 6.0);
    glVertex3f(-24.0, 26.0, 4.0);
    glVertex3f(-27.0, 26.0, 20.0);
    glVertex3f(-15.0, 26.0, 22.0);

    glVertex3f(-12.0, 24.0, 6.0);
    glVertex3f(-12.0, 26.0, 6.0);
    glVertex3f(-15.0, 26.0, 22.0);
    glVertex3f(-15.0, 24.0, 22.0);

    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-24.0, 26.0, 4.0);
    glVertex3f(-27.0, 26.0, 20.0);
    glVertex3f(-27.0, 24.0, 20.0);

    glVertex3f(-27.0, 24.0, 20.0);
    glVertex3f(-27.0, 26.0, 20.0);
    glVertex3f(-15.0, 26.0, 22.0);
    glVertex3f(-15.0, 24.0, 22.0);

    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-24.0, 26.0, 4.0);
    glVertex3f(-12.0, 26.0, 6.0);
    glVertex3f(-12.0, 24.0, 6.0);
    //atas kanan 2
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-20.0, 26.0, 5.0);
    glVertex3f(-16.0, 26.0, 5.5);
    glVertex3f(-18.0, 26.0, 18.0);
    glVertex3f(-22.5, 26.0, 17.0);

    glVertex3f(-20.0, 28.0, 5.0);
    glVertex3f(-16.0, 28.0, 5.5);
    glVertex3f(-18.0, 28.0, 18.0);
    glVertex3f(-22.5, 28.0, 17.0);

    glVertex3f(-20.0, 26.0, 5.0);
    glVertex3f(-16.0, 26.0, 5.5);
    glVertex3f(-16.0, 28.0, 5.5);
    glVertex3f(-20.0, 28.0, 5.0);

    glVertex3f(-22.5, 26.0, 17.0);
    glVertex3f(-18.0, 26.0, 18.0);
    glVertex3f(-18.0, 28.0, 18.0);
    glVertex3f(-22.5, 28.0, 17.0);

    glVertex3f(-22.5, 26.0, 17.0);
    glVertex3f(-20.0, 26.0, 5.0);
    glVertex3f(-20.0, 28.0, 5.0);
    glVertex3f(-22.5, 28.0, 17.0);

    glVertex3f(-16.0, 26.0, 5.5);
    glVertex3f(-18.0, 26.0, 18.0);
    glVertex3f(-18.0, 28.0, 18.0);
    glVertex3f(-16.0, 28.0, 5.5);
    //atas kanan 3
    glColor3ub(193, 167, 140);
    glVertex3f(-16.0, 28.0, 5.5);
    glVertex3f(-18.0, 28.0, 18.0);
    glVertex3f(-20.0, 30.0, 16.0);
    glVertex3f(-18.0, 30.0, 6.6);

    glVertex3f(-20.0, 28.0, 5.0);
    glVertex3f(-22.5, 28.0, 17.0);
    glVertex3f(-20.0, 30.0, 16.0);
    glVertex3f(-18.0, 30.0, 6.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-22.5, 28.0, 17.0);
    glVertex3f(-20.0, 30.0, 16.0);
    glVertex3f(-18.0, 28.0, 18.0);

    glVertex3f(-16.0, 28.0, 5.5);
    glVertex3f(-18.0, 30.0, 6.6);
    glVertex3f(-20.0, 28.0, 5.0);
    glEnd();

    //atas kiri
    glBegin(GL_QUADS);
    glVertex3f(12.0, 24.0, 6.0);
    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(27.0, 24.0, 20.0);
    glVertex3f(15.0, 24.0, 22.0);

    glVertex3f(12.0, 26.0, 6.0);
    glVertex3f(24.0, 26.0, 4.0);
    glVertex3f(27.0, 26.0, 20.0);
    glVertex3f(15.0, 26.0, 22.0);

    glVertex3f(12.0, 24.0, 6.0);
    glVertex3f(12.0, 26.0, 6.0);
    glVertex3f(15.0, 26.0, 22.0);
    glVertex3f(15.0, 24.0, 22.0);

    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(24.0, 26.0, 4.0);
    glVertex3f(27.0, 26.0, 20.0);
    glVertex3f(27.0, 24.0, 20.0);

    glVertex3f(27.0, 24.0, 20.0);
    glVertex3f(27.0, 26.0, 20.0);
    glVertex3f(15.0, 26.0, 22.0);
    glVertex3f(15.0, 24.0, 22.0);

    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(24.0, 26.0, 4.0);
    glVertex3f(12.0, 26.0, 6.0);
    glVertex3f(12.0, 24.0, 6.0);
    //atas kiri 2
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0, 26.0, 5.0);
    glVertex3f(16.0, 26.0, 5.5);
    glVertex3f(18.0, 26.0, 18.0);
    glVertex3f(22.5, 26.0, 17.0);

    glVertex3f(20.0, 28.0, 5.0);
    glVertex3f(16.0, 28.0, 5.5);
    glVertex3f(18.0, 28.0, 18.0);
    glVertex3f(22.5, 28.0, 17.0);

    glVertex3f(20.0, 26.0, 5.0);
    glVertex3f(16.0, 26.0, 5.5);
    glVertex3f(16.0, 28.0, 5.5);
    glVertex3f(20.0, 28.0, 5.0);

    glVertex3f(22.5, 26.0, 17.0);
    glVertex3f(18.0, 26.0, 18.0);
    glVertex3f(18.0, 28.0, 18.0);
    glVertex3f(22.5, 28.0, 17.0);

    glVertex3f(22.5, 26.0, 17.0);
    glVertex3f(20.0, 26.0, 5.0);
    glVertex3f(20.0, 28.0, 5.0);
    glVertex3f(22.5, 28.0, 17.0);

    glVertex3f(16.0, 26.0, 5.5);
    glVertex3f(18.0, 26.0, 18.0);
    glVertex3f(18.0, 28.0, 18.0);
    glVertex3f(16.0, 28.0, 5.5);
    //atas kiri 3
    glColor3ub(193, 167, 140);
    glVertex3f(16.0, 28.0, 5.5);
    glVertex3f(18.0, 28.0, 18.0);
    glVertex3f(20.0, 30.0, 16.0);
    glVertex3f(18.0, 30.0, 6.6);

    glVertex3f(20.0, 28.0, 5.0);
    glVertex3f(22.5, 28.0, 17.0);
    glVertex3f(20.0, 30.0, 16.0);
    glVertex3f(18.0, 30.0, 6.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(22.5, 28.0, 17.0);
    glVertex3f(20.0, 30.0, 16.0);
    glVertex3f(18.0, 28.0, 18.0);

    glVertex3f(16.0, 28.0, 5.5);
    glVertex3f(18.0, 30.0, 6.6);
    glVertex3f(20.0, 28.0, 5.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.4f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    //transparan
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
