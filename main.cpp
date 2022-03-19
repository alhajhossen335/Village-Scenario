#include<stdio.h>
#include<iostream>
#include<GL/glut.h>
#include<math.h>

float cloud_X = 0;
float cloud_Y = 0;
float cloud_X2 = 0;
float cloud_Y2 = 0;
int cloudStatus = 1;
int boatStatus = 1;
float boatX = 0;
float boatY = 0;


void drawBoat();
void tree();
void scene();
void drawSun();
void cloud();
void cloud2();

void DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_POLYGON);
    for (int ii=0; ii<num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);

        float x = r * cosf(theta);
        float y = r * sinf(theta);

        glVertex2f(x+cx, y+cy);

    }
    glEnd();
}

void tree()
{
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.2, 0.5, 0.4);
    glVertex2i(338, 385);
    glVertex2i(340, 440);
    glVertex2i(338, 510);
    glVertex2i(358, 510);
    glVertex2i(350, 385);
    glVertex2i(362, 380);
    glEnd();

    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(328, 505, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(348, 505, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(368, 505, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(318, 525, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(338, 525, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(358, 525, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(378, 525, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(328, 545, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(348, 545, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(368, 545, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(348, 560, 20, 1000);

    glPopMatrix();



    // tree 2
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1.2, 0.5, 0.4);
    glVertex2i(938, 305);
    glVertex2i(940, 360);
    glVertex2i(938, 410);
    glVertex2i(958, 410);
    glVertex2i(950, 305);
    glVertex2i(962, 300);
    glEnd();

    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(928, 405, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(948, 405, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(968, 405, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(918, 425, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(938, 425, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(958, 425, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(978, 425, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(928, 445, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(948, 445, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(968, 445, 20, 1000);
    glColor3f(0.0, 0.8, 0.1);
    DrawCircle(948, 460, 20, 1000);

    glPopMatrix();

}

void scene()
{
    glPushMatrix();

    glBegin(GL_POLYGON);        //sky
    glColor3f(0.4, 0.5, 1.0);
    glVertex2i(0, 800);
    glVertex2i(1200, 800);
    glColor3f(0.7, 0.7, 1.0);
    glVertex2i(1200, 0);
    glVertex2i(0, 0);
    glEnd();

    glBegin(GL_POLYGON);       //Middle Ground
    glColor3f(0.0, 0.5, 0.0);
    glVertex2i(0, 200);
    glVertex2i(200, 350);
    glVertex2i(400, 400);
    glVertex2i(600, 350);
    glVertex2i(800, 320);
    glVertex2i(1000, 300);
    glColor3f(0.1, 0.9, 0.1);
    glVertex2i(1200, 200);
    glVertex2i(1200, 100);
    glVertex2i(0, 100);
    glEnd();


    glBegin(GL_POLYGON);       //River
    glColor3f(0.4, 0.1, 1.1);
    glVertex2i(0, 100);
    glVertex2i(200, 120);
    glVertex2i(400, 140);
    glVertex2i(600, 150);
    glColor3f(0.2, 0.3, 1.1);
    glVertex2i(800, 140);
    glVertex2i(1000, 120);
    glVertex2i(1200, 100);
    glVertex2i(1200, 0);
    glVertex2i(0, 0);
    glEnd();

    tree();

    glBegin(GL_POLYGON);       //House body
    glColor3f(0.9, 0.7, 0.1);
    glVertex2i(350, 380);
    glVertex2i(350, 460);
    glVertex2i(430, 460);
    glVertex2i(430, 380);
    glEnd();


    glBegin(GL_POLYGON);     //House
    glColor3f(0.9, 0.0, 0.0);
    glVertex2i(340, 460);
    glVertex2i(390, 500);
    glVertex2i(440, 460);
    glEnd();

    glBegin(GL_POLYGON); //Door
    glColor3f(1.0, 1.0, 0.0);
    glVertex2i(370, 380);
    glVertex2i(370, 430);
    glVertex2i(410, 430);
    glVertex2i(410, 380);
    glEnd();

    glBegin(GL_POLYGON);      //Mushroom
    glColor3f(1.0, 0.0, 0.0);
    glVertex2i(960, 315);
    glVertex2i(970, 330);
    glVertex2i(980, 330);
    glVertex2i(990, 315);
    glEnd();

    glBegin(GL_POLYGON);      //Mushroom
    glColor3f(0.9, 0.8, 0.5);
    glVertex2i(972, 300);
    glVertex2i(969, 315);
    glVertex2i(981, 315);
    glVertex2i(978, 300);
    glEnd();


 // house 2

 glBegin(GL_POLYGON);       //House 2
    glColor3f(0.2, 0.2, 0.4);
    glVertex2i(840, 305);
    glVertex2i(840, 385);
    glVertex2i(920, 385);
    glVertex2i(920, 305);
    glEnd();

    glBegin(GL_POLYGON);     //House2
    glColor3f(0.3, 0.4, 0.5);
    glVertex2i(830, 385);
    glVertex2i(880, 425);
    glVertex2i(930, 385);
    glEnd();

    glBegin(GL_POLYGON); //Door 2
    glColor3f(0.6, 0.3, 0.4);
    glVertex2i(860, 305);
    glVertex2i(860, 355);
    glVertex2i(900, 355);
    glVertex2i(900, 305);
    glEnd();



    glBegin(GL_POLYGON);    // Grass 1
    glColor3f(0.0, 0.7, 0.1);
    glVertex2i(440, 375);
    glVertex2i(430, 390);
    glVertex2i(440, 385);
    glVertex2i(435, 400);
    glVertex2i(445, 390);
    glVertex2i(447, 410);
    glVertex2i(450, 390);
    glVertex2i(460, 400);
    glVertex2i(455, 385);
    glVertex2i(465, 390);
    glVertex2i(455, 375);
    glEnd();


    glBegin(GL_POLYGON);   // Grass2
    glColor3f(0.0, 0.7, 0.1);
    glVertex2i(780, 315);
    glVertex2i(770, 330);
    glVertex2i(780, 325);
    glVertex2i(775, 340);
    glVertex2i(785, 330);
    glVertex2i(787, 350);
    glVertex2i(790, 330);
    glVertex2i(800, 340);
    glVertex2i(795, 325);
    glVertex2i(805, 330);
    glVertex2i(795, 315);
    glEnd();

    glBegin(GL_POLYGON);  //Grass 3
    glColor3f(0.0, 0.7, 0.1);
    glVertex2i(810, 310);
    glVertex2i(800, 325);
    glVertex2i(810, 320);
    glVertex2i(805, 335);
    glVertex2i(815, 325);
    glVertex2i(817, 345);
    glVertex2i(820, 325);
    glVertex2i(830, 335);
    glVertex2i(825, 320);
    glVertex2i(835, 325);
    glVertex2i(825, 310);
    glEnd();


     glBegin(GL_POLYGON);   //Grass 4 big
    glColor3f(0.0, 0.6, 0.1);
    glVertex2i(1135, 100);
    glVertex2i(1120, 120);
    glVertex2i(1110, 130);
    glVertex2i(1130, 120);
    glVertex2i(1120, 150);
    glVertex2i(1140, 130);
    glVertex2i(1145, 170);
    glColor3f(0.8, 0.8, 0.1);
    glVertex2i(1150, 130);
    glVertex2i(1170, 150);
    glVertex2i(1160, 120);
    glVertex2i(1180, 130);
    glVertex2i(1170, 120);
    glVertex2i(1155, 100);
    glEnd();



    glBegin(GL_POLYGON);     //Grass 5 big
    glColor3f(0.0, 0.5, 0.1);
    glVertex2i(1085, 105);
    glVertex2i(1070, 125);
    glVertex2i(1060, 135);
    glVertex2i(1080, 125);

    glVertex2i(1070, 155);
    glVertex2i(1090, 135);
    glVertex2i(1095, 175);
    glColor3f(0.8, 0.8, 0.1);
    glVertex2i(1100, 135);
    glVertex2i(1120, 155);
    glVertex2i(1110, 125);
    glVertex2i(1130, 135);
    glVertex2i(1120, 125);
    glVertex2i(1105, 105);
    glEnd();



//245
    glBegin(GL_POLYGON);       //Grass 6 big
    glColor3f(0.0, 0.6, 0.1);
    glVertex2i(30, 100);
    glVertex2i(20, 120);
    glVertex2i(10, 130);
    glVertex2i(30, 120);
    glVertex2i(20, 150);
    glVertex2i(40, 130);
    glVertex2i(45, 170);
    glColor3f(0.8, 0.8, 0.1);
    glVertex2i(50, 130);
    glVertex2i(70, 150);
    glVertex2i(60, 120);
    glVertex2i(80, 130);
    glVertex2i(70, 120);
    glVertex2i(55, 100);
    glEnd();
//263
    glBegin(GL_POLYGON);    //Grass 7 big
    glColor3f(0.0, 0.6, 0.1);
    glVertex2i(95, 110);
    glVertex2i(80, 130);
    glVertex2i(70, 140);
    glVertex2i(90, 130);
    glVertex2i(80, 160);
    glVertex2i(100, 130);
    glColor3f(0.8, 0.7, 0.1);
    glVertex2i(105, 180);
    glVertex2i(110, 140);
    glVertex2i(130, 160);
    glVertex2i(120, 130);
    glVertex2i(140, 140);
    glVertex2i(130, 130);
    glVertex2i(115, 110);
    glEnd();

    glPopMatrix();

}

void drawSun()
{
    glPushMatrix();

    glColor3f(3.0, 1.0, 0.5);
    DrawCircle(900, 700, 40, 1000);
    glPopMatrix();
}

void drawCloud()
{
    glPushMatrix();

    glColor3f(0.8, 0.8, 0.8);        //First cloud
    DrawCircle(200, 690, 25, 1000);
    DrawCircle(230, 700, 25, 1000);
    DrawCircle(180, 700, 25, 1000);
    DrawCircle(210, 720, 25, 1000);

    DrawCircle(600, 590, 25, 1000);
    DrawCircle(630, 600, 25, 1000);
    DrawCircle(580, 600, 25, 1000);
    DrawCircle(610, 620, 25, 1000);

    glPopMatrix();
}

void drawBoat()
{
    glPushMatrix();

    glBegin(GL_POLYGON); //Boat Starts
    glColor3f(0.9, 0.8, 0.1);
    glVertex2i(270, 155);
    glVertex2i(375, 165);
    glVertex2i(480, 155);
    glColor3f(1.9, 0.9, 0.1);
    glVertex2i(480, 20);
    glVertex2i(270, 20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.1, 0.1);
    glVertex2i(250, 20);
    glVertex2i(180, 100);
    glVertex2i(380, 80);
    glColor3f(0.8, 0.3, 0.1);
    glVertex2i(600, 100);
    glVertex2i(500, 20);
    glEnd();

    glPopMatrix();
}

void myInit(void)
{
    glClearColor(0.0, 0.0, 1.0, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glPointSize(0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0.0, 800.0);//gluOrtho2D — define a 2D orthographic projection matrix.
}

void keyboard(unsigned char key, int x, int y)
{

    switch (key){
    case 'b':            //boat start
        boatStatus = 1;
        break;
    case 't':             //boat stop
        boatStatus = 0;
        break;
    case 'c':            //cloud start
        cloudStatus = 1;
        break;
    case 'd':          //cloud stop
        cloudStatus = 0;
        break;
    default:
        break;
    }
}

void boat()
{
    if (boatStatus == 1)
    {
        boatX += .5;
    }
    if (boatX>1000)
    {
        boatX = -600;
    }
    glPushMatrix();
    glTranslatef(boatX, boatY, 0);
    drawBoat();
    glPopMatrix();
}


void cloud()
{
    if (cloudStatus == 1)
    {
        cloud_X += 0.2;
    }
    if (cloud_X > 1100)
    {
        cloud_X = -650;
    }


    glPushMatrix();
    glTranslatef(cloud_X, cloud_Y, 0.0);
    drawCloud();

    glPopMatrix();
}

void cloud2()
{
    if (cloudStatus == 1)
    {
        cloud_X2 += 0.3;
    }
    if (cloud_X2 > 600)
    {
        cloud_X2 = -1150;
    }
    glPushMatrix();
    glTranslatef(cloud_X2 + 500, cloud_Y2 + 50, 0.0);
    drawCloud();
    glPopMatrix();
}
void myDisplay(void)
{
    scene();
    drawSun();

    boat();
    cloud();
    cloud2();


    glFlush();

    glutPostRedisplay();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1350, 700);
    glutInitWindowPosition(0, 0);

    glutCreateWindow("Scenery");
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}


