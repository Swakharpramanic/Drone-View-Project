#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


GLint position = 0;
GLint positionBoat1 = 0;
GLint positionBoat2 =0;

GLint speed = 10;
GLint speedBoat1 = 6;
GLint speedBoat2 = 6;

GLint positionShip=0; GLint positionCar1 = -510;
GLint speedShip=17; GLint speedCar1 = 17;

void update(int value)
{

    if(position > 1000)
        position = -500;

    position += speed;
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}
void updateBoat1(int value)
{

    if(positionBoat1 > 500)
        positionBoat1 = -100;
    positionBoat1 += speedBoat1;
    glutPostRedisplay();
    glutTimerFunc(100, updateBoat1, 0);
}

void updateBoat2(int value)
{

    if(positionBoat2 > 500)
        positionBoat2 = -100;
    positionBoat2 += speedBoat2;
    glutPostRedisplay();
    glutTimerFunc(100, updateBoat2, 0);
}
void updateShip(int value)
{
    if(positionShip > 1000)
        positionShip = -600;
    positionShip += speedShip;
    glutPostRedisplay();
    glutTimerFunc(100, updateShip, 0);

}void updateCar1(int value)
{
    if(positionCar1 > 1000)
        positionCar1 = -510;
    positionCar1 += speedCar1;
    glutPostRedisplay();
    glutTimerFunc(100, updateCar1, 0);
}


void init()
{

    glClearColor(0,191,255,0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(0.0,1000.0,500.0,0);
}
void cars()
{
    glPushMatrix();
    glTranslatef(-positionCar1,0, 0);
    glColor3ub (255,102,102);
    glBegin(GL_QUADS);
    glVertex2i(801,267);
    glVertex2i(801,304);
    glVertex2i(789,301);
    glVertex2i(789,270);

    glVertex2i(801,267);
    glVertex2i(801,304);
    glVertex2i(873,304);
    glVertex2i(873,267);
    glEnd();

    glColor3ub (120,255,255);
    glBegin(GL_QUADS);
    glVertex2i(801,272);
    glVertex2i(801,298);
    glVertex2i(812,294);
    glVertex2i(812,277);

    glVertex2i(852,278);
    glVertex2i(852,293);
    glVertex2i(863,297);
    glVertex2i(863,273);

    glVertex2i(814,270);
    glVertex2i(818,275);
    glVertex2i(848,275);
    glVertex2i(852,270);

    glVertex2i(818,297);
    glVertex2i(814,301);
    glVertex2i(852,301);
    glVertex2i(848,297);

    glVertex2i(852,278);
    glVertex2i(852,293);
    glVertex2i(863,297);
    glVertex2i(863,273);

    glEnd();
    glColor3ub (204,204,0);
    glBegin(GL_QUADS);
    glVertex2i(816,278);
    glVertex2i(816,294);
    glVertex2i(849,294);
    glVertex2i(849,278);

    glEnd();

    glColor3ub (0,0,51);
    glBegin(GL_QUADS);
    glVertex2i(513,270);
    glVertex2i(513,303);
    glVertex2i(624,303);
    glVertex2i(624,270);

    glEnd();
    glColor3ub (204,0,102);
    glBegin(GL_QUADS);
    glVertex2i(503,270);
    glVertex2i(503,303);
    glVertex2i(513,303);
    glVertex2i(513,270);

    glEnd();
    glColor3ub (120,255,255);
    glBegin(GL_QUADS);
    glVertex2i(504,275);
    glVertex2i(504,298);
    glVertex2i(510,298);
    glVertex2i(510,275);

    glEnd();
    glColor3ub (204,102,0);
    glBegin(GL_QUADS);
    glVertex2i(503,270);
    glVertex2i(486,274);
    glVertex2i(486,301);
    glVertex2i(503,303);
    glEnd();
    glPopMatrix();
//cars out
    glPushMatrix();
    glTranslatef(positionCar1,0, 0);
    glColor3ub (0,0,153);
    glBegin(GL_QUADS);
    glVertex2i(6,172);
    glVertex2i(81,172);
    glVertex2i(81,137);
    glVertex2i(6,137);

    glEnd();

    glColor3ub (204,102,0);
    glBegin(GL_QUADS);
    glVertex2i(82,172);
    glVertex2i(98,172);
    glVertex2i(98,137);
    glVertex2i(82,137);

    glVertex2i(105,143);
    glVertex2i(105,167);
    glVertex2i(118,167);
    glVertex2i(118,143);

    glEnd();
    glColor3ub (0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(82,172);
    glVertex2i(98,172);
    glVertex2i(82,156);

    glVertex2i(82,154);
    glVertex2i(98,137);
    glVertex2i(82,137);
    glEnd();

    glColor3ub (255,51,51);
    glBegin(GL_QUADS);
    glVertex2i(99,137);
    glVertex2i(99,172);
    glVertex2i(139,172);
    glVertex2i(139,137);

    glVertex2i(129,127);
    glVertex2i(129,183);
    glVertex2i(132,183);
    glVertex2i(132,127);
    glEnd();
    glColor3ub (204,102,0);
    glBegin(GL_QUADS);
    glVertex2i(105,143);
    glVertex2i(105,167);
    glVertex2i(118,167);
    glVertex2i(118,143);

    glEnd();
    glColor3ub (0,255,255);//glass
    glBegin(GL_QUADS);
    glVertex2i(123,138);
    glVertex2i(123,171);
    glVertex2i(138,171);
    glVertex2i(138,138);

    glEnd();


    glColor3ub (204,102,0);
    glBegin(GL_QUADS);
    glVertex2i(355,135);
    glVertex2i(355,173);
    glVertex2i(432,173);
    glVertex2i(432,135);

    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(360,136);
    glVertex2i(360,138);
    glVertex2i(423,138);
    glVertex2i(423,136);

    glVertex2i(360,170);
    glVertex2i(360,172);
    glVertex2i(423,172);
    glVertex2i(423,170);

    glVertex2i(433,135);
    glVertex2i(433,173);
    glVertex2i(465,173);
    glVertex2i(465,135);

    glVertex2i(445,123);
    glVertex2i(445,184);
    glVertex2i(448,184);
    glVertex2i(448,123);

    glEnd();

    glColor3ub (0,255,255);
    glBegin(GL_QUADS);
    glVertex2i(437,139);
    glVertex2i(437,169);
    glVertex2i(456,169);
    glVertex2i(456,139);

    glEnd();
    glColor3ub (0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(445,123);
    glVertex2i(445,184);
    glVertex2i(448,184);
    glVertex2i(448,123);

    glEnd();
    glPopMatrix();


}
void trainDay()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //Train Last Compartment
    glPushMatrix();
    glTranslatef(position,0,0);
    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(31,121);
    glVertex2i(118,121);
    glVertex2i(118,53);
    glVertex2i(31,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(34,119);
    glVertex2i(114,119);
    glVertex2i(114,54);
    glVertex2i(34,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(37,95);
    glVertex2i(55,95);
    glVertex2i(55,82);
    glVertex2i(37,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(42,90);
    glVertex2i(51,90);
    glVertex2i(51,87);
    glVertex2i(42,87);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(72,95);
    glVertex2i(92,95);
    glVertex2i(92,82);
    glVertex2i(72,82);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(78,90);
    glVertex2i(87,90);
    glVertex2i(87,87);
    glVertex2i(78,87);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(132,121);
    glVertex2i(219,121);
    glVertex2i(219,53);
    glVertex2i(132,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(135,119);
    glVertex2i(215,119);
    glVertex2i(215,54);
    glVertex2i(135,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(138,95);
    glVertex2i(156,95);
    glVertex2i(156,82);
    glVertex2i(138,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(143,90);
    glVertex2i(152,90);
    glVertex2i(152,87);
    glVertex2i(143,87);
    glEnd();


    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(173,95);
    glVertex2i(193,95);
    glVertex2i(193,82);
    glVertex2i(173,82);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(173,95);
    glVertex2i(193,95);
    glVertex2i(193,82);
    glVertex2i(173,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(179,90);
    glVertex2i(188,90);
    glVertex2i(188,87);
    glVertex2i(179,87);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(233,121);
    glVertex2i(320,121);
    glVertex2i(320,53);
    glVertex2i(233,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(236,119);
    glVertex2i(316,119);
    glVertex2i(316,54);
    glVertex2i(236,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(239,95);
    glVertex2i(257,95);
    glVertex2i(257,82);
    glVertex2i(239,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(244,90);
    glVertex2i(253,90);
    glVertex2i(253,87);
    glVertex2i(244,87);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(274,95);
    glVertex2i(294,95);
    glVertex2i(294,82);
    glVertex2i(274,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(280,90);
    glVertex2i(289,90);
    glVertex2i(289,87);
    glVertex2i(280,87);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(24,102);
    glVertex2i(31,102);
    glVertex2i(31,92);
    glVertex2i(24,92);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(24,81);
    glVertex2i(31,81);
    glVertex2i(31,70);
    glVertex2i(24,70);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(117,93);
    glVertex2i(132,93);
    glVertex2i(132,86);
    glVertex2i(117,86);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(218,93);
    glVertex2i(235,93);
    glVertex2i(235,86);
    glVertex2i(218,86);
    glEnd();

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(320,121);
    glVertex2i(330,121);
    glVertex2i(330,53);
    glVertex2i(320,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_TRIANGLES);
    glVertex2i(330,121);
    glVertex2i(401,86);
    glVertex2i(330,53);
    glEnd();

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(332,107);
    glVertex2i(352,107);
    glVertex2i(352,68);
    glVertex2i(332,68);
    glEnd();
//Train Light
    glColor3ub (255,255,0);
    glBegin(GL_QUADS);
    glVertex2i(320,95);
    glVertex2i(330,95);
    glVertex2i(330,80);
    glVertex2i(320,80);
    glEnd();
    glPopMatrix();
}

void trainNight()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //Train Last Compartment
    glPushMatrix();
    glTranslatef(position,0,0);
    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(31,121);
    glVertex2i(118,121);
    glVertex2i(118,53);
    glVertex2i(31,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(34,119);
    glVertex2i(114,119);
    glVertex2i(114,54);
    glVertex2i(34,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(37,95);
    glVertex2i(55,95);
    glVertex2i(55,82);
    glVertex2i(37,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(42,90);
    glVertex2i(51,90);
    glVertex2i(51,87);
    glVertex2i(42,87);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(72,95);
    glVertex2i(92,95);
    glVertex2i(92,82);
    glVertex2i(72,82);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(78,90);
    glVertex2i(87,90);
    glVertex2i(87,87);
    glVertex2i(78,87);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(132,121);
    glVertex2i(219,121);
    glVertex2i(219,53);
    glVertex2i(132,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(135,119);
    glVertex2i(215,119);
    glVertex2i(215,54);
    glVertex2i(135,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(138,95);
    glVertex2i(156,95);
    glVertex2i(156,82);
    glVertex2i(138,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(143,90);
    glVertex2i(152,90);
    glVertex2i(152,87);
    glVertex2i(143,87);
    glEnd();


    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(173,95);
    glVertex2i(193,95);
    glVertex2i(193,82);
    glVertex2i(173,82);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(173,95);
    glVertex2i(193,95);
    glVertex2i(193,82);
    glVertex2i(173,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(179,90);
    glVertex2i(188,90);
    glVertex2i(188,87);
    glVertex2i(179,87);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(233,121);
    glVertex2i(320,121);
    glVertex2i(320,53);
    glVertex2i(233,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(236,119);
    glVertex2i(316,119);
    glVertex2i(316,54);
    glVertex2i(236,54);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(239,95);
    glVertex2i(257,95);
    glVertex2i(257,82);
    glVertex2i(239,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(244,90);
    glVertex2i(253,90);
    glVertex2i(253,87);
    glVertex2i(244,87);
    glEnd();

    glColor3ub (245,255,250);
    glBegin(GL_QUADS);
    glVertex2i(274,95);
    glVertex2i(294,95);
    glVertex2i(294,82);
    glVertex2i(274,82);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(280,90);
    glVertex2i(289,90);
    glVertex2i(289,87);
    glVertex2i(280,87);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(24,102);
    glVertex2i(31,102);
    glVertex2i(31,92);
    glVertex2i(24,92);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_QUADS);
    glVertex2i(24,81);
    glVertex2i(31,81);
    glVertex2i(31,70);
    glVertex2i(24,70);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(117,93);
    glVertex2i(132,93);
    glVertex2i(132,86);
    glVertex2i(117,86);
    glEnd();

    glColor3ub (1,1,1);
    glBegin(GL_QUADS);
    glVertex2i(218,93);
    glVertex2i(235,93);
    glVertex2i(235,86);
    glVertex2i(218,86);
    glEnd();

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(320,121);
    glVertex2i(330,121);
    glVertex2i(330,53);
    glVertex2i(320,53);
    glEnd();

    glColor3ub (25,25,112);
    glBegin(GL_TRIANGLES);
    glVertex2i(330,121);
    glVertex2i(401,86);
    glVertex2i(330,53);
    glEnd();

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(332,107);
    glVertex2i(352,107);
    glVertex2i(352,68);
    glVertex2i(332,68);
    glEnd();
//Train Light
    glColor3ub (255,255,0);
    glBegin(GL_QUADS);
    glVertex2i(320,95);
    glVertex2i(330,95);
    glVertex2i(330,80);
    glVertex2i(320,80);
    glEnd();
//light transition
    glColor3ub (238,232,170);
    glBegin(GL_TRIANGLES);
    glVertex2i(325,88);
    glVertex2i(431,122);
    glVertex2i(431,53);
    glEnd();
    glPopMatrix();
}

void  myDisplay_night()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub (64,64,64);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(1000,0);
    glVertex2i(1000,500);
    glVertex2i(0,500);
    glEnd();

    glPushMatrix(); //first boat
    glTranslatef(0,-positionBoat1, 0);

    glColor3ub (240, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(150,359);
    glVertex2i(122,409);
    glVertex2i(133,491);
    glVertex2i(167,491);
    glVertex2i(178,409);
    glEnd();
    glColor3ub (0, 255, 127);
    glBegin(GL_TRIANGLES);
    glVertex2i(151,373);
    glVertex2i(135,406);
    glVertex2i(167,406);
    glEnd();

    glColor3ub (70,130,180);
    glBegin(GL_QUADS);
    glVertex2i(135,414);
    glVertex2i(135,439);
    glVertex2i(166,439);
    glVertex2i(166,414);

    glColor3ub (159, 182,205);
    glBegin(GL_QUADS);
    glVertex2i(135,445);
    glVertex2i(142,480);
    glVertex2i(158,480);
    glVertex2i(166,445);

    glColor3ub (224,238,238);
    glBegin(GL_QUADS);
    glVertex2i(137,456);
    glVertex2i(138,462);
    glVertex2i(163,462);
    glVertex2i(163,456);

    glEnd();

    glColor3ub (224,238,238);
    glBegin(GL_TRIANGLES);
    glVertex2i(143,417);
    glVertex2i(139,431);
    glVertex2i(147,431);

    glBegin(GL_TRIANGLES);
    glVertex2i(158,417);
    glVertex2i(154,431);
    glVertex2i(162,431);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,positionBoat2, 0);
    glColor3ub (139, 69, 19); //second boat
    glBegin(GL_TRIANGLES);
    glVertex2i(757,12);
    glVertex2i(736,74);
    glVertex2i(779,74);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(736,74);
    glVertex2i(757,136);
    glVertex2i(779,74);
    glEnd();

    glColor3ub (255, 165, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(757,30);
    glVertex2i(739,73);
    glVertex2i(778,73);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(741,77);
    glVertex2i(758,119);
    glVertex2i(774,77);
    glEnd();

    glColor3ub (139,37,0);
    glBegin(GL_QUADS);
    glVertex2i(749,49);
    glVertex2i(747,54);
    glVertex2i(767,54);
    glVertex2i(765,49);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(744,62);
    glVertex2i(743,65);
    glVertex2i(771,65);
    glVertex2i(770,62);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(739,73);
    glVertex2i(741,77);
    glVertex2i(774,77);
    glVertex2i(775,73);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(744,84);
    glVertex2i(745,87);
    glVertex2i(770,87);
    glVertex2i(772,84);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(749,97);
    glVertex2i(751,101);
    glVertex2i(764,101);
    glVertex2i(766,97);

    glEnd();

    glColor3ub (139,71,38);   //3rd boat
    glBegin(GL_POLYGON);
    glVertex2i(876,26);
    glVertex2i(847,60);
    glVertex2i(847,121);
    glVertex2i(906,121);
    glVertex2i(906,60);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(847,121);
    glVertex2i(875,161);
    glVertex2i(905,121);
    glEnd();
    glColor3ub (255, 99, 71);
    glBegin(GL_TRIANGLES);
    glVertex2i(876,33);
    glVertex2i(867,47);
    glVertex2i(886,47);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(864,135);
    glVertex2i(876,151);
    glVertex2i(889,135);

    glEnd();

    glColor3ub (188,238,104);
    glBegin(GL_QUADS);
    glVertex2i(865,51);
    glVertex2i(857,74);
    glVertex2i(895,74);
    glVertex2i(888,51);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(854,81);
    glVertex2i(854,98);
    glVertex2i(898,98);
    glVertex2i(898,81);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(854,104);
    glVertex2i(862,130);
    glVertex2i(889,130);
    glVertex2i(897,104);
    glEnd();

    glColor3ub (0,139,0);
    glBegin(GL_QUADS);
    glVertex2i(868,55);
    glVertex2i(868,73);
    glVertex2i(873,73);
    glVertex2i(873,55);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(879,55);
    glVertex2i(879,73);
    glVertex2i(884,73);
    glVertex2i(884,55);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(861,84);
    glVertex2i(861,88);
    glVertex2i(892,88);
    glVertex2i(892,84);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(861,91);
    glVertex2i(861,95);
    glVertex2i(892,95);
    glVertex2i(892,91);

    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(867,107);
    glVertex2i(867,125);
    glVertex2i(872,125);
    glVertex2i(872,107);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(878,107);
    glVertex2i(877,125);
    glVertex2i(883,125);
    glVertex2i(883,107);


    glEnd();
    //glFlush ();
    glPopMatrix();


//Train Path

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(0,123);
    glVertex2i(1000,123);
    glVertex2i(1000,51);
    glVertex2i(0,51);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,116);
    glVertex2i(1000,116);
    glVertex2i(1000,109);
    glVertex2i(0,109);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(0,64);
    glVertex2i(1000,64);
    glVertex2i(1000,56);
    glVertex2i(0,56);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(10,123);
    glVertex2i(20,123);
    glVertex2i(20,51);
    glVertex2i(10,51);

    glVertex2i(35,123);
    glVertex2i(45,123);
    glVertex2i(45,51);
    glVertex2i(35,51);

    glVertex2i(60,123);
    glVertex2i(70,123);
    glVertex2i(70,51);
    glVertex2i(60,51);

    glVertex2i(85,123);
    glVertex2i(95,123);
    glVertex2i(95,51);
    glVertex2i(85,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(110,123);
    glVertex2i(120,123);
    glVertex2i(120,51);
    glVertex2i(110,51);

    glVertex2i(135,123);
    glVertex2i(145,123);
    glVertex2i(145,51);
    glVertex2i(135,51);

    glVertex2i(160,123);
    glVertex2i(170,123);
    glVertex2i(170,51);
    glVertex2i(160,51);

    glVertex2i(185,123);
    glVertex2i(195,123);
    glVertex2i(195,51);
    glVertex2i(185,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(210,123);
    glVertex2i(220,123);
    glVertex2i(220,51);
    glVertex2i(210,51);

    glVertex2i(235,123);
    glVertex2i(245,123);
    glVertex2i(245,51);
    glVertex2i(235,51);

    glVertex2i(260,123);
    glVertex2i(270,123);
    glVertex2i(270,51);
    glVertex2i(260,51);

    glVertex2i(285,123);
    glVertex2i(295,123);
    glVertex2i(295,51);
    glVertex2i(285,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(310,123);
    glVertex2i(320,123);
    glVertex2i(320,51);
    glVertex2i(310,51);

    glVertex2i(335,123);
    glVertex2i(345,123);
    glVertex2i(345,51);
    glVertex2i(335,51);

    glVertex2i(360,123);
    glVertex2i(370,123);
    glVertex2i(370,51);
    glVertex2i(360,51);

    glVertex2i(385,123);
    glVertex2i(395,123);
    glVertex2i(395,51);
    glVertex2i(385,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(410,123);
    glVertex2i(420,123);
    glVertex2i(420,51);
    glVertex2i(410,51);

    glVertex2i(435,123);
    glVertex2i(445,123);
    glVertex2i(445,51);
    glVertex2i(435,51);

    glVertex2i(460,123);
    glVertex2i(470,123);
    glVertex2i(470,51);
    glVertex2i(460,51);

    glVertex2i(485,123);
    glVertex2i(495,123);
    glVertex2i(495,51);
    glVertex2i(485,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(510,123);
    glVertex2i(520,123);
    glVertex2i(520,51);
    glVertex2i(510,51);

    glVertex2i(535,123);
    glVertex2i(545,123);
    glVertex2i(545,51);
    glVertex2i(535,51);

    glVertex2i(560,123);
    glVertex2i(570,123);
    glVertex2i(570,51);
    glVertex2i(560,51);

    glVertex2i(585,123);
    glVertex2i(595,123);
    glVertex2i(595,51);
    glVertex2i(585,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(610,123);
    glVertex2i(620,123);
    glVertex2i(620,51);
    glVertex2i(610,51);

    glVertex2i(635,123);
    glVertex2i(645,123);
    glVertex2i(645,51);
    glVertex2i(635,51);

    glVertex2i(660,123);
    glVertex2i(670,123);
    glVertex2i(670,51);
    glVertex2i(660,51);

    glVertex2i(685,123);
    glVertex2i(695,123);
    glVertex2i(695,51);
    glVertex2i(685,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(710,123);
    glVertex2i(720,123);
    glVertex2i(720,51);
    glVertex2i(710,51);

    glVertex2i(735,123);
    glVertex2i(745,123);
    glVertex2i(745,51);
    glVertex2i(735,51);

    glVertex2i(760,123);
    glVertex2i(770,123);
    glVertex2i(770,51);
    glVertex2i(760,51);

    glVertex2i(785,123);
    glVertex2i(795,123);
    glVertex2i(795,51);
    glVertex2i(785,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(810,123);
    glVertex2i(820,123);
    glVertex2i(820,51);
    glVertex2i(810,51);

    glVertex2i(835,123);
    glVertex2i(845,123);
    glVertex2i(845,51);
    glVertex2i(835,51);

    glVertex2i(860,123);
    glVertex2i(870,123);
    glVertex2i(870,51);
    glVertex2i(860,51);

    glVertex2i(885,123);
    glVertex2i(895,123);
    glVertex2i(895,51);
    glVertex2i(885,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(910,123);
    glVertex2i(920,123);
    glVertex2i(920,51);
    glVertex2i(910,51);

    glVertex2i(935,123);
    glVertex2i(945,123);
    glVertex2i(945,51);
    glVertex2i(935,51);

    glVertex2i(960,123);
    glVertex2i(970,123);
    glVertex2i(970,51);
    glVertex2i(960,51);

    glVertex2i(985,123);
    glVertex2i(995,123);
    glVertex2i(995,51);
    glVertex2i(985,51);
    glEnd();
    trainNight();

//bridge start
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(0,123);
    glVertex2i(1000, 123);
    glVertex2i(1000,350);
    glVertex2i(0,350);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,127);
    glVertex2i(1000, 127);
    glVertex2i(1000,133);
    glVertex2i(0,133);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,230);
    glVertex2i(1000, 230);
    glVertex2i(1000,240);
    glVertex2i(0,240);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,340);
    glVertex2i(1000, 340);
    glVertex2i(1000,347);
    glVertex2i(0,347);
    glEnd();

//crossing

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,175);
    glVertex2i(200,175);
    glVertex2i(100,180);
    glVertex2i(200,180);
    glVertex2i(200,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,175);
    glVertex2i(300,175);
    glVertex2i(300,180);
    glVertex2i(400,180);
    glVertex2i(400,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(500,175);
    glVertex2i(500,175);
    glVertex2i(500,180);
    glVertex2i(600,180);
    glVertex2i(600,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(700,175);
    glVertex2i(700,175);
    glVertex2i(700,180);
    glVertex2i(800,180);
    glVertex2i(800,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(900,175);
    glVertex2i(900,175);
    glVertex2i(900,180);
    glVertex2i(1000,180);
    glVertex2i(1000,175);
    glEnd();

//crossing downside

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,290);
    glVertex2i(200,290);
    glVertex2i(100,295);
    glVertex2i(200,295);
    glVertex2i(200,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,290);
    glVertex2i(400,290);
    glVertex2i(300,295);
    glVertex2i(400,295);
    glVertex2i(400,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(500,290);
    glVertex2i(600,290);
    glVertex2i(500,295);
    glVertex2i(600,295);
    glVertex2i(600,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(700,290);
    glVertex2i(800,290);
    glVertex2i(700,295);
    glVertex2i(800,295);
    glVertex2i(800,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(900,290);
    glVertex2i(1000,290);
    glVertex2i(900,295);
    glVertex2i(1000,295);
    glVertex2i(1000,290);
    glEnd();
   // cars();

    //trainNight();


//ship start
    glPushMatrix();
    glTranslatef(positionShip,0, 0);
    glColor3ub (30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2i(696,395);
    glVertex2i(642,370);
    glVertex2i(460,370);
    glVertex2i(460,420);
    glVertex2i(642,420);
    glEnd();


    glColor3ub (0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(675,395);
    glVertex2i(642,379);
    glVertex2i(642,412);
    glEnd();



    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(530,373);
    glVertex2i(530,383);
    glVertex2i(539,383);
    glVertex2i(539,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(530,397);
    glVertex2i(530,417);
    glVertex2i(539,417);
    glVertex2i(539,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(547,373);
    glVertex2i(547,393);
    glVertex2i(556,393);
    glVertex2i(556,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(547,397);
    glVertex2i(547,417);
    glVertex2i(556,417);
    glVertex2i(556,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(566,373);
    glVertex2i(566,393);
    glVertex2i(575,393);
    glVertex2i(575,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(566,397);
    glVertex2i(566,417);
    glVertex2i(575,417);
    glVertex2i(575,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(586,373);
    glVertex2i(586,393);
    glVertex2i(595,393);
    glVertex2i(595,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(586,397);
    glVertex2i(586,417);
    glVertex2i(595,417);
    glVertex2i(595,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(602,373);
    glVertex2i(602,393);
    glVertex2i(611,393);
    glVertex2i(611,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(602,397);
    glVertex2i(602,417);
    glVertex2i(611,417);
    glVertex2i(611,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(617,373);
    glVertex2i(617,393);
    glVertex2i(626,393);
    glVertex2i(626,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(617,397);
    glVertex2i(617,417);
    glVertex2i(626,417);
    glVertex2i(626,397);

    glEnd();


    glColor3ub (0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2i(466,385);
    glVertex2i(466,405);
    glVertex2i(475,405);
    glVertex2i(475,385);
    glEnd();

    glColor3ub (255, 69, 0);
    glBegin(GL_QUADS);
    glVertex2i(479,374);
    glVertex2i(479,416);
    glVertex2i(509,416);
    glVertex2i(509,374);
    glEnd();

    glColor3ub (255, 255, 0);
    glBegin(GL_QUADS);
    glVertex2i(483,378);
    glVertex2i(483,412);
    glVertex2i(505,412);
    glVertex2i(505,378);
    glEnd();
    glPopMatrix();
    cars();
    glFlush();
}

void  myDisplay_day()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix(); //first boat
    glTranslatef(0,-positionBoat1, 0);

    glColor3ub (240, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(150,359);
    glVertex2i(122,409);
    glVertex2i(133,491);
    glVertex2i(167,491);
    glVertex2i(178,409);
    glEnd();
    glColor3ub (0, 255, 127);
    glBegin(GL_TRIANGLES);
    glVertex2i(151,373);
    glVertex2i(135,406);
    glVertex2i(167,406);
    glEnd();

    glColor3ub (70,130,180);
    glBegin(GL_QUADS);
    glVertex2i(135,414);
    glVertex2i(135,439);
    glVertex2i(166,439);
    glVertex2i(166,414);

    glColor3ub (159, 182,205);
    glBegin(GL_QUADS);
    glVertex2i(135,445);
    glVertex2i(142,480);
    glVertex2i(158,480);
    glVertex2i(166,445);

    glColor3ub (224,238,238);
    glBegin(GL_QUADS);
    glVertex2i(137,456);
    glVertex2i(138,462);
    glVertex2i(163,462);
    glVertex2i(163,456);

    glEnd();

    glColor3ub (224,238,238);
    glBegin(GL_TRIANGLES);
    glVertex2i(143,417);
    glVertex2i(139,431);
    glVertex2i(147,431);

    glBegin(GL_TRIANGLES);
    glVertex2i(158,417);
    glVertex2i(154,431);
    glVertex2i(162,431);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,positionBoat2, 0);
    glColor3ub (139, 69, 19); //second boat
    glBegin(GL_TRIANGLES);
    glVertex2i(757,12);
    glVertex2i(736,74);
    glVertex2i(779,74);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(736,74);
    glVertex2i(757,136);
    glVertex2i(779,74);
    glEnd();

    glColor3ub (255, 165, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(757,30);
    glVertex2i(739,73);
    glVertex2i(778,73);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(741,77);
    glVertex2i(758,119);
    glVertex2i(774,77);
    glEnd();

    glColor3ub (139,37,0);
    glBegin(GL_QUADS);
    glVertex2i(749,49);
    glVertex2i(747,54);
    glVertex2i(767,54);
    glVertex2i(765,49);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(744,62);
    glVertex2i(743,65);
    glVertex2i(771,65);
    glVertex2i(770,62);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(739,73);
    glVertex2i(741,77);
    glVertex2i(774,77);
    glVertex2i(775,73);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(744,84);
    glVertex2i(745,87);
    glVertex2i(770,87);
    glVertex2i(772,84);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(749,97);
    glVertex2i(751,101);
    glVertex2i(764,101);
    glVertex2i(766,97);

    glEnd();

    glColor3ub (139,71,38);   //3rd boat
    glBegin(GL_POLYGON);
    glVertex2i(876,26);
    glVertex2i(847,60);
    glVertex2i(847,121);
    glVertex2i(906,121);
    glVertex2i(906,60);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(847,121);
    glVertex2i(875,161);
    glVertex2i(905,121);
    glEnd();
    glColor3ub (255, 99, 71);
    glBegin(GL_TRIANGLES);
    glVertex2i(876,33);
    glVertex2i(867,47);
    glVertex2i(886,47);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2i(864,135);
    glVertex2i(876,151);
    glVertex2i(889,135);

    glEnd();

    glColor3ub (188,238,104);
    glBegin(GL_QUADS);
    glVertex2i(865,51);
    glVertex2i(857,74);
    glVertex2i(895,74);
    glVertex2i(888,51);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(854,81);
    glVertex2i(854,98);
    glVertex2i(898,98);
    glVertex2i(898,81);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(854,104);
    glVertex2i(862,130);
    glVertex2i(889,130);
    glVertex2i(897,104);
    glEnd();

    glColor3ub (0,139,0);
    glBegin(GL_QUADS);
    glVertex2i(868,55);
    glVertex2i(868,73);
    glVertex2i(873,73);
    glVertex2i(873,55);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(879,55);
    glVertex2i(879,73);
    glVertex2i(884,73);
    glVertex2i(884,55);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(861,84);
    glVertex2i(861,88);
    glVertex2i(892,88);
    glVertex2i(892,84);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(861,91);
    glVertex2i(861,95);
    glVertex2i(892,95);
    glVertex2i(892,91);

    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(867,107);
    glVertex2i(867,125);
    glVertex2i(872,125);
    glVertex2i(872,107);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2i(878,107);
    glVertex2i(877,125);
    glVertex2i(883,125);
    glVertex2i(883,107);


    glEnd();
    //glFlush ();
    glPopMatrix();


//Train Path

    glColor3ub (105,105,105);
    glBegin(GL_QUADS);
    glVertex2i(0,123);
    glVertex2i(1000,123);
    glVertex2i(1000,51);
    glVertex2i(0,51);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,116);
    glVertex2i(1000,116);
    glVertex2i(1000,109);
    glVertex2i(0,109);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(0,64);
    glVertex2i(1000,64);
    glVertex2i(1000,56);
    glVertex2i(0,56);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(10,123);
    glVertex2i(20,123);
    glVertex2i(20,51);
    glVertex2i(10,51);

    glVertex2i(35,123);
    glVertex2i(45,123);
    glVertex2i(45,51);
    glVertex2i(35,51);

    glVertex2i(60,123);
    glVertex2i(70,123);
    glVertex2i(70,51);
    glVertex2i(60,51);

    glVertex2i(85,123);
    glVertex2i(95,123);
    glVertex2i(95,51);
    glVertex2i(85,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(110,123);
    glVertex2i(120,123);
    glVertex2i(120,51);
    glVertex2i(110,51);

    glVertex2i(135,123);
    glVertex2i(145,123);
    glVertex2i(145,51);
    glVertex2i(135,51);

    glVertex2i(160,123);
    glVertex2i(170,123);
    glVertex2i(170,51);
    glVertex2i(160,51);

    glVertex2i(185,123);
    glVertex2i(195,123);
    glVertex2i(195,51);
    glVertex2i(185,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(210,123);
    glVertex2i(220,123);
    glVertex2i(220,51);
    glVertex2i(210,51);

    glVertex2i(235,123);
    glVertex2i(245,123);
    glVertex2i(245,51);
    glVertex2i(235,51);

    glVertex2i(260,123);
    glVertex2i(270,123);
    glVertex2i(270,51);
    glVertex2i(260,51);

    glVertex2i(285,123);
    glVertex2i(295,123);
    glVertex2i(295,51);
    glVertex2i(285,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(310,123);
    glVertex2i(320,123);
    glVertex2i(320,51);
    glVertex2i(310,51);

    glVertex2i(335,123);
    glVertex2i(345,123);
    glVertex2i(345,51);
    glVertex2i(335,51);

    glVertex2i(360,123);
    glVertex2i(370,123);
    glVertex2i(370,51);
    glVertex2i(360,51);

    glVertex2i(385,123);
    glVertex2i(395,123);
    glVertex2i(395,51);
    glVertex2i(385,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(410,123);
    glVertex2i(420,123);
    glVertex2i(420,51);
    glVertex2i(410,51);

    glVertex2i(435,123);
    glVertex2i(445,123);
    glVertex2i(445,51);
    glVertex2i(435,51);

    glVertex2i(460,123);
    glVertex2i(470,123);
    glVertex2i(470,51);
    glVertex2i(460,51);

    glVertex2i(485,123);
    glVertex2i(495,123);
    glVertex2i(495,51);
    glVertex2i(485,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(510,123);
    glVertex2i(520,123);
    glVertex2i(520,51);
    glVertex2i(510,51);

    glVertex2i(535,123);
    glVertex2i(545,123);
    glVertex2i(545,51);
    glVertex2i(535,51);

    glVertex2i(560,123);
    glVertex2i(570,123);
    glVertex2i(570,51);
    glVertex2i(560,51);

    glVertex2i(585,123);
    glVertex2i(595,123);
    glVertex2i(595,51);
    glVertex2i(585,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(610,123);
    glVertex2i(620,123);
    glVertex2i(620,51);
    glVertex2i(610,51);

    glVertex2i(635,123);
    glVertex2i(645,123);
    glVertex2i(645,51);
    glVertex2i(635,51);

    glVertex2i(660,123);
    glVertex2i(670,123);
    glVertex2i(670,51);
    glVertex2i(660,51);

    glVertex2i(685,123);
    glVertex2i(695,123);
    glVertex2i(695,51);
    glVertex2i(685,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(710,123);
    glVertex2i(720,123);
    glVertex2i(720,51);
    glVertex2i(710,51);

    glVertex2i(735,123);
    glVertex2i(745,123);
    glVertex2i(745,51);
    glVertex2i(735,51);

    glVertex2i(760,123);
    glVertex2i(770,123);
    glVertex2i(770,51);
    glVertex2i(760,51);

    glVertex2i(785,123);
    glVertex2i(795,123);
    glVertex2i(795,51);
    glVertex2i(785,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(810,123);
    glVertex2i(820,123);
    glVertex2i(820,51);
    glVertex2i(810,51);

    glVertex2i(835,123);
    glVertex2i(845,123);
    glVertex2i(845,51);
    glVertex2i(835,51);

    glVertex2i(860,123);
    glVertex2i(870,123);
    glVertex2i(870,51);
    glVertex2i(860,51);

    glVertex2i(885,123);
    glVertex2i(895,123);
    glVertex2i(895,51);
    glVertex2i(885,51);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(910,123);
    glVertex2i(920,123);
    glVertex2i(920,51);
    glVertex2i(910,51);

    glVertex2i(935,123);
    glVertex2i(945,123);
    glVertex2i(945,51);
    glVertex2i(935,51);

    glVertex2i(960,123);
    glVertex2i(970,123);
    glVertex2i(970,51);
    glVertex2i(960,51);

    glVertex2i(985,123);
    glVertex2i(995,123);
    glVertex2i(995,51);
    glVertex2i(985,51);
    glEnd();

    trainDay();

//bridge start
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(0,123);
    glVertex2i(1000, 123);
    glVertex2i(1000,350);
    glVertex2i(0,350);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,127);
    glVertex2i(1000, 127);
    glVertex2i(1000,133);
    glVertex2i(0,133);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,230);
    glVertex2i(1000, 230);
    glVertex2i(1000,240);
    glVertex2i(0,240);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,340);
    glVertex2i(1000, 340);
    glVertex2i(1000,347);
    glVertex2i(0,347);
    glEnd();

//crossing

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,175);
    glVertex2i(200,175);
    glVertex2i(100,180);
    glVertex2i(200,180);
    glVertex2i(200,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,175);
    glVertex2i(300,175);
    glVertex2i(300,180);
    glVertex2i(400,180);
    glVertex2i(400,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(500,175);
    glVertex2i(500,175);
    glVertex2i(500,180);
    glVertex2i(600,180);
    glVertex2i(600,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(700,175);
    glVertex2i(700,175);
    glVertex2i(700,180);
    glVertex2i(800,180);
    glVertex2i(800,175);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(900,175);
    glVertex2i(900,175);
    glVertex2i(900,180);
    glVertex2i(1000,180);
    glVertex2i(1000,175);
    glEnd();

//crossing downside

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,290);
    glVertex2i(200,290);
    glVertex2i(100,295);
    glVertex2i(200,295);
    glVertex2i(200,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300,290);
    glVertex2i(400,290);
    glVertex2i(300,295);
    glVertex2i(400,295);
    glVertex2i(400,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(500,290);
    glVertex2i(600,290);
    glVertex2i(500,295);
    glVertex2i(600,295);
    glVertex2i(600,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(700,290);
    glVertex2i(800,290);
    glVertex2i(700,295);
    glVertex2i(800,295);
    glVertex2i(800,290);
    glEnd();

    glColor3f( 0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(900,290);
    glVertex2i(1000,290);
    glVertex2i(900,295);
    glVertex2i(1000,295);
    glVertex2i(1000,290);
    glEnd();
    cars();

    //trainNight();


//ship start
    glPushMatrix();
    glTranslatef(positionShip,0, 0);
    glColor3ub (30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2i(696,395);
    glVertex2i(642,370);
    glVertex2i(460,370);
    glVertex2i(460,420);
    glVertex2i(642,420);
    glEnd();


    glColor3ub (0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(675,395);
    glVertex2i(642,379);
    glVertex2i(642,412);
    glEnd();



    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(530,373);
    glVertex2i(530,383);
    glVertex2i(539,383);
    glVertex2i(539,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(530,397);
    glVertex2i(530,417);
    glVertex2i(539,417);
    glVertex2i(539,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(547,373);
    glVertex2i(547,393);
    glVertex2i(556,393);
    glVertex2i(556,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(547,397);
    glVertex2i(547,417);
    glVertex2i(556,417);
    glVertex2i(556,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(566,373);
    glVertex2i(566,393);
    glVertex2i(575,393);
    glVertex2i(575,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(566,397);
    glVertex2i(566,417);
    glVertex2i(575,417);
    glVertex2i(575,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(586,373);
    glVertex2i(586,393);
    glVertex2i(595,393);
    glVertex2i(595,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(586,397);
    glVertex2i(586,417);
    glVertex2i(595,417);
    glVertex2i(595,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(602,373);
    glVertex2i(602,393);
    glVertex2i(611,393);
    glVertex2i(611,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(602,397);
    glVertex2i(602,417);
    glVertex2i(611,417);
    glVertex2i(611,397);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(617,373);
    glVertex2i(617,393);
    glVertex2i(626,393);
    glVertex2i(626,373);
    glEnd();
    glColor3ub (255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(617,397);
    glVertex2i(617,417);
    glVertex2i(626,417);
    glVertex2i(626,397);

    glEnd();


    glColor3ub (0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2i(466,385);
    glVertex2i(466,405);
    glVertex2i(475,405);
    glVertex2i(475,385);
    glEnd();

    glColor3ub (255, 69, 0);
    glBegin(GL_QUADS);
    glVertex2i(479,374);
    glVertex2i(479,416);
    glVertex2i(509,416);
    glVertex2i(509,374);
    glEnd();

    glColor3ub (255, 255, 0);
    glBegin(GL_QUADS);
    glVertex2i(483,378);
    glVertex2i(483,412);
    glVertex2i(505,412);
    glVertex2i(505,378);
    glEnd();
    glPopMatrix();
    glFlush();
   // cars();
}
void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {
    case 's':
        speedBoat2 = 0;
        break;
    case 'w':
        speedBoat2 = 10;
        break;
    case 'a':
        speed= 0;
        break;
    case 'd':
        speed = 10;
        break;
    case 'n':
        //glClearColor(0,0,0,0);
        glutDisplayFunc(myDisplay_night);
        glutPostRedisplay();
        break;
    case 'm':
        //glClearColor(0,191,255,0);
        glutDisplayFunc(myDisplay_day);
        glutPostRedisplay();
        break;
        //glutPostRedisplay();
    }
}

int main(int argc, char ** argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(1000, 500);

    glutCreateWindow("Drone view of A Bridge ");



    glutDisplayFunc(myDisplay_day);

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(1000, updateShip, 0);
    glutTimerFunc(1000, updateBoat1, 0);
    glutTimerFunc(1000, updateBoat2, 0);
    glutTimerFunc(1000, updateCar1, 0);


    init();

    glutMainLoop();
}
