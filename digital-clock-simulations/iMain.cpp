# include "iGraphics.h"
#include <stdio.h>
#include <time.h>
void gettime(int t[]) {
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}


int x = 300, y = 300, r = 20,left,bottom,dx,dy,cx,cy,cr,slices,i;
/*
	function iDraw() is called again and again by the system.

	*/




void iDraw() {
	//place your drawing codes here
	iClear();

	//iFilledRectangle(10, 30, 20, 20);
	iSetColor(20, 200, 0);
	iText(40, 40, "this clock is made by Mushfiqur Rahman,buet,cse,roll 1505086");

    int t[3];
    gettime(t);


	iRectangle(left,bottom,dx,dy);








    if(t[2]%10==0){

    iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,00,0);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,5,90);
            }
    if(t[2]%10==1){

	iRectangle(680,420,0,0);
    iRectangle(775,330,5,90);
    iRectangle(680,325,0,0);
    iRectangle(680,330,0,0);
    iRectangle(775,235,5,90);
    iRectangle(680,230,0,0);
    iRectangle(680,235,0,0);
    }
 if(t[2]%10==2){

	iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,100,5);
    iRectangle(680,330,0,0);
    iRectangle(775,235,0,0);
    iRectangle(680,230,100,5);
    iRectangle(680,235,5,90);
    }
 if(t[2]%10==3){

	iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,100,5);
    iRectangle(680,330,0,00);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,0,0);
    }
 if(t[2]%10==4){

	iRectangle(680,420,0,0);
    iRectangle(775,330,5,90);
    iRectangle(680,325,100,5);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,00,0);
    iRectangle(680,235,0,0);
    }
 if(t[2]%10==5){

	iRectangle(680,420,100,5);
    iRectangle(775,330,0,0);
    iRectangle(680,325,100,5);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,0,0);
    }
 if(t[2]%10==6){

	iRectangle(680,420,100,5);
    iRectangle(775,330,0,0);
    iRectangle(680,325,100,5);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,5,90);
    }
 if(t[2]%10==7){

	iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,00,0);
    iRectangle(680,330,0,0);
    iRectangle(775,235,5,90);
    iRectangle(680,230,0,0);
    iRectangle(680,235,0,0);
    }
 if(t[2]%10==8){

	iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,100,5);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,5,90);
    }
 if(t[2]%10==9){

	iRectangle(680,420,100,5);
    iRectangle(775,330,5,90);
    iRectangle(680,325,100,5);
    iRectangle(680,330,5,90);
    iRectangle(775,235,5,90);
    iRectangle(680,230,100,5);
    iRectangle(680,235,0,0);
    }



    if(t[2]/10==0){

    iRectangle(565,420,100,5);
    iRectangle(660,330,5,90);
    iRectangle(565,325,00,0);
    iRectangle(565,330,5,90);
    iRectangle(660,235,5,90);
    iRectangle(565,230,100,5);
    iRectangle(565,235,5,90);
            }
    if(t[2]/10==1){

	iRectangle(565,420,0,0);
    iRectangle(660,330,5,90);
    iRectangle(565,325,0,0);
    iRectangle(565,330,0,0);
    iRectangle(660,235,5,90);
    iRectangle(565,230,0,0);
    iRectangle(565,235,0,0);
    }
    if(t[2]/10==2){

	iRectangle(565,420,100,5);
    iRectangle(660,330,5,90);
    iRectangle(565,325,100,5);
    iRectangle(565,330,0,0);
    iRectangle(660,235,0,0);
    iRectangle(565,230,100,5);
    iRectangle(565,235,5,90);
    }
 if(t[2]/10==3){

	iRectangle(565,420,100,5);
    iRectangle(660,330,5,90);
    iRectangle(565,325,100,5);
    iRectangle(565,330,0,00);
    iRectangle(660,235,5,90);
    iRectangle(565,230,100,5);
    iRectangle(565,235,0,0);
    }
 if(t[2]/10==4){

	iRectangle(565,420,0,0);
    iRectangle(660,330,5,90);
    iRectangle(565,325,100,5);
    iRectangle(565,330,5,90);
    iRectangle(660,235,5,90);
    iRectangle(565,230,00,0);
    iRectangle(565,235,0,0);
    }
 if(t[2]/10==5){

	iRectangle(565,420,100,5);
    iRectangle(660,330,0,0);
    iRectangle(565,325,100,5);
    iRectangle(565,330,5,90);
    iRectangle(660,235,5,90);
    iRectangle(565,230,100,5);
    iRectangle(565,235,0,0);
    }



    if(t[1]%10==0){

    iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,00,0);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,5,90);
            }
    if(t[1]%10==1){

	iRectangle(425,420,0,0);
    iRectangle(520,330,5,90);
    iRectangle(425,325,0,0);
    iRectangle(425,330,0,0);
    iRectangle(520,235,5,90);
    iRectangle(425,230,0,0);
    iRectangle(520,235,0,0);
    }
 if(t[1]%10==2){

	iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,100,5);
    iRectangle(425,330,0,0);
    iRectangle(520,235,0,0);
    iRectangle(425,230,100,5);
    iRectangle(425,235,5,90);
    }
 if(t[1]%10==3){

	iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,100,5);
    iRectangle(425,330,0,00);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,0,0);
    }
 if(t[1]%10==4){

	iRectangle(425,420,0,0);
    iRectangle(520,330,5,90);
    iRectangle(425,325,100,5);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,00,0);
    iRectangle(425,235,0,0);
    }
 if(t[1]%10==5){

	iRectangle(425,420,100,5);
    iRectangle(520,330,0,0);
    iRectangle(425,325,100,5);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,0,0);
    }
 if(t[1]%10==6){

	iRectangle(425,420,100,5);
    iRectangle(520,330,0,0);
    iRectangle(425,325,100,5);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,5,90);
    }
 if(t[1]%10==7){

	iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,00,0);
    iRectangle(425,330,0,0);
    iRectangle(520,235,5,90);
    iRectangle(425,230,0,0);
    iRectangle(425,235,0,0);
    }
 if(t[1]%10==8){

	iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,100,5);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,5,90);
    }
 if(t[1]%10==9){

	iRectangle(425,420,100,5);
    iRectangle(520,330,5,90);
    iRectangle(425,325,100,5);
    iRectangle(425,330,5,90);
    iRectangle(520,235,5,90);
    iRectangle(425,230,100,5);
    iRectangle(425,235,0,0);
    }


    if(t[1]/10==0){

    iRectangle(310,420,100,5);
    iRectangle(405,330,5,90);
    iRectangle(310,325,00,0);
    iRectangle(310,330,5,90);
    iRectangle(405,235,5,90);
    iRectangle(310,230,100,5);
    iRectangle(310,235,5,90);
            }
    if(t[1]/10==1){

	iRectangle(310,420,0,0);
    iRectangle(405,330,5,90);
    iRectangle(310,325,0,0);
    iRectangle(310,330,0,0);
    iRectangle(405,235,5,90);
    iRectangle(310,230,0,0);
    iRectangle(310,235,0,0);
    }
 if(t[1]/10==2){

	iRectangle(310,420,100,5);
    iRectangle(405,330,5,90);
    iRectangle(310,325,100,5);
    iRectangle(310,330,0,0);
    iRectangle(405,235,0,0);
    iRectangle(310,230,100,5);
    iRectangle(310,235,5,90);
    }
 if(t[1]/10==3){

	iRectangle(310,420,100,5);
    iRectangle(405,330,5,90);
    iRectangle(310,325,100,5);
    iRectangle(310,330,0,00);
    iRectangle(405,235,5,90);
    iRectangle(310,230,100,5);
    iRectangle(310,235,0,0);
    }
 if(t[1]/10==4){

	iRectangle(310,420,0,0);
    iRectangle(405,330,5,90);
    iRectangle(310,325,100,5);
    iRectangle(310,330,5,90);
    iRectangle(405,235,5,90);
    iRectangle(310,230,00,0);
    iRectangle(310,235,0,0);
    }
 if(t[1]/10==5){

	iRectangle(310,420,100,5);
    iRectangle(405,330,0,0);
    iRectangle(310,325,100,5);
    iRectangle(310,330,5,90);
    iRectangle(405,235,5,90);
    iRectangle(310,230,100,5);
    iRectangle(310,235,0,0);
    }


    if(t[0]%10==0){

    iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,00,0);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,5,90);
            }
    if(t[0]%10==1){

	iRectangle(170,420,0,0);
    iRectangle(265,330,5,90);
    iRectangle(170,325,0,0);
    iRectangle(170,330,0,0);
    iRectangle(265,235,5,90);
    iRectangle(170,230,0,0);
    iRectangle(170,235,0,0);
    }
 if(t[0]%10==2){

	iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,100,5);
    iRectangle(170,330,0,0);
    iRectangle(265,235,0,0);
    iRectangle(170,230,100,5);
    iRectangle(170,235,5,90);
    }
 if(t[0]%10==3){

	iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,100,5);
    iRectangle(170,330,0,00);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,0,0);
    }
 if(t[0]%10==4){

	iRectangle(170,420,0,0);
    iRectangle(265,330,5,90);
    iRectangle(170,325,100,5);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,00,0);
    iRectangle(170,235,0,0);
    }
 if(t[0]%10==5){

	iRectangle(170,420,100,5);
    iRectangle(265,330,0,0);
    iRectangle(170,325,100,5);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,0,0);
    }
 if(t[0]%10==6){

	iRectangle(170,420,100,5);
    iRectangle(265,330,0,0);
    iRectangle(170,325,100,5);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,5,90);
    }
 if(t[0]%10==7){

	iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,00,0);
    iRectangle(170,330,0,0);
    iRectangle(265,235,5,90);
    iRectangle(170,230,0,0);
    iRectangle(170,235,0,0);
    }
 if(t[0]%10==8){

	iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,100,5);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,5,90);
    }
 if(t[0]%10==9){

	iRectangle(170,420,100,5);
    iRectangle(265,330,5,90);
    iRectangle(170,325,100,5);
    iRectangle(170,330,5,90);
    iRectangle(265,235,5,90);
    iRectangle(170,230,100,5);
    iRectangle(170,235,0,0);
    }

    if(t[0]/10==0){

    iRectangle(55,420,100,5);
    iRectangle(150,330,5,90);
    iRectangle(55,325,00,0);
    iRectangle(55,330,5,90);
    iRectangle(150,235,5,90);
    iRectangle(55,230,100,5);
    iRectangle(55,235,5,90);
            }
    if(t[0]/10==1){

	iRectangle(55,420,0,0);
    iRectangle(150,330,5,90);
    iRectangle(55,325,0,0);
    iRectangle(55,330,0,0);
    iRectangle(150,235,5,90);
    iRectangle(55,230,0,0);
    iRectangle(55,235,0,0);
    }
    if(t[0]/10==2){

	iRectangle(55,420,100,5);
    iRectangle(150,330,5,90);
    iRectangle(55,325,100,5);
    iRectangle(55,330,0,0);
    iRectangle(150,235,0,0);
    iRectangle(55,230,100,5);
    iRectangle(55,235,5,90);
    }

    iFilledCircle(cx,cy,cr,slices=100);
    if(t[2]%2==0){
        iFilledCircle(540,400,0);
        iFilledCircle(540,250,0);
    }

    else {
        iFilledCircle(540,400,5);
        iFilledCircle(540,250,5);
    }
     if(t[2]%2==0){
        iFilledCircle(295,400,0);
        iFilledCircle(295,250,0);
    }

    else {
        iFilledCircle(295,400,5);
        iFilledCircle(295,250,5);
    }



}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(850, 500, "demo");
	return 0;
}
