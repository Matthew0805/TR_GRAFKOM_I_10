#include <windows.h>
#include <stdlib.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int x, int y);
void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);

int a = 0;
bool waktu1 = true;
bool waktu2 = false;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void waktu(int k)
{
    if (waktu1) {
        waktu1 = false;
        waktu2 = true;
    }
    else if (waktu2) {
        waktu1 = true;
        waktu2 = false;
    }
    glutTimerFunc(600, waktu, 10);
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR_GRAFKOM_Palazzo Versace Dubai");
    waktu(0);
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
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(3.0f);
}


void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    if (waktu1) {
        glClearColor(0.6, 0.8, 0.9, 0.0);
    }
    else {
        glClearColor(0.7, 0.8, 0.9, 0.0);
    }

    glBegin(GL_POLYGON);
    glColor3ub(57, 59, 54);
    glVertex3f(2.7, 20.0, -5.5);
    glVertex3f(-2.7, 20.0, -5.5);
    glVertex3f(-2.65, 20.4, -5.5);
    glVertex3f(-2.55, 20.8, -5.5);
    glVertex3f(-2.4, 21.2, -5.5);
    glVertex3f(-2.2, 21.57, -5.5);
    glVertex3f(-1.9, 22.0, -5.5);
    glVertex3f(-1.5, 22.4, -5.5);
    glVertex3f(-1.2, 22.6, -5.5);
    glVertex3f(-0.8, 22.8, -5.5);
    glVertex3f(-0.6, 22.9, -5.5);
    glVertex3f(-0.2, 23.0, -5.5);
    glVertex3f(0.0, 23.0, -5.5);
    glVertex3f(0.2, 23.0, -5.5);
    glVertex3f(0.6, 22.9, -5.5);
    glVertex3f(0.8, 22.8, -5.5);
    glVertex3f(1.2, 22.6, -5.5);
    glVertex3f(1.5, 22.4, -5.5);
    glVertex3f(1.9, 22.0, -5.5);
    glVertex3f(2.2, 21.57, -5.5);
    glVertex3f(2.4, 21.2, -5.5);
    glVertex3f(2.55, 20.8, -5.5);
    glVertex3f(2.65, 20.4, -5.5);
    glVertex3f(2.7, 20.0, -5.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(57, 59, 54);
    glVertex3f(-2.7, 13.0, -5.4);
    glVertex3f(2.7, 13.0, -5.4);
    glVertex3f(-2.7, 16.0, -5.4);
    glVertex3f(2.7, 16.0, -5.4);
    glVertex3f(-2.7, 19.5, -5.4);
    glVertex3f(2.7, 19.5, -5.4);
    glVertex3f(-2.7, 20.0, -5.4);
    glVertex3f(2.7, 20.0, -5.4);
    glVertex3f(-2.7, 13.0, -18.5);
    glVertex3f(2.7, 13.0, -18.5);
    glVertex3f(-2.7, 16.0, -18.5);
    glVertex3f(2.7, 16.0, -18.5);
    glVertex3f(-2.7, 19.5, -18.5);
    glVertex3f(2.7, 19.5, -18.5);
    glVertex3f(-2.7, 20.0, -18.5);
    glVertex3f(2.7, 20.0, -18.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(57, 59, 54);
    glVertex3f(2.7, 20.0, -18.5);
    glVertex3f(-2.7, 20.0, -18.5);
    glVertex3f(-2.65, 20.4, -18.5);
    glVertex3f(-2.55, 20.8, -18.5);
    glVertex3f(-2.4, 21.2, -18.5);
    glVertex3f(-2.2, 21.57, -18.5);
    glVertex3f(-1.9, 22.0, -18.5);
    glVertex3f(-1.5, 22.4, -18.5);
    glVertex3f(-1.2, 22.6, -18.5);
    glVertex3f(-0.8, 22.8, -18.5);
    glVertex3f(-0.6, 22.9, -18.5);
    glVertex3f(-0.2, 23.0, -18.5);
    glVertex3f(0.0, 23.0, -18.5);
    glVertex3f(0.2, 23.0, -18.5);
    glVertex3f(0.6, 22.9, -18.5);
    glVertex3f(0.8, 22.8, -18.5);
    glVertex3f(1.2, 22.6, -18.5);
    glVertex3f(1.5, 22.4, -18.5);
    glVertex3f(1.9, 22.0, -18.5);
    glVertex3f(2.2, 21.57, -18.5);
    glVertex3f(2.4, 21.2, -18.5);
    glVertex3f(2.55, 20.8, -18.5);
    glVertex3f(2.65, 20.4, -18.5);
    glVertex3f(2.7, 20.0, -18.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 167, 140);
    glVertex3f(-2.7, 19.0, -5.6);
    glVertex3f(-2.7, 23.0, -5.6);
    glVertex3f(2.7, 23.0, -5.6);
    glVertex3f(2.7, 19.0, -5.6);

    glVertex3f(-2.7, 19.0, -18.25);
    glVertex3f(-2.7, 23.0, -18.25);
    glVertex3f(2.7, 23.0, -18.25);
    glVertex3f(2.7, 19.0, -18.25);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(193, 167, 140);
    glVertex3f(-10.0, 7.0, -5.5);
    glVertex3f(10.0, 7.0, -5.5);
    glVertex3f(-10.0, 4.0, -5.5);
    glVertex3f(10.0, 4.0, -5.5);
    glVertex3f(-9.0, 0.0, -5.5);
    glVertex3f(-9.0, 9.0, -5.5);
    glVertex3f(-8.0, 4.0, -5.5);
    glVertex3f(-8.0, 9.0, -5.5);
    glVertex3f(-7.0, 0.0, -5.5);
    glVertex3f(-7.0, 9.0, -5.5);
    glVertex3f(-6.0, 4.0, -5.5);
    glVertex3f(-6.0, 9.0, -5.5);
    glVertex3f(-5.0, 4.0, -5.5);
    glVertex3f(-5.0, 9.0, -5.5);
    glVertex3f(-4.0, 4.0, -5.5);
    glVertex3f(-4.0, 9.0, -5.5);
    glVertex3f(-3.0, 4.0, -5.5);
    glVertex3f(-3.0, 9.0, -5.5);
    glVertex3f(-2.0, 4.0, -5.5);
    glVertex3f(-2.0, 9.0, -5.5);
    glVertex3f(-1.0, 4.0, -5.5);
    glVertex3f(-1.0, 9.0, -5.5);
    glVertex3f(0.0, 4.0, -5.5);
    glVertex3f(0.0, 9.0, -5.5);
    glVertex3f(1.0, 4.0, -5.5);
    glVertex3f(1.0, 9.0, -5.5);
    glVertex3f(2.0, 4.0, -5.5);
    glVertex3f(2.0, 9.0, -5.5);
    glVertex3f(3.0, 4.0, -5.5);
    glVertex3f(3.0, 9.0, -5.5);
    glVertex3f(4.0, 4.0, -5.5);
    glVertex3f(4.0, 9.0, -5.5);
    glVertex3f(5.0, 4.0, -5.5);
    glVertex3f(5.0, 9.0, -5.5);
    glVertex3f(6.0, 4.0, -5.5);
    glVertex3f(6.0, 9.0, -5.5);
    glVertex3f(7.0, 0.0, -5.5);
    glVertex3f(7.0, 9.0, -5.5);
    glVertex3f(8.0, 4.0, -5.5);
    glVertex3f(8.0, 9.0, -5.5);
    glVertex3f(9.0, 0.0, -5.5);
    glVertex3f(9.0, 9.0, -5.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, 19.0, -5.5);
    glVertex3f(10.0, 19.0, -5.5);
    glVertex3f(-10.0, 16.0, -5.5);
    glVertex3f(10.0, 16.0, -5.5);
    glVertex3f(-10.0, 13.0, -5.5);
    glVertex3f(10.0, 13.0, -5.5);
    glVertex3f(-10.0, 10.0, -5.5);
    glVertex3f(10.0, 10.0, -5.5);
    glVertex3f(-9.0, 9.0, -5.5);
    glVertex3f(-9.0, 19.0, -5.5);
    glVertex3f(-8.0, 9.0, -5.5);
    glVertex3f(-8.0, 19.0, -5.5);
    glVertex3f(-7.0, 9.0, -5.5);
    glVertex3f(-7.0, 19.0, -5.5);
    glVertex3f(-6.0, 9.0, -5.5);
    glVertex3f(-6.0, 19.0, -5.5);
    glVertex3f(-5.0, 9.0, -5.5);
    glVertex3f(-5.0, 19.0, -5.5);
    glVertex3f(-4.0, 9.0, -5.5);
    glVertex3f(-4.0, 19.0, -5.5);
    glVertex3f(-3.0, 9.0, -5.5);
    glVertex3f(-3.0, 19.0, -5.5);
    glVertex3f(3.0, 9.0, -5.5);
    glVertex3f(3.0, 19.0, -5.5);
    glVertex3f(4.0, 9.0, -5.5);
    glVertex3f(4.0, 19.0, -5.5);
    glVertex3f(5.0, 9.0, -5.5);
    glVertex3f(5.0, 19.0, -5.5);
    glVertex3f(6.0, 9.0, -5.5);
    glVertex3f(6.0, 19.0, -5.5);
    glVertex3f(7.0, 9.0, -5.5);
    glVertex3f(7.0, 19.0, -5.5);
    glVertex3f(8.0, 9.0, -5.5);
    glVertex3f(8.0, 19.0, -5.5);
    glVertex3f(9.0, 9.0, -5.5);
    glVertex3f(9.0, 19.0, -5.5);
    glVertex3f(3.0, 19.0, -5.5);
    glVertex3f(3.0, 23.0, -5.5);
    glVertex3f(5.0, 19.0, -5.5);
    glVertex3f(5.0, 23.0, -5.5);
    glVertex3f(7.0, 19.0, -5.5);
    glVertex3f(7.0, 23.0, -5.5);
    glVertex3f(9.0, 19.0, -5.5);
    glVertex3f(9.0, 23.0, -5.5);
    glVertex3f(-3.0, 19.0, -5.5);
    glVertex3f(-3.0, 23.0, -5.5);
    glVertex3f(-5.0, 19.0, -5.5);
    glVertex3f(-5.0, 23.0, -5.5);
    glVertex3f(-7.0, 19.0, -5.5);
    glVertex3f(-7.0, 23.0, -5.5);
    glVertex3f(-9.0, 19.0, -5.5);
    glVertex3f(-9.0, 23.0, -5.5);
    glEnd();

    //belakang
    glBegin(GL_LINES);
    glColor3ub(193, 167, 140);
    glVertex3f(-17.0, 7.0, -18.5);
    glVertex3f(17.0, 7.0, -18.5);
    glVertex3f(-17.0, 4.0, -18.5);
    glVertex3f(17.0, 4.0, -18.5);
    glVertex3f(-16.0, 4.0, -18.5);
    glVertex3f(-16.0, 9.0, -18.5);
    glVertex3f(-15.0, 0.0, -18.5);
    glVertex3f(-15.0, 9.0, -18.5);
    glVertex3f(-14.0, 4.0, -18.5);
    glVertex3f(-14.0, 9.0, -18.5);
    glVertex3f(-13.0, 0.0, -18.5);
    glVertex3f(-13.0, 9.0, -18.5);
    glVertex3f(-12.0, 4.0, -18.5);
    glVertex3f(-12.0, 9.0, -18.5);
    glVertex3f(-11.0, 0.0, -18.5);
    glVertex3f(-11.0, 9.0, -18.5);
    glVertex3f(-10.0, 4.0, -18.5);
    glVertex3f(-10.0, 9.0, -18.5);
    glVertex3f(-9.0, 0.0, -18.5);
    glVertex3f(-9.0, 9.0, -18.5);
    glVertex3f(-8.0, 4.0, -18.5);
    glVertex3f(-8.0, 9.0, -18.5);
    glVertex3f(-7.0, 0.0, -18.5);
    glVertex3f(-7.0, 9.0, -18.5);
    glVertex3f(-6.0, 4.0, -18.5);
    glVertex3f(-6.0, 9.0, -18.5);
    glVertex3f(-5.0, 4.0, -18.5);
    glVertex3f(-5.0, 9.0, -18.5);
    glVertex3f(-4.0, 4.0, -18.5);
    glVertex3f(-4.0, 9.0, -18.5);
    glVertex3f(-3.0, 4.0, -18.5);
    glVertex3f(-3.0, 9.0, -18.5);
    glVertex3f(-2.0, 4.0, -18.5);
    glVertex3f(-2.0, 9.0, -18.5);
    glVertex3f(-1.0, 4.0, -18.5);
    glVertex3f(-1.0, 9.0, -18.5);
    glVertex3f(0.0, 4.0, -18.5);
    glVertex3f(0.0, 9.0, -18.5);
    glVertex3f(1.0, 4.0, -18.5);
    glVertex3f(1.0, 9.0, -18.5);
    glVertex3f(2.0, 4.0, -18.5);
    glVertex3f(2.0, 9.0, -18.5);
    glVertex3f(3.0, 4.0, -18.5);
    glVertex3f(3.0, 9.0, -18.5);
    glVertex3f(4.0, 4.0, -18.5);
    glVertex3f(4.0, 9.0, -18.5);
    glVertex3f(5.0, 4.0, -18.5);
    glVertex3f(5.0, 9.0, -18.5);
    glVertex3f(6.0, 4.0, -18.5);
    glVertex3f(6.0, 9.0, -18.5);
    glVertex3f(7.0, 0.0, -18.5);
    glVertex3f(7.0, 9.0, -18.5);
    glVertex3f(8.0, 4.0, -18.5);
    glVertex3f(8.0, 9.0, -18.5);
    glVertex3f(9.0, 0.0, -18.5);
    glVertex3f(9.0, 9.0, -18.5);
    glVertex3f(16.0, 4.0, -18.5);
    glVertex3f(16.0, 9.0, -18.5);
    glVertex3f(15.0, 0.0, -18.5);
    glVertex3f(15.0, 9.0, -18.5);
    glVertex3f(14.0, 4.0, -18.5);
    glVertex3f(14.0, 9.0, -18.5);
    glVertex3f(13.0, 0.0, -18.5);
    glVertex3f(13.0, 9.0, -18.5);
    glVertex3f(12.0, 4.0, -18.5);
    glVertex3f(12.0, 9.0, -18.5);
    glVertex3f(11.0, 0.0, -18.5);
    glVertex3f(11.0, 9.0, -18.5);
    glVertex3f(10.0, 4.0, -18.5);
    glVertex3f(10.0, 9.0, -18.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-17.0, 19.0, -18.5);
    glVertex3f(17.0, 19.0, -18.5);
    glVertex3f(-17.0, 16.0, -18.5);
    glVertex3f(17.0, 16.0, -18.5);
    glVertex3f(-17.0, 13.0, -18.5);
    glVertex3f(17.0, 13.0, -18.5);
    glVertex3f(-17.0, 10.0, -18.);
    glVertex3f(17.0, 10.0, -18.5);
    glVertex3f(-17.0, 7.0, -18.5);
    glVertex3f(17.0, 7.0, -18.5);
    glVertex3f(-17.0, 4.0, -18.5);
    glVertex3f(17.0, 4.0, -18.5);
    glVertex3f(-16.0, 9.0, -18.5);
    glVertex3f(-16.0, 19.0, -18.5);
    glVertex3f(-15.0, 9.0, -18.5);
    glVertex3f(-15.0, 19.0, -18.5);
    glVertex3f(-14.0, 9.0, -18.5);
    glVertex3f(-14.0, 19.0, -18.5);
    glVertex3f(-13.0, 9.0, -18.5);
    glVertex3f(-13.0, 19.0, -18.5);
    glVertex3f(-12.0, 9.0, -18.5);
    glVertex3f(-12.0, 19.0, -18.5);
    glVertex3f(-11.0, 9.0, -18.5);
    glVertex3f(-11.0, 19.0, -18.5);
    glVertex3f(-10.0, 9.0, -18.5);
    glVertex3f(-10.0, 19.0, -18.5);
    glVertex3f(-9.0, 9.0, -18.5);
    glVertex3f(-9.0, 19.0, -18.5);
    glVertex3f(-8.0, 9.0, -18.5);
    glVertex3f(-8.0, 19.0, -18.5);
    glVertex3f(-7.0, 9.0, -18.5);
    glVertex3f(-7.0, 19.0, -18.5);
    glVertex3f(-6.0, 9.0, -18.5);
    glVertex3f(-6.0, 19.0, -18.5);
    glVertex3f(-5.0, 9.0, -18.5);
    glVertex3f(-5.0, 19.0, -18.5);
    glVertex3f(-4.0, 9.0, -18.5);
    glVertex3f(-4.0, 19.0, -18.5);
    glVertex3f(-3.0, 9.0, -18.5);
    glVertex3f(-3.0, 19.0, -18.5);
    glVertex3f(3.0, 9.0, -18.5);
    glVertex3f(3.0, 19.0, -18.5);
    glVertex3f(4.0, 9.0, -18.5);
    glVertex3f(4.0, 19.0, -18.5);
    glVertex3f(5.0, 9.0, -18.5);
    glVertex3f(5.0, 19.0, -18.5);
    glVertex3f(6.0, 9.0, -18.5);
    glVertex3f(6.0, 19.0, -18.5);
    glVertex3f(7.0, 9.0, -18.5);
    glVertex3f(7.0, 19.0, -18.5);
    glVertex3f(8.0, 9.0, -18.5);
    glVertex3f(8.0, 19.0, -18.5);
    glVertex3f(9.0, 9.0, -18.5);
    glVertex3f(9.0, 19.0, -18.5);
    glVertex3f(16.0, 9.0, -18.5);
    glVertex3f(16.0, 19.0, -18.5);
    glVertex3f(15.0, 9.0, -18.5);
    glVertex3f(15.0, 19.0, -18.5);
    glVertex3f(14.0, 9.0, -18.5);
    glVertex3f(14.0, 19.0, -18.5);
    glVertex3f(13.0, 9.0, -18.5);
    glVertex3f(13.0, 19.0, -18.5);
    glVertex3f(12.0, 9.0, -18.5);
    glVertex3f(12.0, 19.0, -18.5);
    glVertex3f(11.0, 9.0, -18.5);
    glVertex3f(11.0, 19.0, -18.5);
    glVertex3f(10.0, 9.0, -18.5);
    glVertex3f(10.0, 19.0, -18.5);
    glVertex3f(3.0, 19.0, -18.5);
    glVertex3f(3.0, 23.0, -18.5);
    glVertex3f(5.0, 19.0, -18.5);
    glVertex3f(5.0, 23.0, -18.5);
    glVertex3f(7.0, 19.0, -18.5);
    glVertex3f(7.0, 23.0, -18.5);
    glVertex3f(9.0, 19.0, -18.5);
    glVertex3f(9.0, 23.0, -18.5);
    glVertex3f(11.0, 19.0, -18.5);
    glVertex3f(11.0, 23.0, -18.5);
    glVertex3f(13.0, 19.0, -18.5);
    glVertex3f(13.0, 23.0, -18.5);
    glVertex3f(15.0, 19.0, -18.5);
    glVertex3f(15.0, 23.0, -18.5);
    glVertex3f(-3.0, 19.0, -18.5);
    glVertex3f(-3.0, 23.0, -18.5);
    glVertex3f(-5.0, 19.0, -18.5);
    glVertex3f(-5.0, 23.0, -18.5);
    glVertex3f(-7.0, 19.0, -18.5);
    glVertex3f(-7.0, 23.0, -18.5);
    glVertex3f(-9.0, 19.0, -18.5);
    glVertex3f(-9.0, 23.0, -18.5);
    glVertex3f(-11.0, 19.0, -18.5);
    glVertex3f(-11.0, 23.0, -18.5);
    glVertex3f(-13.0, 19.0, -18.5);
    glVertex3f(-13.0, 23.0, -18.5);
    glVertex3f(-15.0, 19.0, -18.5);
    glVertex3f(-15.0, 23.0, -18.5);
    glEnd();

    //samping kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.5, 10.0, -17.0);
    glVertex3f(-18.5, 10.0, -10.0);
    glVertex3f(-18.5, 13.0, -17.0);
    glVertex3f(-18.5, 13.0, -10.0);
    glVertex3f(-18.5, 16.0, -17.0);
    glVertex3f(-18.5, 16.0, -10.0);
    glVertex3f(-18.5, 19.0, -17.0);
    glVertex3f(-18.5, 19.0, -10.0);
    glVertex3f(-18.5, 10.0, -16.0);
    glVertex3f(-18.5, 19.0, -16.0);
    glVertex3f(-18.5, 10.0, -15.0);
    glVertex3f(-18.5, 23.0, -15.0);
    glVertex3f(-18.5, 10.0, -14.0);
    glVertex3f(-18.5, 19.0, -14.0);
    glVertex3f(-18.5, 10.0, -13.0);
    glVertex3f(-18.5, 23.0, -13.0);
    glVertex3f(-18.5, 10.0, -12.0);
    glVertex3f(-18.5, 19.0, -12.0);
    glVertex3f(-18.5, 10.0, -11.0);
    glVertex3f(-18.5, 23.0, -11.0);
    glColor3ub(193,167, 140);
    glVertex3f(-18.5, 4.0, -17.0);
    glVertex3f(-18.5, 4.0, -10.0);
    glVertex3f(-18.5, 7.0, -17.0);
    glVertex3f(-18.5, 7.0, -10.0);
    glVertex3f(-18.5, 4.0, -16.0);
    glVertex3f(-18.5, 10.0, -16.0);
    glVertex3f(-18.5, 0.0, -15.0);
    glVertex3f(-18.5, 10.0, -15.0);
    glVertex3f(-18.5, 4.0, -14.0);
    glVertex3f(-18.5, 10.0, -14.0);
    glVertex3f(-18.5, 0.0, -13.0);
    glVertex3f(-18.5, 10.0, -13.0);
    glVertex3f(-18.5, 4.0, -12.0);
    glVertex3f(-18.5, 10.0, -12.0);
    glVertex3f(-18.5, 0.0, -11.0);
    glVertex3f(-18.5, 10.0, -11.0);
    glEnd();

    //samping kanan
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.5, 10.0, -17.0);
    glVertex3f(18.5, 10.0, -10.0);
    glVertex3f(18.5, 13.0, -17.0);
    glVertex3f(18.5, 13.0, -10.0);
    glVertex3f(18.5, 16.0, -17.0);
    glVertex3f(18.5, 16.0, -10.0);
    glVertex3f(18.5, 19.0, -17.0);
    glVertex3f(18.5, 19.0, -10.0);
    glVertex3f(18.5, 10.0, -16.0);
    glVertex3f(18.5, 19.0, -16.0);
    glVertex3f(18.5, 10.0, -15.0);
    glVertex3f(18.5, 23.0, -15.0);
    glVertex3f(18.5, 10.0, -14.0);
    glVertex3f(18.5, 19.0, -14.0);
    glVertex3f(18.5, 10.0, -13.0);
    glVertex3f(18.5, 23.0, -13.0);
    glVertex3f(18.5, 10.0, -12.0);
    glVertex3f(18.5, 19.0, -12.0);
    glVertex3f(18.5, 10.0, -11.0);
    glVertex3f(18.5, 23.0, -11.0);
    glColor3ub(193, 167, 140);
    glVertex3f(18.5, 4.0, -17.0);
    glVertex3f(18.5, 4.0, -10.0);
    glVertex3f(18.5, 7.0, -17.0);
    glVertex3f(18.5, 7.0, -10.0);
    glVertex3f(18.5, 4.0, -16.0);
    glVertex3f(18.5, 10.0, -16.0);
    glVertex3f(18.5, 0.0, -15.0);
    glVertex3f(18.5, 10.0, -15.0);
    glVertex3f(18.5, 4.0, -14.0);
    glVertex3f(18.5, 10.0, -14.0);
    glVertex3f(18.5, 0.0, -13.0);
    glVertex3f(18.5, 10.0, -13.0);
    glVertex3f(18.5, 4.0, -12.0);
    glVertex3f(18.5, 10.0, -12.0);
    glVertex3f(18.5, 0.0, -11.0);
    glVertex3f(18.5, 10.0, -11.0);
    glEnd();

    //belakang kanan
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 10.0, -10.0);
    glVertex3f(-37.0, 10.0, -12.0);
    glVertex3f(-18.0, 13.0, -10.0);
    glVertex3f(-37.0, 13.0, -12.0);
    glVertex3f(-18.0, 16.0, -10.0);
    glVertex3f(-37.0, 16.0, -12.0);
    glVertex3f(-18.0, 19.0, -10.0);
    glVertex3f(-37.0, 19.0, -12.0);

    glVertex3f(-18.0, 10.0, -9.75);
    glVertex3f(-18.0, 19.0, -9.75);
    glVertex3f(-20.0, 10.0, -10.0);
    glVertex3f(-20.0, 19.0, -10.0);
    glVertex3f(-22.0, 10.0, -10.25);
    glVertex3f(-22.0, 23.0, -10.25);
    glVertex3f(-24.0, 10.0, -10.5);
    glVertex3f(-24.0, 19.0, -10.5);
    glVertex3f(-26.0, 10.0, -10.75);
    glVertex3f(-26.0, 23.0, -10.75);
    glVertex3f(-28.0, 10.0, -11.0);
    glVertex3f(-28.0, 19.0, -11.0);
    glVertex3f(-30.0, 10.0, -11.25);
    glVertex3f(-30.0, 23.0, -11.25);
    glVertex3f(-32.0, 10.0, -11.5);
    glVertex3f(-32.0, 19.0, -11.5);
    glVertex3f(-34.0, 10.0, -11.75);
    glVertex3f(-34.0, 23.0, -11.75);
    glVertex3f(-36.0, 10.0, -12.0);
    glVertex3f(-36.0, 19.0, -12.0);
    glColor3ub(193, 167, 140);
    glVertex3f(-18.0, 4.0, -10.0);
    glVertex3f(-37.0, 4.0, -12.0);
    glVertex3f(-18.0, 7.0, -10.0);
    glVertex3f(-37.0, 7.0, -12.0);

    glVertex3f(-18.0, 0.0, -9.75);
    glVertex3f(-18.0, 10.0, -9.75);
    glVertex3f(-20.0, 4.0, -10.0);
    glVertex3f(-20.0, 10.0, -10.0);
    glVertex3f(-22.0, 0.0, -10.25);
    glVertex3f(-22.0, 10.0, -10.25);
    glVertex3f(-24.0, 4.0, -10.5);
    glVertex3f(-24.0, 10.0, -10.5);
    glVertex3f(-26.0, 0.0, -10.75);
    glVertex3f(-26.0, 10.0, -10.75);
    glVertex3f(-28.0, 4.0, -11.0);
    glVertex3f(-28.0, 10.0, -11.0);
    glVertex3f(-30.0, 0.0, -11.25);
    glVertex3f(-30.0, 10.0, -11.25);
    glVertex3f(-32.0, 4.0, -11.5);
    glVertex3f(-32.0, 10.0, -11.5);
    glVertex3f(-34.0, 0.0, -11.75);
    glVertex3f(-34.0, 10.0, -11.75);
    glVertex3f(-36.0, 4.0, -12.0);
    glVertex3f(-36.0, 10.0, -12.0);
    glEnd();

    //belakang kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, 10.0, -10.0);
    glVertex3f(37.0, 10.0, -12.0);
    glVertex3f(18.0, 13.0, -10.0);
    glVertex3f(37.0, 13.0, -12.0);
    glVertex3f(18.0, 16.0, -10.0);
    glVertex3f(37.0, 16.0, -12.0);
    glVertex3f(18.0, 19.0, -10.0);
    glVertex3f(37.0, 19.0, -12.0);

    glVertex3f(18.0, 10.0, -9.75);
    glVertex3f(18.0, 19.0, -9.75);
    glVertex3f(20.0, 10.0, -10.0);
    glVertex3f(20.0, 19.0, -10.0);
    glVertex3f(22.0, 10.0, -10.25);
    glVertex3f(22.0, 23.0, -10.25);
    glVertex3f(24.0, 10.0, -10.5);
    glVertex3f(24.0, 19.0, -10.5);
    glVertex3f(26.0, 10.0, -10.75);
    glVertex3f(26.0, 23.0, -10.75);
    glVertex3f(28.0, 10.0, -11.0);
    glVertex3f(28.0, 19.0, -11.0);
    glVertex3f(30.0, 10.0, -11.25);
    glVertex3f(30.0, 23.0, -11.25);
    glVertex3f(32.0, 10.0, -11.5);
    glVertex3f(32.0, 19.0, -11.5);
    glVertex3f(34.0, 10.0, -11.75);
    glVertex3f(34.0, 23.0, -11.75);
    glVertex3f(36.0, 10.0, -12.0);
    glVertex3f(36.0, 19.0, -12.0);
    glColor3ub(193, 167, 140);
    glVertex3f(18.0, 4.0, -10.0);
    glVertex3f(37.0, 4.0, -12.0);
    glVertex3f(18.0, 7.0, -10.0);
    glVertex3f(37.0, 7.0, -12.0);

    glVertex3f(18.0, 0.0, -9.75);
    glVertex3f(18.0, 10.0, -9.75);
    glVertex3f(20.0, 4.0, -10.0);
    glVertex3f(20.0, 10.0, -10.0);
    glVertex3f(22.0, 0.0, -10.25);
    glVertex3f(22.0, 10.0, -10.25);
    glVertex3f(24.0, 4.0, -10.5);
    glVertex3f(24.0, 10.0, -10.5);
    glVertex3f(26.0, 0.0, -10.75);
    glVertex3f(26.0, 10.0, -10.75);
    glVertex3f(28.0, 4.0, -11.0);
    glVertex3f(28.0, 10.0, -11.0);
    glVertex3f(30.0, 0.0, -11.25);
    glVertex3f(30.0, 10.0, -11.25);
    glVertex3f(32.0, 4.0, -11.5);
    glVertex3f(32.0, 10.0, -11.5);
    glVertex3f(34.0, 0.0, -11.75);
    glVertex3f(34.0, 10.0, -11.75);
    glVertex3f(36.0, 4.0, -12.0);
    glVertex3f(36.0, 10.0, -12.0);
    glEnd();

    //depan kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25.0, 10.0, 4.0);
    glVertex3f(39.0, 10.0, 0.75);
    glVertex3f(25.0, 13.0, 4.0);
    glVertex3f(39.0, 13.0, 0.75);
    glVertex3f(25.0, 16.0, 4.0);
    glVertex3f(39.0, 16.0, 0.75);
    glVertex3f(25.0, 19.0, 4.0);
    glVertex3f(39.0, 19.0, 0.75);

    glVertex3f(26.0, 10.0, 4.0);
    glVertex3f(26.0, 23.0, 4.0);
    glVertex3f(28.0, 10.0, 3.5);
    glVertex3f(28.0, 19.0, 3.5);
    glVertex3f(30.0, 10.0, 3.0);
    glVertex3f(30.0, 23.0, 3.0);
    glVertex3f(32.0, 10.0, 2.5);
    glVertex3f(32.0, 19.0, 2.5);
    glVertex3f(34.0, 10.0, 2.0);
    glVertex3f(34.0, 23.0, 2.0);
    glVertex3f(36.0, 10.0, 1.5);
    glVertex3f(36.0, 19.0, 1.5);
    glVertex3f(38.0, 10.0, 1.0);
    glVertex3f(38.0, 23.0, 1.0);
    glColor3ub(193, 167, 140);
    glVertex3f(25.0, 4.0, 4.0);
    glVertex3f(39.0, 4.0, 0.75);
    glVertex3f(25.0, 7.0, 4.0);
    glVertex3f(39.0, 7.0, 0.75);

    glVertex3f(26.0, 0.0, 4.0);
    glVertex3f(26.0, 10.0, 4.0);
    glVertex3f(28.0, 4.0, 3.5);
    glVertex3f(28.0, 10.0, 3.5);
    glVertex3f(30.0, 0.0, 3.0);
    glVertex3f(30.0, 10.0, 3.0);
    glVertex3f(32.0, 4.0, 2.5);
    glVertex3f(32.0, 10.0, 2.5);
    glVertex3f(34.0, 0.0, 2.0);
    glVertex3f(34.0, 10.0, 2.0);
    glVertex3f(36.0, 4.0, 1.5);
    glVertex3f(36.0, 10.0, 1.5);
    glVertex3f(38.0, 0.0, 1.0);
    glVertex3f(38.0, 10.0, 1.0);
    glEnd();

    //depan kanan
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25.0, 10.0, 4.0);
    glVertex3f(-39.0, 10.0, 0.75);
    glVertex3f(-25.0, 13.0, 4.0);
    glVertex3f(-39.0, 13.0, 0.75);
    glVertex3f(-25.0, 16.0, 4.0);
    glVertex3f(-39.0, 16.0, 0.75);
    glVertex3f(-25.0, 19.0, 4.0);
    glVertex3f(-39.0, 19.0, 0.75);

    glVertex3f(-26.0, 10.0, 4.0);
    glVertex3f(-26.0, 23.0, 4.0);
    glVertex3f(-28.0, 10.0, 3.5);
    glVertex3f(-28.0, 19.0, 3.5);
    glVertex3f(-30.0, 10.0, 3.0);
    glVertex3f(-30.0, 23.0, 3.0);
    glVertex3f(-32.0, 10.0, 2.5);
    glVertex3f(-32.0, 19.0, 2.5);
    glVertex3f(-34.0, 10.0, 2.0);
    glVertex3f(-34.0, 23.0, 2.0);
    glVertex3f(-36.0, 10.0, 1.5);
    glVertex3f(-36.0, 19.0, 1.5);
    glVertex3f(-38.0, 10.0, 1.0);
    glVertex3f(-38.0, 23.0, 1.0);
    glColor3ub(193, 167, 140);
    glVertex3f(-25.0, 4.0, 4.0);
    glVertex3f(-39.0, 4.0, 0.75);
    glVertex3f(-25.0, 7.0, 4.0);
    glVertex3f(-39.0, 7.0, 0.75);

    glVertex3f(-26.0, 0.0, 4.0);
    glVertex3f(-26.0, 10.0, 4.0);
    glVertex3f(-28.0, 4.0, 3.5);
    glVertex3f(-28.0, 10.0, 3.5);
    glVertex3f(-30.0, 0.0, 3.0);
    glVertex3f(-30.0, 10.0, 3.0);
    glVertex3f(-32.0, 4.0, 2.5);
    glVertex3f(-32.0, 10.0, 2.5);
    glVertex3f(-34.0, 0.0, 2.0);
    glVertex3f(-34.0, 10.0, 2.0);
    glVertex3f(-36.0, 4.0, 1.5);
    glVertex3f(-36.0, 10.0, 1.5);
    glVertex3f(-38.0, 0.0, 1.0);
    glVertex3f(-38.0, 10.0, 1.0);
    glEnd();

    //samping kanan
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-37.5, 10.0, -11.5);
    glVertex3f(-40.25, 10.0, -0.5);
    glVertex3f(-37.5, 13.0, -11.5);
    glVertex3f(-40.25, 13.0, -0.5);
    glVertex3f(-37.5, 16.0, -11.5);
    glVertex3f(-40.25, 16.0, -0.5);
    glVertex3f(-37.5, 19.0, -11.5);
    glVertex3f(-40.25, 19.0, -0.5);

    glVertex3f(-38.0, 10.0, -10.5);
    glVertex3f(-38.0, 23.0, -10.5);
    glVertex3f(-38.25, 10.0, -9.5);
    glVertex3f(-38.25, 19.0, -9.5);
    glVertex3f(-38.5, 10.0, -8.5);
    glVertex3f(-38.5, 23.0, -8.5);
    glVertex3f(-38.75, 10.0, -7.5);
    glVertex3f(-38.75, 19.0, -7.5);
    glVertex3f(-39.0, 10.0, -6.5);
    glVertex3f(-39.0, 23.0, -6.5);
    glVertex3f(-39.25, 10.0, -5.5);
    glVertex3f(-39.25, 19.0, -5.5);
    glVertex3f(-39.5, 10.0, -4.5);
    glVertex3f(-39.5, 23.0, -4.5);
    glVertex3f(-39.75, 10.0, -3.5);
    glVertex3f(-39.75, 19.0, -3.5);
    glVertex3f(-40.0, 10.0, -2.5);
    glVertex3f(-40.0, 23.0, -2.5);
    glVertex3f(-40.25, 10.0, -1.5);
    glVertex3f(-40.25, 19.0, -1.5);
    glColor3ub(193, 167, 140);
    glVertex3f(-37.5, 4.0, -11.5);
    glVertex3f(-40.25, 4.0, -0.5);
    glVertex3f(-37.5, 7.0, -11.5);
    glVertex3f(-40.25, 7.0, -0.5);

    glVertex3f(-38.0, 0.0, -10.5);
    glVertex3f(-38.0, 10.0, -10.5);
    glVertex3f(-38.25, 4.0, -9.5);
    glVertex3f(-38.25, 10.0, -9.5);
    glVertex3f(-38.5, 0.0, -8.5);
    glVertex3f(-38.5, 10.0, -8.5);
    glVertex3f(-38.75, 4.0, -7.5);
    glVertex3f(-38.75, 10.0, -7.5);
    glVertex3f(-39.0, 0.0, -6.5);
    glVertex3f(-39.0, 10.0, -6.5);
    glVertex3f(-39.25, 4.0, -5.5);
    glVertex3f(-39.25, 10.0, -5.5);
    glVertex3f(-39.5, 0.0, -4.5);
    glVertex3f(-39.5, 10.0, -4.5);
    glVertex3f(-39.75, 4.0, -3.5);
    glVertex3f(-39.75, 10.0, -3.5);
    glVertex3f(-40.0, 0.0, -2.5);
    glVertex3f(-40.0, 10.0, -2.5);
    glVertex3f(-40.25, 4.0, -1.5);
    glVertex3f(-40.25, 10.0, -1.5);
    glEnd();

    //samping kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(37.5, 10.0, -11.5);
    glVertex3f(40.25, 10.0, -0.5);
    glVertex3f(37.5, 13.0, -11.5);
    glVertex3f(40.25, 13.0, -0.5);
    glVertex3f(37.5, 16.0, -11.5);
    glVertex3f(40.25, 16.0, -0.5);
    glVertex3f(37.5, 19.0, -11.5);
    glVertex3f(40.25, 19.0, -0.5);

    glVertex3f(38.0, 10.0, -10.5);
    glVertex3f(38.0, 23.0, -10.5);
    glVertex3f(38.25, 10.0, -9.5);
    glVertex3f(38.25, 19.0, -9.5);
    glVertex3f(38.5, 10.0, -8.5);
    glVertex3f(38.5, 23.0, -8.5);
    glVertex3f(38.75, 10.0, -7.5);
    glVertex3f(38.75, 19.0, -7.5);
    glVertex3f(39.0, 10.0, -6.5);
    glVertex3f(39.0, 23.0, -6.5);
    glVertex3f(39.25, 10.0, -5.5);
    glVertex3f(39.25, 19.0, -5.5);
    glVertex3f(39.5, 10.0, -4.5);
    glVertex3f(39.5, 23.0, -4.5);
    glVertex3f(39.75, 10.0, -3.5);
    glVertex3f(39.75, 19.0, -3.5);
    glVertex3f(40.0, 10.0, -2.5);
    glVertex3f(40.0, 23.0, -2.5);
    glVertex3f(40.25, 10.0, -1.5);
    glVertex3f(40.25, 19.0, -1.5);
    glColor3ub(193, 167, 140);
    glVertex3f(37.5, 4.0, -11.5);
    glVertex3f(40.25, 4.0, -0.5);
    glVertex3f(37.5, 7.0, -11.5);
    glVertex3f(40.25, 7.0, -0.5);

    glVertex3f(38.0, 0.0, -10.5);
    glVertex3f(38.0, 10.0, -10.5);
    glVertex3f(38.25, 4.0, -9.5);
    glVertex3f(38.25, 10.0, -9.5);
    glVertex3f(38.5, 0.0, -8.5);
    glVertex3f(38.5, 10.0, -8.5);
    glVertex3f(38.75, 4.0, -7.5);
    glVertex3f(38.75, 10.0, -7.5);
    glVertex3f(39.0, 0.0, -6.5);
    glVertex3f(39.0, 10.0, -6.5);
    glVertex3f(39.25, 4.0, -5.5);
    glVertex3f(39.25, 10.0, -5.5);
    glVertex3f(39.5, 0.0, -4.5);
    glVertex3f(39.5, 10.0, -4.5);
    glVertex3f(39.75, 4.0, -3.5);
    glVertex3f(39.75, 10.0, -3.5);
    glVertex3f(40.0, 0.0, -2.5);
    glVertex3f(40.0, 10.0, -2.5);
    glVertex3f(40.25, 4.0, -1.5);
    glVertex3f(40.25, 10.0, -1.5);
    glEnd();

    //depan kanan
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(10.0, 10.0, -5.0);
    glVertex3f(16.0, 10.0, 27.975);
    glVertex3f(10.0, 13.0, -5.0);
    glVertex3f(16.0, 13.0, 27.975);
    glVertex3f(10.0, 16.0, -5.0);
    glVertex3f(16.0, 16.0, 27.975);
    glVertex3f(10.0, 19.0, -5.0);
    glVertex3f(16.0, 19.0, 27.975);

    glVertex3f(10.0, 10.0, -4.5);
    glVertex3f(10.0, 23.0, -4.5);
    glVertex3f(10.25, 10.0, -2.5);
    glVertex3f(10.25, 19.0, -2.5);
    glVertex3f(10.5, 10.0, -0.5);
    glVertex3f(10.5, 23.0, -0.5);
    glVertex3f(10.75, 10.0, 2.5);
    glVertex3f(10.75, 19.0, 2.5);
    glVertex3f(11.25, 10.0, 4.5);
    glVertex3f(11.25, 23.0, 4.5);
    glVertex3f(11.75, 10.0, 6.5);
    glVertex3f(11.75, 19.0, 6.5);
    glVertex3f(12.25, 10.0, 8.5);
    glVertex3f(12.25, 23.0, 8.5);
    glVertex3f(12.75, 10.0, 10.5);
    glVertex3f(12.75, 19.0, 10.5);
    glVertex3f(13.0, 10.0, 12.5);
    glVertex3f(13.0, 23.0, 12.5);
    glVertex3f(13.5, 10.0, 14.5);
    glVertex3f(13.5, 19.0, 14.5);
    glVertex3f(13.75, 10.0, 16.5);
    glVertex3f(13.75, 23.0, 16.5);
    glVertex3f(14.0, 10.0, 18.5);
    glVertex3f(14.0, 19.0, 18.5);
    glVertex3f(14.25, 10.0, 20.5);
    glVertex3f(14.25, 23.0, 20.5);
    glVertex3f(14.5, 10.0, 22.5);
    glVertex3f(14.5, 19.0, 22.5);
    glVertex3f(14.75, 10.0, 24.5);
    glVertex3f(14.75, 23.0, 24.5);
    glVertex3f(15.0, 10.0, 26.5);
    glVertex3f(15.0, 19.0, 26.5);
    glColor3ub(193, 167, 140);
    glVertex3f(10.0, 4.0, -5.0);
    glVertex3f(16.0, 4.0, 27.975);
    glVertex3f(10.0, 7.0, -5.0);
    glVertex3f(16.0, 7.0, 27.975);

    glVertex3f(10.0, 0.0, -4.5);
    glVertex3f(10.0, 10.0, -4.5);
    glVertex3f(10.25, 4.0, -2.5);
    glVertex3f(10.25, 10.0, -2.5);
    glVertex3f(10.5, 0.0, -0.5);
    glVertex3f(10.5, 10.0, -0.5);
    glVertex3f(10.75, 4.0, 2.5);
    glVertex3f(10.75, 10.0, 2.5);
    glVertex3f(11.25, 0.0, 4.5);
    glVertex3f(11.25, 10.0, 4.5);
    glVertex3f(11.75, 4.0, 6.5);
    glVertex3f(11.75, 10.0, 6.5);
    glVertex3f(12.25, 0.0, 8.5);
    glVertex3f(12.25, 10.0, 8.5);
    glVertex3f(12.75, 4.0, 10.5);
    glVertex3f(12.75, 10.0, 10.5);
    glVertex3f(13.0, 0.0, 12.5);
    glVertex3f(13.0, 10.0, 12.5);
    glVertex3f(13.5, 4.0, 14.5);
    glVertex3f(13.5, 10.0, 14.5);
    glVertex3f(13.75, 0.0, 16.5);
    glVertex3f(13.75, 10.0, 16.5);
    glVertex3f(14.0, 4.0, 18.5);
    glVertex3f(14.0, 10.0, 18.5);
    glVertex3f(14.25, 0.0, 20.5);
    glVertex3f(14.25, 10.0, 20.5);
    glVertex3f(14.5, 4.0, 22.5);
    glVertex3f(14.5, 10.0, 22.5);
    glVertex3f(14.75, 0.0, 24.5);
    glVertex3f(14.75, 10.0, 24.5);
    glVertex3f(15.0, 4.0, 26.5);
    glVertex3f(15.0, 10.0, 26.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(24.0, 10.0, -3.0);
    glVertex3f(28.5, 10.0, 25.0);
    glVertex3f(24.0, 13.0, -3.0);
    glVertex3f(28.5, 13.0, 25.0);
    glVertex3f(24.0, 16.0, -3.0);
    glVertex3f(28.5, 16.0, 25.0);
    glVertex3f(24.0, 19.0, -3.0);
    glVertex3f(28.5, 19.0, 25.0);

    glVertex3f(24.75, 10.0, 6.5);
    glVertex3f(24.75, 19.0, 6.5);
    glVertex3f(25.0, 10.0, 8.5);
    glVertex3f(25.0, 23.0, 8.5);
    glVertex3f(25.5, 10.0, 10.5);
    glVertex3f(25.5, 19.0, 10.5);
    glVertex3f(26.0, 10.0, 12.5);
    glVertex3f(26.0, 23.0, 12.5);
    glVertex3f(26.5, 10.0, 14.5);
    glVertex3f(26.5, 19.0, 14.5);
    glVertex3f(27.0, 10.0, 16.5);
    glVertex3f(27.0, 23.0, 16.5);
    glVertex3f(27.5, 10.0, 18.5);
    glVertex3f(27.5, 19.0, 18.5);
    glVertex3f(27.75, 10.0, 20.5);
    glVertex3f(27.75, 23.0, 20.5);
    glVertex3f(28.0, 10.0, 22.5);
    glVertex3f(28.0, 19.0, 22.5);
    glVertex3f(28.25, 10.0, 24.5);
    glVertex3f(28.25, 23.0, 24.5);
    glColor3ub(193, 167, 140);
    glVertex3f(24.0, 4.0, -3.0);
    glVertex3f(28.5, 4.0, 25.0);
    glVertex3f(24.0, 7.0, -3.0);
    glVertex3f(28.5, 7.0, 25.0);

    glVertex3f(24.75, 4.0, 6.5);
    glVertex3f(24.75, 10.0, 6.5);
    glVertex3f(25.0, 0.0, 8.5);
    glVertex3f(25.0, 10.0, 8.5);
    glVertex3f(25.5, 4.0, 10.5);
    glVertex3f(25.5, 10.0, 10.5);
    glVertex3f(26.0, 0.0, 12.5);
    glVertex3f(26.0, 10.0, 12.5);
    glVertex3f(26.5, 4.0, 14.5);
    glVertex3f(26.5, 10.0, 14.5);
    glVertex3f(27.0, 0.0, 16.5);
    glVertex3f(27.0, 10.0, 16.5);
    glVertex3f(27.5, 4.0, 18.5);
    glVertex3f(27.5, 10.0, 18.5);
    glVertex3f(27.75, 0.0, 20.5);
    glVertex3f(27.75, 10.0, 20.5);
    glVertex3f(28.0, 4.0, 22.5);
    glVertex3f(28.0, 10.0, 22.5);
    glVertex3f(28.25, 0.0, 24.5);
    glVertex3f(28.25, 10.0, 24.5);
    glEnd();

    //depan kiri
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, 10.0, -5.0);
    glVertex3f(-16.0, 10.0, 27.975);
    glVertex3f(-10.0, 13.0, -5.0);
    glVertex3f(-16.0, 13.0, 27.975);
    glVertex3f(-10.0, 16.0, -5.0);
    glVertex3f(-16.0, 16.0, 27.975);
    glVertex3f(-10.0, 19.0, -5.0);
    glVertex3f(-16.0, 19.0, 27.975);

    glVertex3f(-10.0, 10.0, -4.5);
    glVertex3f(-10.0, 23.0, -4.5);
    glVertex3f(-10.25, 10.0, -2.5);
    glVertex3f(-10.25, 19.0, -2.5);
    glVertex3f(-10.5, 10.0, -0.5);
    glVertex3f(-10.5, 23.0, -0.5);
    glVertex3f(-10.75, 10.0, 2.5);
    glVertex3f(-10.75, 19.0, 2.5);
    glVertex3f(-11.25, 10.0, 4.5);
    glVertex3f(-11.25, 23.0, 4.5);
    glVertex3f(-11.75, 10.0, 6.5);
    glVertex3f(-11.75, 19.0, 6.5);
    glVertex3f(-12.25, 10.0, 8.5);
    glVertex3f(-12.25, 23.0, 8.5);
    glVertex3f(-12.75, 10.0, 10.5);
    glVertex3f(-12.75, 19.0, 10.5);
    glVertex3f(-13.0, 10.0, 12.5);
    glVertex3f(-13.0, 23.0, 12.5);
    glVertex3f(-13.5, 10.0, 14.5);
    glVertex3f(-13.5, 19.0, 14.5);
    glVertex3f(-13.75, 10.0, 16.5);
    glVertex3f(-13.75, 23.0, 16.5);
    glVertex3f(-14.0, 10.0, 18.5);
    glVertex3f(-14.0, 19.0, 18.5);
    glVertex3f(-14.25, 10.0, 20.5);
    glVertex3f(-14.25, 23.0, 20.5);
    glVertex3f(-14.5, 10.0, 22.5);
    glVertex3f(-14.5, 19.0, 22.5);
    glVertex3f(-14.75, 10.0, 24.5);
    glVertex3f(-14.75, 23.0, 24.5);
    glVertex3f(-15.0, 10.0, 26.5);
    glVertex3f(-15.0, 19.0, 26.5);
    glColor3ub(193, 167, 140);
    glVertex3f(-10.0, 4.0, -5.0);
    glVertex3f(-16.0, 4.0, 27.975);
    glVertex3f(-10.0, 7.0, -5.0);
    glVertex3f(-16.0, 7.0, 27.975);

    glVertex3f(-10.0, 0.0, -4.5);
    glVertex3f(-10.0, 10.0, -4.5);
    glVertex3f(-10.25, 4.0, -2.5);
    glVertex3f(-10.25, 10.0, -2.5);
    glVertex3f(-10.5, 0.0, -0.5);
    glVertex3f(-10.5, 10.0, -0.5);
    glVertex3f(-10.75, 4.0, 2.5);
    glVertex3f(-10.75, 10.0, 2.5);
    glVertex3f(-11.25, 0.0, 4.5);
    glVertex3f(-11.25, 10.0, 4.5);
    glVertex3f(-11.75, 4.0, 6.5);
    glVertex3f(-11.75, 10.0, 6.5);
    glVertex3f(-12.25, 0.0, 8.5);
    glVertex3f(-12.25, 10.0, 8.5);
    glVertex3f(-12.75, 4.0, 10.5);
    glVertex3f(-12.75, 10.0, 10.5);
    glVertex3f(-13.0, 0.0, 12.5);
    glVertex3f(-13.0, 10.0, 12.5);
    glVertex3f(-13.5, 4.0, 14.5);
    glVertex3f(-13.5, 10.0, 14.5);
    glVertex3f(-13.75, 0.0, 16.5);
    glVertex3f(-13.75, 10.0, 16.5);
    glVertex3f(-14.0, 4.0, 18.5);
    glVertex3f(-14.0, 10.0, 18.5);
    glVertex3f(-14.25, 0.0, 20.5);
    glVertex3f(-14.25, 10.0, 20.5);
    glVertex3f(-14.5, 4.0, 22.5);
    glVertex3f(-14.5, 10.0, 22.5);
    glVertex3f(-14.75, 0.0, 24.5);
    glVertex3f(-14.75, 10.0, 24.5);
    glVertex3f(-15.0, 4.0, 26.5);
    glVertex3f(-15.0, 10.0, 26.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-24.0, 10.0, -3.0);
    glVertex3f(-28.5, 10.0, 25.0);
    glVertex3f(-24.0, 13.0, -3.0);
    glVertex3f(-28.5, 13.0, 25.0);
    glVertex3f(-24.0, 16.0, -3.0);
    glVertex3f(-28.5, 16.0, 25.0);
    glVertex3f(-24.0, 19.0, -3.0);
    glVertex3f(-28.5, 19.0, 25.0);

    glVertex3f(-24.75, 10.0, 6.5);
    glVertex3f(-24.75, 19.0, 6.5);
    glVertex3f(-25.0, 10.0, 8.5);
    glVertex3f(-25.0, 23.0, 8.5);
    glVertex3f(-25.5, 10.0, 10.5);
    glVertex3f(-25.5, 19.0, 10.5);
    glVertex3f(-26.0, 10.0, 12.5);
    glVertex3f(-26.0, 23.0, 12.5);
    glVertex3f(-26.5, 10.0, 14.5);
    glVertex3f(-26.5, 19.0, 14.5);
    glVertex3f(-27.0, 10.0, 16.5);
    glVertex3f(-27.0, 23.0, 16.5);
    glVertex3f(-27.5, 10.0, 18.5);
    glVertex3f(-27.5, 19.0, 18.5);
    glVertex3f(-27.75, 10.0, 20.5);
    glVertex3f(-27.75, 23.0, 20.5);
    glVertex3f(-28.0, 10.0, 22.5);
    glVertex3f(-28.0, 19.0, 22.5);
    glVertex3f(-28.25, 10.0, 24.5);
    glVertex3f(-28.25, 23.0, 24.5);
    glColor3ub(193, 167, 140);
    glVertex3f(-24.0, 4.0, -3.0);
    glVertex3f(-28.5, 4.0, 25.0);
    glVertex3f(-24.0, 7.0, -3.0);
    glVertex3f(-28.5, 7.0, 25.0);

    glVertex3f(-24.75, 4.0, 6.5);
    glVertex3f(-24.75, 10.0, 6.5);
    glVertex3f(-25.0, 0.0, 8.5);
    glVertex3f(-25.0, 10.0, 8.5);
    glVertex3f(-25.5, 4.0, 10.5);
    glVertex3f(-25.5, 10.0, 10.5);
    glVertex3f(-26.0, 0.0, 12.5);
    glVertex3f(-26.0, 10.0, 12.5);
    glVertex3f(-26.5, 4.0, 14.5);
    glVertex3f(-26.5, 10.0, 14.5);
    glVertex3f(-27.0, 0.0, 16.5);
    glVertex3f(-27.0, 10.0, 16.5);
    glVertex3f(-27.5, 4.0, 18.5);
    glVertex3f(-27.5, 10.0, 18.5);
    glVertex3f(-27.75, 0.0, 20.5);
    glVertex3f(-27.75, 10.0, 20.5);
    glVertex3f(-28.0, 4.0, 22.5);
    glVertex3f(-28.0, 10.0, 22.5);
    glVertex3f(-28.25, 0.0, 24.5);
    glVertex3f(-28.25, 10.0, 24.5);
    glEnd();

    //depan 1
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-27.5, 10.0, 26.3);
    glVertex3f(-16.5, 10.0, 28.0);
    glVertex3f(-27.5, 13.0, 26.3);
    glVertex3f(-16.5, 13.0, 28.0);
    glVertex3f(-27.5, 16.0, 26.3);
    glVertex3f(-16.5, 16.0, 28.0);
    glVertex3f(-27.5, 19.0, 26.3);
    glVertex3f(-16.5, 19.0, 28.0);

    glVertex3f(-26.0, 10.0, 26.9);
    glVertex3f(-26.0, 23.0, 26.9);
    glVertex3f(-24.0, 10.0, 27.3);
    glVertex3f(-24.0, 23.0, 27.3);
    glVertex3f(-20.0, 10.0, 27.8);
    glVertex3f(-20.0, 23.0, 27.8);
    glVertex3f(-22.0, 10.0, 27.8);
    glVertex3f(-22.0, 19.0, 27.8);
    glVertex3f(-18.0, 10.0, 28.0);
    glVertex3f(-18.0, 23.0, 28.0);

    glColor3ub(193, 167, 140);
    glVertex3f(-27.5, 4.0, 26.3);
    glVertex3f(-16.5, 4.0, 28.0);
    glVertex3f(-27.5, 7.0, 26.3);
    glVertex3f(-16.5, 7.0, 28.0);

    glVertex3f(-26.0, 4.0, 26.9);
    glVertex3f(-26.0, 10.0, 26.9);
    glVertex3f(-24.0, 0.0, 27.3);
    glVertex3f(-24.0, 10.0, 27.3);
    glVertex3f(-20.0, 0.0, 27.5);
    glVertex3f(-20.0, 10.0, 27.5);
    glVertex3f(-22.0, 4.0, 27.8);
    glVertex3f(-22.0, 10.0, 27.8);
    glVertex3f(-18.0, 4.0, 28.0);
    glVertex3f(-18.0, 10.0, 28.0);
    glEnd();

    //depan 2
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(27.5, 10.0, 26.3);
    glVertex3f(16.5, 10.0, 28.0);
    glVertex3f(27.5, 13.0, 26.3);
    glVertex3f(16.5, 13.0, 28.0);
    glVertex3f(27.5, 16.0, 26.3);
    glVertex3f(16.5, 16.0, 28.0);
    glVertex3f(27.5, 19.0, 26.3);
    glVertex3f(16.5, 19.0, 28.0);

    glVertex3f(26.0, 10.0, 26.9);
    glVertex3f(26.0, 23.0, 26.9);
    glVertex3f(24.0, 10.0, 27.3);
    glVertex3f(24.0, 23.0, 27.3);
    glVertex3f(20.0, 10.0, 27.8);
    glVertex3f(20.0, 23.0, 27.8);
    glVertex3f(22.0, 10.0, 27.8);
    glVertex3f(22.0, 19.0, 27.8);
    glVertex3f(18.0, 10.0, 28.0);
    glVertex3f(18.0, 23.0, 28.0);

    glColor3ub(193, 167, 140);
    glVertex3f(27.5, 4.0, 26.3);
    glVertex3f(16.5, 4.0, 28.0);
    glVertex3f(27.5, 7.0, 26.3);
    glVertex3f(16.5, 7.0, 28.0);

    glVertex3f(26.0, 4.0, 26.9);
    glVertex3f(26.0, 10.0, 26.9);
    glVertex3f(24.0, 0.0, 27.3);
    glVertex3f(24.0, 10.0, 27.3);
    glVertex3f(20.0, 0.0, 27.5);
    glVertex3f(20.0, 10.0, 27.5);
    glVertex3f(22.0, 4.0, 27.8);
    glVertex3f(22.0, 10.0, 27.8);
    glVertex3f(18.0, 4.0, 28.0);
    glVertex3f(18.0, 10.0, 28.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-10.0, 0.0, -5.65);
    glVertex3f(10.0, 0.0, -5.65);
    glVertex3f(10.0, 23.0, -5.65);
    glVertex3f(-10.0, 23.0, -5.65);

    glVertex3f(-17.0, 0.0, -18.25);
    glVertex3f(17.0, 0.0, -18.25);
    glVertex3f(17.0, 23.0, -18.25);
    glVertex3f(-17.0, 23.0, -18.25);

    glVertex3f(-18.0, 0.0, -10.0);
    glVertex3f(-18.0, 0.0, -17.0);
    glVertex3f(-18.0, 23.0, -17.0);
    glVertex3f(-18.0, 23.0, -10.0);

    glVertex3f(18.0, 0.0, -10.0);
    glVertex3f(18.0, 0.0, -17.0);
    glVertex3f(18.0, 23.0, -17.0);
    glVertex3f(18.0, 23.0, -10.0);

    glVertex3f(-18.0, 0.0, -9.5);
    glVertex3f(-18.0, 23.0, -9.5);
    glVertex3f(-37.0, 23.0, -11.975);
    glVertex3f(-37.0, 0.0, -11.975);

    glVertex3f(18.0, 0.0, -9.5);
    glVertex3f(18.0, 23.0, -9.5);
    glVertex3f(37.0, 23.0, -11.975);
    glVertex3f(37.0, 0.0, -11.975);

    glVertex3f(-18.0, 0.0, -9.5);
    glVertex3f(-18.0, 23.0, -9.5);
    glVertex3f(-37.0, 23.0, -11.975);
    glVertex3f(-37.0, 0.0, -11.975);

    glVertex3f(18.0, 0.0, -9.5);
    glVertex3f(18.0, 23.0, -9.5);
    glVertex3f(37.0, 23.0, -11.975);
    glVertex3f(37.0, 0.0, -11.975);

    glVertex3f(-25.0, 0.0, 4.0);
    glVertex3f(-25.0, 23.0, 4.0);
    glVertex3f(-39.0, 23.0, 0.5);
    glVertex3f(-39.0, 0.0, 0.5);

    glVertex3f(25.0, 0.0, 4.0);
    glVertex3f(25.0, 23.0, 4.0);
    glVertex3f(39.0, 23.0, 0.5);
    glVertex3f(39.0, 0.0, 0.5);

    glVertex3f(-37.5, 0.0, -11.5);
    glVertex3f(-37.5, 23.0, -11.5);
    glVertex3f(-40.25, 23.0, -0.5);
    glVertex3f(-40.25, 0.0, -0.5);

    glVertex3f(37.5, 0.0, -11.5);
    glVertex3f(37.5, 23.0, -11.5);
    glVertex3f(40.25, 23.0, -0.5);
    glVertex3f(40.25, 0.0, -0.5);

    glVertex3f(-10.0, 0.0, -5.0);
    glVertex3f(-10.0, 23.0, -5.0);
    glVertex3f(-16.0, 23.0, 27.975);
    glVertex3f(-16.0, 0.0, 27.975);

    glVertex3f(10.0, 0.0, -5.0);
    glVertex3f(10.0, 23.0, -5.0);
    glVertex3f(16.0, 23.0, 27.975);
    glVertex3f(16.0, 0.0, 27.975);

    glVertex3f(-22.75, 0.0, -3.0);
    glVertex3f(-22.75, 23.0, -3.0);
    glVertex3f(-28.0, 23.0, 25.0);
    glVertex3f(-28.0, 0.0, 25.0);

    glVertex3f(22.75, 0.0, -3.0);
    glVertex3f(22.75, 23.0, -3.0);
    glVertex3f(28.0, 23.0, 25.0);
    glVertex3f(28.0, 0.0, 25.0);

    glVertex3f(-27.5, 0.0, 26.3);
    glVertex3f(-27.5, 23.0, 26.3);
    glVertex3f(-16.5, 23.0, 28.0);
    glVertex3f(-16.5, 0.0, 28.0);

    glVertex3f(27.5, 0.0, 26.3);
    glVertex3f(27.5, 23.0, 26.3);
    glVertex3f(16.5, 23.0, 28.0);
    glVertex3f(16.5, 0.0, 28.0);
    glEnd();

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

    //tiang bawah
    glBegin(GL_QUADS);
    glColor3ub(179, 151, 111);
    glVertex3f(-4.0, 3.0, -3.0);
    glVertex3f(4.0, 3.0, -3.0);
    glVertex3f(4.0, 3.0, -6.0);
    glVertex3f(-4.0, 3.0, -6.0);
    glVertex3f(-4.0, 7.0, -3.0);
    glVertex3f(4.0, 7.0, -3.0);
    glVertex3f(4.0, 7.0, -6.0);
    glVertex3f(-4.0, 7.0, -6.0);
    glVertex3f(-4.0, 3.0, -3.0);
    glVertex3f(-4.0, 7.0, -3.0);
    glVertex3f(-4.0, 7.0, -6.0);
    glVertex3f(-4.0, 3.0, -6.0);
    glVertex3f(4.0, 3.0, -3.0);
    glVertex3f(4.0, 7.0, -3.0);
    glVertex3f(4.0, 7.0, -6.0);
    glVertex3f(4.0, 3.0, -6.0);
    glVertex3f(-4.0, 3.0, -3.0);
    glVertex3f(4.0, 3.0, -3.0);
    glVertex3f(4.0, 7.0, -3.0);
    glVertex3f(-4.0, 7.0, -3.0);
    glVertex3f(-4.0, 3.0, -6.0);
    glVertex3f(4.0, 3.0, -6.0);
    glVertex3f(4.0, 7.0, -6.0);
    glVertex3f(-4.0, 7.0, -6.0);
    //tiang 1
    glVertex3f(-5.0, 0.0, -6.0);
    glVertex3f(-4.0, 0.0, -6.0);
    glVertex3f(-4.0, 8.0, -6.0);
    glVertex3f(-5.0, 8.0, -6.0);
    glVertex3f(-5.0, 0.0, -3.0);
    glVertex3f(-4.0, 0.0, -3.0);
    glVertex3f(-4.0, 8.0, -3.0);
    glVertex3f(-5.0, 8.0, -3.0);
    glVertex3f(-5.0, 0.0, -3.0);
    glVertex3f(-5.0, 0.0, -6.0);
    glVertex3f(-5.0, 8.0, -6.0);
    glVertex3f(-5.0, 8.0, -3.0);
    glVertex3f(-4.0, 0.0, -3.0);
    glVertex3f(-4.0, 0.0, -6.0);
    glVertex3f(-4.0, 8.0, -6.0);
    glVertex3f(-4.0, 8.0, -3.0);
    glVertex3f(-5.0, 8.0, -3.0);
    glVertex3f(-5.0, 8.0, -6.0);
    glVertex3f(-4.0, 8.0, -6.0);
    glVertex3f(-4.0, 8.0, -3.0);
    glVertex3f(-5.0, 0.0, -3.0);
    glVertex3f(-5.0, 0.0, -6.0);
    glVertex3f(-4.0, 0.0, -6.0);
    glVertex3f(-4.0, 0.0, -3.0);
    //tiang 2
    glVertex3f(-2.0, 0.0, -6.0);
    glVertex3f(-1.0, 0.0, -6.0);
    glVertex3f(-1.0, 8.0, -6.0);
    glVertex3f(-2.0, 8.0, -6.0);
    glVertex3f(-2.0, 0.0, -3.0);
    glVertex3f(-1.0, 0.0, -3.0);
    glVertex3f(-1.0, 8.0, -3.0);
    glVertex3f(-2.0, 8.0, -3.0);
    glVertex3f(-2.0, 0.0, -3.0);
    glVertex3f(-2.0, 0.0, -6.0);
    glVertex3f(-2.0, 8.0, -6.0);
    glVertex3f(-2.0, 8.0, -3.0);
    glVertex3f(-1.0, 0.0, -3.0);
    glVertex3f(-1.0, 0.0, -6.0);
    glVertex3f(-1.0, 8.0, -6.0);
    glVertex3f(-1.0, 8.0, -3.0);
    glVertex3f(-2.0, 8.0, -3.0);
    glVertex3f(-2.0, 8.0, -6.0);
    glVertex3f(-1.0, 8.0, -6.0);
    glVertex3f(-1.0, 8.0, -3.0);
    glVertex3f(-2.0, 0.0, -3.0);
    glVertex3f(-2.0, 0.0, -6.0);
    glVertex3f(-1.0, 0.0, -6.0);
    glVertex3f(-1.0, 0.0, -3.0);
    //tiang 3
    glVertex3f(2.0, 0.0, -6.0);
    glVertex3f(1.0, 0.0, -6.0);
    glVertex3f(1.0, 8.0, -6.0);
    glVertex3f(2.0, 8.0, -6.0);
    glVertex3f(2.0, 0.0, -3.0);
    glVertex3f(1.0, 0.0, -3.0);
    glVertex3f(1.0, 8.0, -3.0);
    glVertex3f(2.0, 8.0, -3.0);
    glVertex3f(2.0, 0.0, -3.0);
    glVertex3f(2.0, 0.0, -6.0);
    glVertex3f(2.0, 8.0, -6.0);
    glVertex3f(2.0, 8.0, -3.0);
    glVertex3f(1.0, 0.0, -3.0);
    glVertex3f(1.0, 0.0, -6.0);
    glVertex3f(1.0, 8.0, -6.0);
    glVertex3f(1.0, 8.0, -3.0);
    glVertex3f(2.0, 8.0, -3.0);
    glVertex3f(2.0, 8.0, -6.0);
    glVertex3f(1.0, 8.0, -6.0);
    glVertex3f(1.0, 8.0, -3.0);
    glVertex3f(2.0, 0.0, -3.0);
    glVertex3f(2.0, 0.0, -6.0);
    glVertex3f(1.0, 0.0, -6.0);
    glVertex3f(1.0, 0.0, -3.0);
    //tiang 4
    glVertex3f(5.0, 0.0, -6.0);
    glVertex3f(4.0, 0.0, -6.0);
    glVertex3f(4.0, 8.0, -6.0);
    glVertex3f(5.0, 8.0, -6.0);
    glVertex3f(5.0, 0.0, -3.0);
    glVertex3f(4.0, 0.0, -3.0);
    glVertex3f(4.0, 8.0, -3.0);
    glVertex3f(5.0, 8.0, -3.0);
    glVertex3f(5.0, 0.0, -3.0);
    glVertex3f(5.0, 0.0, -6.0);
    glVertex3f(5.0, 8.0, -6.0);
    glVertex3f(5.0, 8.0, -3.0);
    glVertex3f(4.0, 0.0, -3.0);
    glVertex3f(4.0, 0.0, -6.0);
    glVertex3f(4.0, 8.0, -6.0);
    glVertex3f(4.0, 8.0, -3.0);
    glVertex3f(5.0, 8.0, -3.0);
    glVertex3f(5.0, 8.0, -6.0);
    glVertex3f(4.0, 8.0, -6.0);
    glVertex3f(4.0, 8.0, -3.0);
    glVertex3f(5.0, 0.0, -3.0);
    glVertex3f(5.0, 0.0, -6.0);
    glVertex3f(4.0, 0.0, -6.0);
    glVertex3f(4.0, 0.0, -3.0);
    glEnd();

    //tiang bawah belakang
    glBegin(GL_QUADS);
    glColor3ub(179, 151, 111);
    glVertex3f(-4.0, 3.0, -21.0);
    glVertex3f(4.0, 3.0, -21.0);
    glVertex3f(4.0, 3.0, -18.0);
    glVertex3f(-4.0, 3.0, -18.0);
    glVertex3f(-4.0, 7.0, -21.0);
    glVertex3f(4.0, 7.0, -21.0);
    glVertex3f(4.0, 7.0, -18.0);
    glVertex3f(-4.0, 7.0, -18.0);
    glVertex3f(-4.0, 3.0, -21.0);
    glVertex3f(-4.0, 7.0, -21.0);
    glVertex3f(-4.0, 7.0, -18.0);
    glVertex3f(-4.0, 3.0, -18.0);
    glVertex3f(4.0, 3.0, -21.0);
    glVertex3f(4.0, 7.0, -21.0);
    glVertex3f(4.0, 7.0, -18.0);
    glVertex3f(4.0, 3.0, -18.0);
    glVertex3f(-4.0, 3.0, -21.0);
    glVertex3f(4.0, 3.0, -21.0);
    glVertex3f(4.0, 7.0, -21.0);
    glVertex3f(-4.0, 7.0, -21.0);
    glVertex3f(-4.0, 3.0, -18.0);
    glVertex3f(4.0, 3.0, -18.0);
    glVertex3f(4.0, 7.0, -18.0);
    glVertex3f(-4.0, 7.0, -18.0);
    //tiang 1
    glVertex3f(-5.0, 0.0, -18.0);
    glVertex3f(-4.0, 0.0, -18.0);
    glVertex3f(-4.0, 8.0, -18.0);
    glVertex3f(-5.0, 8.0, -18.0);
    glVertex3f(-5.0, 0.0, -21.0);
    glVertex3f(-4.0, 0.0, -21.0);
    glVertex3f(-4.0, 8.0, -21.0);
    glVertex3f(-5.0, 8.0, -21.0);
    glVertex3f(-5.0, 0.0, -21.0);
    glVertex3f(-5.0, 0.0, -18.0);
    glVertex3f(-5.0, 8.0, -18.0);
    glVertex3f(-5.0, 8.0, -21.0);
    glVertex3f(-4.0, 0.0, -21.0);
    glVertex3f(-4.0, 0.0, -18.0);
    glVertex3f(-4.0, 8.0, -18.0);
    glVertex3f(-4.0, 8.0, -21.0);
    glVertex3f(-5.0, 8.0, -21.0);
    glVertex3f(-5.0, 8.0, -18.0);
    glVertex3f(-4.0, 8.0, -18.0);
    glVertex3f(-4.0, 8.0, -21.0);
    glVertex3f(-5.0, 0.0, -21.0);
    glVertex3f(-5.0, 0.0, -18.0);
    glVertex3f(-4.0, 0.0, -18.0);
    glVertex3f(-4.0, 0.0, -21.0);
    //tiang 2
    glVertex3f(-2.0, 0.0, -18.0);
    glVertex3f(-1.0, 0.0, -18.0);
    glVertex3f(-1.0, 8.0, -18.0);
    glVertex3f(-2.0, 8.0, -18.0);
    glVertex3f(-2.0, 0.0, -21.0);
    glVertex3f(-1.0, 0.0, -21.0);
    glVertex3f(-1.0, 8.0, -21.0);
    glVertex3f(-2.0, 8.0, -21.0);
    glVertex3f(-2.0, 0.0, -21.0);
    glVertex3f(-2.0, 0.0, -18.0);
    glVertex3f(-2.0, 8.0, -18.0);
    glVertex3f(-2.0, 8.0, -21.0);
    glVertex3f(-1.0, 0.0, -21.0);
    glVertex3f(-1.0, 0.0, -18.0);
    glVertex3f(-1.0, 8.0, -18.0);
    glVertex3f(-1.0, 8.0, -21.0);
    glVertex3f(-2.0, 8.0, -21.0);
    glVertex3f(-2.0, 8.0, -18.0);
    glVertex3f(-1.0, 8.0, -18.0);
    glVertex3f(-1.0, 8.0, -21.0);
    glVertex3f(-2.0, 0.0, -21.0);
    glVertex3f(-2.0, 0.0, -18.0);
    glVertex3f(-1.0, 0.0, -18.0);
    glVertex3f(-1.0, 0.0, -21.0);
    //tiang 3
    glVertex3f(2.0, 0.0, -18.0);
    glVertex3f(1.0, 0.0, -18.0);
    glVertex3f(1.0, 8.0, -18.0);
    glVertex3f(2.0, 8.0, -18.0);
    glVertex3f(2.0, 0.0, -21.0);
    glVertex3f(1.0, 0.0, -21.0);
    glVertex3f(1.0, 8.0, -21.0);
    glVertex3f(2.0, 8.0, -21.0);
    glVertex3f(2.0, 0.0, -21.0);
    glVertex3f(2.0, 0.0, -18.0);
    glVertex3f(2.0, 8.0, -18.0);
    glVertex3f(2.0, 8.0, -21.0);
    glVertex3f(1.0, 0.0, -21.0);
    glVertex3f(1.0, 0.0, -18.0);
    glVertex3f(1.0, 8.0, -18.0);
    glVertex3f(1.0, 8.0, -21.0);
    glVertex3f(2.0, 8.0, -21.0);
    glVertex3f(2.0, 8.0, -18.0);
    glVertex3f(1.0, 8.0, -18.0);
    glVertex3f(1.0, 8.0, -21.0);
    glVertex3f(2.0, 0.0, -21.0);
    glVertex3f(2.0, 0.0, -18.0);
    glVertex3f(1.0, 0.0, -18.0);
    glVertex3f(1.0, 0.0, -21.0);
    //tiang 4
    glVertex3f(5.0, 0.0, -18.0);
    glVertex3f(4.0, 0.0, -18.0);
    glVertex3f(4.0, 8.0, -18.0);
    glVertex3f(5.0, 8.0, -18.0);
    glVertex3f(5.0, 0.0, -21.0);
    glVertex3f(4.0, 0.0, -21.0);
    glVertex3f(4.0, 8.0, -21.0);
    glVertex3f(5.0, 8.0, -21.0);
    glVertex3f(5.0, 0.0, -21.0);
    glVertex3f(5.0, 0.0, -18.0);
    glVertex3f(5.0, 8.0, -18.0);
    glVertex3f(5.0, 8.0, -21.0);
    glVertex3f(4.0, 0.0, -21.0);
    glVertex3f(4.0, 0.0, -18.0);
    glVertex3f(4.0, 8.0, -18.0);
    glVertex3f(4.0, 8.0, -21.0);
    glVertex3f(5.0, 8.0, -21.0);
    glVertex3f(5.0, 8.0, -18.0);
    glVertex3f(4.0, 8.0, -18.0);
    glVertex3f(4.0, 8.0, -21.0);
    glVertex3f(5.0, 0.0, -21.0);
    glVertex3f(5.0, 0.0, -18.0);
    glVertex3f(4.0, 0.0, -18.0);
    glVertex3f(4.0, 0.0, -21.0);
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
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-15.0, 25.0, -5.5);
    glVertex3f(-15.0, 27.0, -5.5);
    glVertex3f(-13.5, 25.0, -5.5);
    glVertex3f(-13.5, 27.0, -5.5);
    glVertex3f(-12.0, 25.0, -5.5);
    glVertex3f(-12.0, 27.0, -5.5);
    glVertex3f(-10.5, 25.0, -5.5);
    glVertex3f(-10.5, 27.0, -5.5);
    glVertex3f(-9.0, 25.0, -5.5);
    glVertex3f(-9.0, 27.0, -5.5);
    glVertex3f(-7.5, 25.0, -5.5);
    glVertex3f(-7.5, 27.0, -5.5);
    glVertex3f(-6.0, 25.0, -5.5);
    glVertex3f(-6.0, 27.0, -5.5);
    glVertex3f(-4.5, 25.0, -5.5);
    glVertex3f(-4.5, 27.0, -5.5);
    glVertex3f(-3.0, 25.0, -5.5);
    glVertex3f(-3.0, 27.0, -5.5);
    glVertex3f(-1.5, 25.0, -5.5);
    glVertex3f(-1.5, 27.0, -5.5);
    glVertex3f(-0.0, 25.0, -5.5);
    glVertex3f(-0.0, 27.0, -5.5);

    glVertex3f(15.0, 25.0, -5.5);
    glVertex3f(15.0, 27.0, -5.5);
    glVertex3f(13.5, 25.0, -5.5);
    glVertex3f(13.5, 27.0, -5.5);
    glVertex3f(12.0, 25.0, -5.5);
    glVertex3f(12.0, 27.0, -5.5);
    glVertex3f(10.5, 25.0, -5.5);
    glVertex3f(10.5, 27.0, -5.5);
    glVertex3f(9.0, 25.0, -5.5);
    glVertex3f(9.0, 27.0, -5.5);
    glVertex3f(7.5, 25.0, -5.5);
    glVertex3f(7.5, 27.0, -5.5);
    glVertex3f(6.0, 25.0, -5.5);
    glVertex3f(6.0, 27.0, -5.5);
    glVertex3f(4.5, 25.0, -5.5);
    glVertex3f(4.5, 27.0, -5.5);
    glVertex3f(3.0, 25.0, -5.5);
    glVertex3f(3.0, 27.0, -5.5);
    glVertex3f(1.5, 25.0, -5.5);
    glVertex3f(1.5, 27.0, -5.5);

    glVertex3f(-15.0, 25.0, -18.5);
    glVertex3f(-15.0, 27.0, -18.5);
    glVertex3f(-13.5, 25.0, -18.5);
    glVertex3f(-13.5, 27.0, -18.5);
    glVertex3f(-12.0, 25.0, -18.5);
    glVertex3f(-12.0, 27.0, -18.5);
    glVertex3f(-10.5, 25.0, -18.5);
    glVertex3f(-10.5, 27.0, -18.5);
    glVertex3f(-9.0, 25.0, -18.5);
    glVertex3f(-9.0, 27.0, -18.5);
    glVertex3f(-7.5, 25.0, -18.5);
    glVertex3f(-7.5, 27.0, -18.5);
    glVertex3f(-6.0, 25.0, -18.5);
    glVertex3f(-6.0, 27.0, -18.5);
    glVertex3f(-4.5, 25.0, -18.5);
    glVertex3f(-4.5, 27.0, -18.5);
    glVertex3f(-3.0, 25.0, -18.5);
    glVertex3f(-3.0, 27.0, -18.5);
    glVertex3f(-1.5, 25.0, -18.5);
    glVertex3f(-1.5, 27.0, -18.5);
    glVertex3f(-0.0, 25.0, -18.5);
    glVertex3f(-0.0, 27.0, -18.5);

    glVertex3f(15.0, 25.0, -18.5);
    glVertex3f(15.0, 27.0, -18.5);
    glVertex3f(13.5, 25.0, -18.5);
    glVertex3f(13.5, 27.0, -18.5);
    glVertex3f(12.0, 25.0, -18.5);
    glVertex3f(12.0, 27.0, -18.5);
    glVertex3f(10.5, 25.0, -18.5);
    glVertex3f(10.5, 27.0, -18.5);
    glVertex3f(9.0, 25.0, -18.5);
    glVertex3f(9.0, 27.0, -18.5);
    glVertex3f(7.5, 25.0, -18.5);
    glVertex3f(7.5, 27.0, -18.5);
    glVertex3f(6.0, 25.0, -18.5);
    glVertex3f(6.0, 27.0, -18.5);
    glVertex3f(4.5, 25.0, -18.5);
    glVertex3f(4.5, 27.0, -18.5);
    glVertex3f(3.0, 25.0, -18.5);
    glVertex3f(3.0, 27.0, -18.5);
    glVertex3f(1.5, 25.0, -18.5);
    glVertex3f(1.5, 27.0, -18.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-16.5, 25.0, -5.5);
    glVertex3f(16.5, 25.0, -5.5);
    glVertex3f(16.5, 27.0, -5.5);
    glVertex3f(-16.5, 27.0, -5.5);

    glVertex3f(-16.0, 25.0, -18.5);
    glVertex3f(16.0, 25.0, -18.5);
    glVertex3f(16.0, 27.0, -18.5);
    glVertex3f(-16.0, 27.0, -18.5);
    glEnd();

    //jendela samping
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.5, 25.0, -9.0);
    glVertex3f(-18.5, 27.0, -9.0);
    glVertex3f(-18.5, 25.0, -10.5);
    glVertex3f(-18.5, 27.0, -10.5);
    glVertex3f(-18.5, 25.0, -12.0);
    glVertex3f(-18.5, 27.0, -12.0);
    glVertex3f(-18.5, 25.0, -13.5);
    glVertex3f(-18.5, 27.0, -13.5);
    glVertex3f(-18.5, 25.0, -15.0);
    glVertex3f(-18.5, 27.0, -15.0);

    glVertex3f(18.5, 25.0, -9.0);
    glVertex3f(18.5, 27.0, -9.0);
    glVertex3f(18.5, 25.0, -10.5);
    glVertex3f(18.5, 27.0, -10.5);
    glVertex3f(18.5, 25.0, -12.0);
    glVertex3f(18.5, 27.0, -12.0);
    glVertex3f(18.5, 25.0, -13.5);
    glVertex3f(18.5, 27.0, -13.5);
    glVertex3f(18.5, 25.0, -15.0);
    glVertex3f(18.5, 27.0, -15.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-18.25, 25.0, -7.5);
    glVertex3f(-18.25, 25.0, -16.5);
    glVertex3f(-18.25, 27.0, -16.5);
    glVertex3f(-18.25, 27.0, -7.5);

    glVertex3f(18.25, 25.0, -7.5);
    glVertex3f(18.25, 25.0, -16.5);
    glVertex3f(18.25, 27.0, -16.5);
    glVertex3f(18.25, 27.0, -7.5);
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
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.5, 28.5, -5.5);
    glVertex3f(-5.5, 29.5, -5.5);
    glVertex3f(-4.0, 28.5, -5.5);
    glVertex3f(-4.0, 29.5, -5.5);
    glVertex3f(-2.5, 28.5, -5.5);
    glVertex3f(-2.5, 29.5, -5.5);
    glVertex3f(-1.0, 28.5, -5.5);
    glVertex3f(-1.0, 29.5, -5.5);
    glVertex3f(0.5, 28.5, -5.5);
    glVertex3f(0.5, 29.5, -5.5);
    glVertex3f(2.0, 28.5, -5.5);
    glVertex3f(2.0, 29.5, -5.5);
    glVertex3f(3.5, 28.5, -5.5);
    glVertex3f(3.5, 29.5, -5.5);
    glVertex3f(5.0, 28.5, -5.5);
    glVertex3f(5.0, 29.5, -5.5);

    glVertex3f(-5.5, 28.5, -18.5);
    glVertex3f(-5.5, 29.5, -18.5);
    glVertex3f(-4.0, 28.5, -18.5);
    glVertex3f(-4.0, 29.5, -18.5);
    glVertex3f(-2.5, 28.5, -18.5);
    glVertex3f(-2.5, 29.5, -18.5);
    glVertex3f(-1.0, 28.5, -18.5);
    glVertex3f(-1.0, 29.5, -18.5);
    glVertex3f(0.5, 28.5, -18.5);
    glVertex3f(0.5, 29.5, -18.5);
    glVertex3f(2.0, 28.5, -18.5);
    glVertex3f(2.0, 29.5, -18.5);
    glVertex3f(3.5, 28.5, -18.5);
    glVertex3f(3.5, 29.5, -18.5);
    glVertex3f(5.0, 28.5, -18.5);
    glVertex3f(5.0, 29.5, -18.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57, 59, 54);
    glVertex3f(-7.0, 28.5, -5.5);
    glVertex3f(7.0, 28.5, -5.5);
    glVertex3f(7.0, 29.5, -5.5);
    glVertex3f(-7.0, 29.5, -5.5);

    glVertex3f(-7.0, 28.5, -18.5);
    glVertex3f(7.0, 28.5, -18.5);
    glVertex3f(7.0, 29.5, -18.5);
    glVertex3f(-7.0, 29.5, -18.5);
    glEnd();

    //atas 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
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

    //object lantai 2
    glBegin(GL_QUADS);
    glColor3ub(21, 70, 102);
    //kursi
    glVertex3f(18.0, 10.0, -10.0);
    glVertex3f(18.0, 14.0, -10.0);
    glVertex3f(18.0, 14.0, -16.0);
    glVertex3f(18.0, 10.0, -16.0);

    glVertex3f(16.0, 10.0, -10.0);
    glVertex3f(16.0, 12.0, -10.0);
    glVertex3f(16.0, 12.0, -16.0);
    glVertex3f(16.0, 10.0, -16.0);

    glVertex3f(18.0, 10.0, -10.0);
    glVertex3f(18.0, 10.0, -16.0);
    glVertex3f(16.0, 10.0, -16.0);
    glVertex3f(16.0, 10.0, -10.0);

    glVertex3f(18.0, 12.0, -10.0);
    glVertex3f(18.0, 12.0, -16.0);
    glVertex3f(16.0, 12.0, -16.0);
    glVertex3f(16.0, 12.0, -10.0);

    glVertex3f(18.0, 10.0, -16.0);
    glVertex3f(18.0, 12.0, -16.0);
    glVertex3f(16.0, 12.0, -16.0);
    glVertex3f(16.0, 10.0, -16.0);

    glVertex3f(18.0, 10.0, -10.0);
    glVertex3f(18.0, 12.0, -10.0);
    glVertex3f(16.0, 12.0, -10.0);
    glVertex3f(16.0, 10.0, -10.0);

    glVertex3f(18.0, 12.0, -10.0);
    glVertex3f(18.0, 14.0, -10.0);
    glVertex3f(17.5, 14.0, -10.0);
    glVertex3f(17.5, 12.0, -10.0);

    glVertex3f(18.0, 12.0, -16.0);
    glVertex3f(18.0, 14.0, -16.0);
    glVertex3f(17.5, 14.0, -16.0);
    glVertex3f(17.5, 12.0, -16.0);

    glVertex3f(18.0, 14.0, -10.0);
    glVertex3f(18.0, 14.0, -16.0);
    glVertex3f(17.5, 14.0, -16.0);
    glVertex3f(17.5, 14.0, -10.0);

    //kursi 2
    glColor3ub(21, 70, 102);
    glVertex3f(-10.0, 10.0, -16.0);
    glVertex3f(-10.0, 10.0, -18.0);
    glVertex3f(-4.0, 10.0, -18.0);
    glVertex3f(-4.0, 10.0, -16.0);

    glVertex3f(-10.0, 12.0, -16.0);
    glVertex3f(-10.0, 12.0, -18.0);
    glVertex3f(-4.0, 12.0, -18.0);
    glVertex3f(-4.0, 12.0, -16.0);

    glVertex3f(-10.0, 14.0, -17.5);
    glVertex3f(-10.0, 14.0, -18.0);
    glVertex3f(-4.0, 14.0, -18.0);
    glVertex3f(-4.0, 14.0, -17.5);

    glVertex3f(-10.0, 10.0, -17.5);
    glVertex3f(-10.0, 14.0, -17.5);
    glVertex3f(-4.0, 14.0, -17.5);
    glVertex3f(-4.0, 10.0, -17.5);

    glVertex3f(-10.0, 10.0, -18.0);
    glVertex3f(-10.0, 14.0, -18.0);
    glVertex3f(-4.0, 14.0, -18.0);
    glVertex3f(-4.0, 10.0, -18.0);

    glVertex3f(-10.0, 10.0, -16.0);
    glVertex3f(-10.0, 12.0, -16.0);
    glVertex3f(-4.0, 12.0, -16.0);
    glVertex3f(-4.0, 10.0, -16.0);

    glVertex3f(-10.0, 10.0, -16.0);
    glVertex3f(-10.0, 12.0, -16.0);
    glVertex3f(-10.0, 12.0, -17.5);
    glVertex3f(-10.0, 10.0, -17.5);

    glVertex3f(-10.0, 10.0, -17.5);
    glVertex3f(-10.0, 12.0, -17.5);
    glVertex3f(-10.0, 12.0, -18.0);
    glVertex3f(-10.0, 10.0, -18.0);

    glVertex3f(-4.0, 10.0, -16.0);
    glVertex3f(-4.0, 12.0, -16.0);
    glVertex3f(-4.0, 12.0, -17.5);
    glVertex3f(-4.0, 10.0, -17.5);

    glVertex3f(-4.0, 10.0, -17.5);
    glVertex3f(-4.0, 12.0, -17.5);
    glVertex3f(-4.0, 12.0, -18.0);
    glVertex3f(-4.0, 10.0, -18.0);

    //meja besar
    glColor3ub(150, 75, 0);
    glVertex3f(-10.0, 10.0, -10.0);
    glVertex3f(-10.0, 10.0, -14.0);
    glVertex3f(-4.0, 10.0, -14.0);
    glVertex3f(-4.0, 10.0, -10.0);

    glVertex3f(-10.0, 12.0, -10.0);
    glVertex3f(-10.0, 12.0, -14.0);
    glVertex3f(-4.0, 12.0, -14.0);
    glVertex3f(-4.0, 12.0, -10.0);

    glVertex3f(-10.0, 10.0, -10.0);
    glVertex3f(-10.0, 12.0, -10.0);
    glVertex3f(-4.0, 12.0, -10.0);
    glVertex3f(-4.0, 10.0, -10.0);

    glVertex3f(-10.0, 10.0, -14.0);
    glVertex3f(-10.0, 12.0, -14.0);
    glVertex3f(-4.0, 12.0, -14.0);
    glVertex3f(-4.0, 10.0, -14.0);

    glVertex3f(-10.0, 10.0, -10.0);
    glVertex3f(-10.0, 12.0, -10.0);
    glVertex3f(-10.0, 12.0, -14.0);
    glVertex3f(-10.0, 10.0, -14.0);

    glVertex3f(-4.0, 10.0, -10.0);
    glVertex3f(-4.0, 12.0, -10.0);
    glVertex3f(-4.0, 12.0, -14.0);
    glVertex3f(-4.0, 10.0, -14.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(4.0, 12.0, -17.5);
    glVertex3f(10.0, 12.0, -17.5);
    glVertex3f(4.0, 14.0, -17.5);
    glVertex3f(10.0, 14.0, -17.5);
    glVertex3f(4.0, 12.0, -17.5);
    glVertex3f(4.0, 14.0, -17.5);
    glVertex3f(10.0, 12.0, -17.5);
    glVertex3f(10.0, 14.0, -17.5);
    glVertex3f(4.0, 12.0, -17.5);
    glVertex3f(4.0, 12.0, -10.0);
    glVertex3f(10.0, 12.0, -17.5);
    glVertex3f(10.0, 12.0, -10.0);
    glEnd();

    //kasur
    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);
    glVertex3f(10.0, 10.0, -10.0);
    glVertex3f(10.0, 10.0, -18.0);
    glVertex3f(4.0, 10.0, -18.0);
    glVertex3f(4.0, 10.0, -10.0);

    glVertex3f(10.0, 12.0, -10.0);
    glVertex3f(10.0, 12.0, -18.0);
    glVertex3f(4.0, 12.0, -18.0);
    glVertex3f(4.0, 12.0, -10.0);

    glVertex3f(10.0, 14.0, -17.5);
    glVertex3f(10.0, 14.0, -18.0);
    glVertex3f(4.0, 14.0, -18.0);
    glVertex3f(4.0, 14.0, -17.5);

    glVertex3f(10.0, 10.0, -17.5);
    glVertex3f(10.0, 14.0, -17.5);
    glVertex3f(4.0, 14.0, -17.5);
    glVertex3f(4.0, 10.0, -17.5);

    glVertex3f(10.0, 10.0, -18.0);
    glVertex3f(10.0, 14.0, -18.0);
    glVertex3f(4.0, 14.0, -18.0);
    glVertex3f(4.0, 10.0, -18.0);

    glVertex3f(10.0, 10.0, -10.0);
    glVertex3f(10.0, 12.0, -10.0);
    glVertex3f(4.0, 12.0, -10.0);
    glVertex3f(4.0, 10.0, -10.0);

    glVertex3f(10.0, 10.0, -10.0);
    glVertex3f(10.0, 12.0, -10.0);
    glVertex3f(10.0, 12.0, -17.5);
    glVertex3f(10.0, 10.0, -17.5);

    glVertex3f(10.0, 10.0, -17.5);
    glVertex3f(10.0, 12.0, -17.5);
    glVertex3f(10.0, 12.0, -18.0);
    glVertex3f(10.0, 10.0, -18.0);

    glVertex3f(4.0, 10.0, -10.0);
    glVertex3f(4.0, 12.0, -10.0);
    glVertex3f(4.0, 12.0, -17.5);
    glVertex3f(4.0, 10.0, -17.5);

    glVertex3f(4.0, 10.0, -17.5);
    glVertex3f(4.0, 12.0, -17.5);
    glVertex3f(4.0, 12.0, -18.0);
    glVertex3f(4.0, 10.0, -18.0);

    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(9.0, 12.2, -17.0);
    glVertex3f(9.0, 12.2, -15.0);
    glVertex3f(5.0, 12.2, -15.0);
    glVertex3f(5.0, 12.2, -17.0);

    glVertex3f(9.0, 12.7, -17.0);
    glVertex3f(9.0, 12.7, -15.0);
    glVertex3f(5.0, 12.7, -15.0);
    glVertex3f(5.0, 12.7, -17.0);

    glVertex3f(9.0, 12.2, -15.0);
    glVertex3f(9.0, 12.2, -17.0);
    glVertex3f(9.0, 12.7, -17.0);
    glVertex3f(9.0, 12.7, -15.0);

    glVertex3f(5.0, 12.2, -15.0);
    glVertex3f(5.0, 12.2, -17.0);
    glVertex3f(5.0, 12.7, -17.0);
    glVertex3f(5.0, 12.7, -15.0);

    glVertex3f(9.0, 12.2, -15.0);
    glVertex3f(9.0, 12.7, -15.0);
    glVertex3f(5.0, 12.7, -15.0);
    glVertex3f(5.0, 12.2, -15.0);

    glVertex3f(9.0, 12.2, -17.0);
    glVertex3f(9.0, 12.7, -17.0);
    glVertex3f(5.0, 12.7, -17.0);
    glVertex3f(5.0, 12.2, -17.0);
    glEnd();

    //meja 1
    glBegin(GL_QUADS);
    glColor3ub(150, 75, 0);
    glVertex3f(4.0, 10.0, -16.0);
    glVertex3f(4.0, 10.0, -18.0);
    glVertex3f(2.0, 10.0, -18.0);
    glVertex3f(2.0, 10.0, -16.0);

    glVertex3f(4.0, 12.0, -16.0);
    glVertex3f(4.0, 12.0, -18.0);
    glVertex3f(2.0, 12.0, -18.0);
    glVertex3f(2.0, 12.0, -16.0);

    glVertex3f(4.0, 10.0, -16.0);
    glVertex3f(4.0, 12.0, -16.0);
    glVertex3f(2.0, 12.0, -16.0);
    glVertex3f(2.0, 10.0, -16.0);

    glVertex3f(4.0, 10.0, -18.0);
    glVertex3f(4.0, 12.0, -18.0);
    glVertex3f(2.0, 12.0, -18.0);
    glVertex3f(2.0, 10.0, -18.0);

    glVertex3f(4.0, 10.0, -16.0);
    glVertex3f(4.0, 12.0, -16.0);
    glVertex3f(4.0, 12.0, -18.0);
    glVertex3f(4.0, 10.0, -18.0);

    glVertex3f(2.0, 10.0, -16.0);
    glVertex3f(2.0, 12.0, -16.0);
    glVertex3f(2.0, 12.0, -18.0);
    glVertex3f(2.0, 10.0, -18.0);

    //meja 2
    glColor3ub(150, 75, 0);
    glVertex3f(12.0, 10.0, -16.0);
    glVertex3f(12.0, 10.0, -18.0);
    glVertex3f(10.0, 10.0, -18.0);
    glVertex3f(10.0, 10.0, -16.0);

    glVertex3f(12.0, 12.0, -16.0);
    glVertex3f(12.0, 12.0, -18.0);
    glVertex3f(10.0, 12.0, -18.0);
    glVertex3f(10.0, 12.0, -16.0);

    glVertex3f(12.0, 10.0, -16.0);
    glVertex3f(12.0, 12.0, -16.0);
    glVertex3f(10.0, 12.0, -16.0);
    glVertex3f(10.0, 10.0, -16.0);

    glVertex3f(12.0, 10.0, -18.0);
    glVertex3f(12.0, 12.0, -18.0);
    glVertex3f(10.0, 12.0, -18.0);
    glVertex3f(10.0, 10.0, -18.0);

    glVertex3f(12.0, 10.0, -16.0);
    glVertex3f(12.0, 12.0, -16.0);
    glVertex3f(12.0, 12.0, -18.0);
    glVertex3f(12.0, 10.0, -18.0);

    glVertex3f(10.0, 10.0, -16.0);
    glVertex3f(10.0, 12.0, -16.0);
    glVertex3f(10.0, 12.0, -18.0);
    glVertex3f(10.0, 10.0, -18.0);

    //almari
    glColor3ub(183, 65, 14);
    glVertex3f(-18.0, 10.0, -10.0);
    glVertex3f(-18.0, 18.0, -10.0);
    glVertex3f(-18.0, 18.0, -16.0);
    glVertex3f(-18.0, 10.0, -16.0);

    glVertex3f(-16.0, 10.0, -10.0);
    glVertex3f(-16.0, 18.0, -10.0);
    glVertex3f(-16.0, 18.0, -16.0);
    glVertex3f(-16.0, 10.0, -16.0);

    glVertex3f(-18.0, 10.0, -10.0);
    glVertex3f(-18.0, 10.0, -16.0);
    glVertex3f(-16.0, 10.0, -16.0);
    glVertex3f(-16.0, 10.0, -10.0);

    glVertex3f(-18.0, 18.0, -10.0);
    glVertex3f(-18.0, 18.0, -16.0);
    glVertex3f(-16.0, 18.0, -16.0);
    glVertex3f(-16.0, 18.0, -10.0);

    glVertex3f(-18.0, 10.0, -16.0);
    glVertex3f(-18.0, 18.0, -16.0);
    glVertex3f(-16.0, 18.0, -16.0);
    glVertex3f(-16.0, 10.0, -16.0);

    glVertex3f(-18.0, 10.0, -10.0);
    glVertex3f(-18.0, 18.0, -10.0);
    glVertex3f(-16.0, 18.0, -10.0);
    glVertex3f(-16.0, 10.0, -10.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-17.0, 10.0, -13.0);
    glVertex3f(-17.0, 18.0, -13.0);
    glEnd();

    //tv
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-10.0, 14.0, -8.0);
    glVertex3f(-10.0, 14.0, -8.5);
    glVertex3f(-4.0, 14.0, -8.5);
    glVertex3f(-4.0, 14.0, -8.0);

    glVertex3f(-10.0, 18.0, -8.0);
    glVertex3f(-10.0, 18.0, -8.5);
    glVertex3f(-4.0, 18.0, -8.5);
    glVertex3f(-4.0, 18.0, -8.0);

    glVertex3f(-10.0, 14.0, -8.0);
    glVertex3f(-10.0, 18.0, -8.0);
    glVertex3f(-4.0, 18.0, -8.0);
    glVertex3f(-4.0, 14.0, -8.0);

    glVertex3f(-10.0, 14.0, -8.5);
    glVertex3f(-10.0, 18.0, -8.5);
    glVertex3f(-4.0, 18.0, -8.5);
    glVertex3f(-4.0, 14.0, -8.5);

    glVertex3f(-10.0, 14.0, -8.0);
    glVertex3f(-10.0, 18.0, -8.0);
    glVertex3f(-10.0, 18.0, -8.5);
    glVertex3f(-10.0, 14.0, -8.5);

    glVertex3f(-4.0, 14.0, -8.0);
    glVertex3f(-4.0, 18.0, -8.0);
    glVertex3f(-4.0, 18.0, -8.5);
    glVertex3f(-4.0, 14.0, -8.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(4.0, 16.0, -17.5);
    glVertex3f(10.0, 16.0, -17.5);
    glVertex3f(4.0, 18.0, -17.5);
    glVertex3f(10.0, 18.0, -17.5);
    glVertex3f(4.0, 16.0, -17.5);
    glVertex3f(4.0, 18.0, -17.5);
    glVertex3f(10.0, 16.0, -17.5);
    glVertex3f(10.0, 18.0, -17.5);
    glEnd();

    //lukisan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(10.0, 16.0, -18.0);
    glVertex3f(10.0, 16.0, -17.5);
    glVertex3f(4.0, 16.0, -17.5);
    glVertex3f(4.0, 16.0, -18.0);

    glVertex3f(10.0, 18.0, -18.0);
    glVertex3f(10.0, 18.0, -17.5);
    glVertex3f(4.0, 18.0, -17.5);
    glVertex3f(4.0, 18.0, -18.0);

    glVertex3f(10.0, 16.0, -18.0);
    glVertex3f(10.0, 18.0, -18.0);
    glVertex3f(4.0, 18.0, -18.0);
    glVertex3f(4.0, 16.0, -18.0);

    glVertex3f(10.0, 16.0, -17.5);
    glVertex3f(10.0, 18.0, -17.5);
    glVertex3f(4.0, 18.0, -17.5);
    glVertex3f(4.0, 16.0, -17.5);

    glVertex3f(10.0, 16.0, -18.0);
    glVertex3f(10.0, 18.0, -18.0);
    glVertex3f(10.0, 18.0, -17.5);
    glVertex3f(10.0, 16.0, -17.5);

    glVertex3f(4.0, 16.0, -18.0);
    glVertex3f(4.0, 18.0, -18.0);
    glVertex3f(4.0, 18.0, -17.5);
    glVertex3f(4.0, 16.0, -17.5);
    glEnd();

    //pintu
    glBegin(GL_QUADS);
    glColor3ub(150, 75, 0);
    if (waktu1) {
        glVertex3f(-2.0, 10.0, -8.0);
        glVertex3f(-2.0, 18.0, -8.0);
        glVertex3f(2.0, 18.0, -8.0);
        glVertex3f(2.0, 10.0, -8.0);
    }
    else {
        glVertex3f(2.0, 10.0, -8.0);
        glVertex3f(2.0, 18.0, -8.0);
        glVertex3f(2.0, 18.0, -12.0);
        glVertex3f(2.0, 10.0, -12.0);
    }
    glEnd();

    //object lantai 1
    glBegin(GL_QUADS);
    glColor3ub(21, 70, 102);
    //kursi 1
    glVertex3f(18.0, 0.0, -10.0);
    glVertex3f(18.0, 4.0, -10.0);
    glVertex3f(18.0, 4.0, -16.0);
    glVertex3f(18.0, 0.0, -16.0);

    glVertex3f(16.0, 0.0, -10.0);
    glVertex3f(16.0, 2.0, -10.0);
    glVertex3f(16.0, 2.0, -16.0);
    glVertex3f(16.0, 0.0, -16.0);

    glVertex3f(18.0, 0.0, -10.0);
    glVertex3f(18.0, 0.0, -16.0);
    glVertex3f(16.0, 0.0, -16.0);
    glVertex3f(16.0, 0.0, -10.0);

    glVertex3f(18.0, 2.0, -10.0);
    glVertex3f(18.0, 2.0, -16.0);
    glVertex3f(16.0, 2.0, -16.0);
    glVertex3f(16.0, 2.0, -10.0);

    glVertex3f(18.0, 0.0, -16.0);
    glVertex3f(18.0, 2.0, -16.0);
    glVertex3f(16.0, 2.0, -16.0);
    glVertex3f(16.0, 0.0, -16.0);

    glVertex3f(18.0, 0.0, -10.0);
    glVertex3f(18.0, 2.0, -10.0);
    glVertex3f(16.0, 2.0, -10.0);
    glVertex3f(16.0, 0.0, -10.0);

    glVertex3f(18.0, 2.0, -10.0);
    glVertex3f(18.0, 4.0, -10.0);
    glVertex3f(17.5, 4.0, -10.0);
    glVertex3f(17.5, 2.0, -10.0);

    glVertex3f(18.0, 2.0, -16.0);
    glVertex3f(18.0, 4.0, -16.0);
    glVertex3f(17.5, 4.0, -16.0);
    glVertex3f(17.5, 2.0, -16.0);

    glVertex3f(18.0, 4.0, -10.0);
    glVertex3f(18.0, 4.0, -16.0);
    glVertex3f(17.5, 4.0, -16.0);
    glVertex3f(17.5, 4.0, -10.0);

    //kursi 2
    glColor3ub(21, 70, 102);
    glVertex3f(-18.0, 0.0, -10.0);
    glVertex3f(-18.0, 4.0, -10.0);
    glVertex3f(-18.0, 4.0, -16.0);
    glVertex3f(-18.0, 0.0, -16.0);

    glVertex3f(-16.0, 0.0, -10.0);
    glVertex3f(-16.0, 2.0, -10.0);
    glVertex3f(-16.0, 2.0, -16.0);
    glVertex3f(-16.0, 0.0, -16.0);

    glVertex3f(-18.0, 0.0, -10.0);
    glVertex3f(-18.0, 0.0, -16.0);
    glVertex3f(-16.0, 0.0, -16.0);
    glVertex3f(-16.0, 0.0, -10.0);

    glVertex3f(-18.0, 2.0, -10.0);
    glVertex3f(-18.0, 2.0, -16.0);
    glVertex3f(-16.0, 2.0, -16.0);
    glVertex3f(-16.0, 2.0, -10.0);

    glVertex3f(-18.0, 0.0, -16.0);
    glVertex3f(-18.0, 2.0, -16.0);
    glVertex3f(-16.0, 2.0, -16.0);
    glVertex3f(-16.0, 0.0, -16.0);

    glVertex3f(-18.0, 0.0, -10.0);
    glVertex3f(-18.0, 2.0, -10.0);
    glVertex3f(-16.0, 2.0, -10.0);
    glVertex3f(-16.0, 0.0, -10.0);

    glVertex3f(-18.0, 2.0, -10.0);
    glVertex3f(-18.0, 4.0, -10.0);
    glVertex3f(-17.5, 4.0, -10.0);
    glVertex3f(-17.5, 2.0, -10.0);

    glVertex3f(-18.0, 2.0, -16.0);
    glVertex3f(-18.0, 4.0, -16.0);
    glVertex3f(-17.5, 4.0, -16.0);
    glVertex3f(-17.5, 2.0, -16.0);

    glVertex3f(-18.0, 4.0, -10.0);
    glVertex3f(-18.0, 4.0, -16.0);
    glVertex3f(-17.5, 4.0, -16.0);
    glVertex3f(-17.5, 4.0, -10.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(6.0, 0.0, -14.0);
    glVertex3f(-6.0, 8.0, -14.0);
    glVertex3f(6.0, 8.0, -14.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 8.0, -14.0);
    glVertex3f(6.0, 0.0, -14.0);
    glVertex3f(6.0, 8.0, -14.0);
    glEnd();

    //lemari
    glBegin(GL_QUADS);
    glColor3ub(206, 190, 165);
    glVertex3f(6.0, 0.0, -16.0);
    glVertex3f(-6.0, 0.0, -16.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(6.0, 0.0, -14.0);

    glVertex3f(6.0, 8.0, -16.0);
    glVertex3f(-6.0, 8.0, -16.0);
    glVertex3f(-6.0, 8.0, -14.0);
    glVertex3f(6.0, 8.0, -14.0);

    glVertex3f(6.0, 0.0, -16.0);
    glVertex3f(-6.0, 0.0, -16.0);
    glVertex3f(-6.0, 8.0, -16.0);
    glVertex3f(6.0, 8.0, -16.0);

    glVertex3f(6.0, 0.0, -14.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 8.0, -14.0);
    glVertex3f(6.0, 8.0, -14.0);

    glVertex3f(6.0, 0.0, -14.0);
    glVertex3f(6.0, 0.0, -16.0);
    glVertex3f(6.0, 8.0, -16.0);
    glVertex3f(6.0, 8.0, -14.0);

    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 0.0, -16.0);
    glVertex3f(-6.0, 8.0, -16.0);
    glVertex3f(-6.0, 8.0, -14.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(6.0, 0.0, -10.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(6.0, 4.0, -10.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(6.0, 0.0, -10.0);
    glVertex3f(6.0, 4.0, -10.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 4.0, -14.0);
    glVertex3f(6.0, 0.0, -12.0);
    glVertex3f(6.0, 4.0, -12.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(-6.0, 4.0, -14.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(-6.0, 0.0, -12.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(-6.0, 4.0, -12.0);
    glEnd();

    //meja
    glBegin(GL_QUADS);
    glColor3ub(205, 130, 35);
    glVertex3f(-4.0, 0.0, -14.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 0.0, -12.0);
    glVertex3f(-4.0, 0.0, -12.0);

    glVertex3f(-4.0, 4.0, -14.0);
    glVertex3f(-6.0, 4.0, -14.0);
    glVertex3f(-6.0, 4.0, -12.0);
    glVertex3f(-4.0, 4.0, -12.0);

    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 4.0, -14.0);
    glVertex3f(-6.0, 4.0, -12.0);
    glVertex3f(-6.0, 0.0, -12.0);

    glVertex3f(-4.0, 0.0, -14.0);
    glVertex3f(-4.0, 4.0, -14.0);
    glVertex3f(-4.0, 4.0, -12.0);
    glVertex3f(-4.0, 0.0, -12.0);

    glVertex3f(-4.0, 0.0, -14.0);
    glVertex3f(-6.0, 0.0, -14.0);
    glVertex3f(-6.0, 4.0, -14.0);
    glVertex3f(-4.0, 4.0, -14.0);

    glVertex3f(-6.0, 0.0, -12.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(6.0, 0.0, -10.0);
    glVertex3f(6.0, 0.0, -12.0);

    glVertex3f(-6.0, 4.0, -12.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(6.0, 4.0, -10.0);
    glVertex3f(6.0, 4.0, -12.0);

    glVertex3f(-6.0, 0.0, -12.0);
    glVertex3f(-6.0, 4.0, -12.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(-6.0, 0.0, -10.0);

    glVertex3f(6.0, 0.0, -12.0);
    glVertex3f(6.0, 4.0, -12.0);
    glVertex3f(6.0, 4.0, -10.0);
    glVertex3f(6.0, 0.0, -10.0);

    glVertex3f(6.0, 0.0, -10.0);
    glVertex3f(-6.0, 0.0, -10.0);
    glVertex3f(-6.0, 4.0, -10.0);
    glVertex3f(6.0, 4.0, -10.0);

    glVertex3f(6.0, 0.0, -12.0);
    glVertex3f(-6.0, 0.0, -12.0);
    glVertex3f(-6.0, 4.0, -12.0);
    glVertex3f(6.0, 4.0, -12.0);
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
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    //perbesar
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    //kanan
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    //perkecil
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    //kiri
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    //atas
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    //bawah
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    //transparan
    case '5':
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
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
