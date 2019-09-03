#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
 
int main() {
    int gDriver = DETECT, gMode;
	int i, maxx, midy;
 
    initgraph(&gDriver, &gMode, "c:\\TURBOC3\\bgi");
	maxx = getmaxx();
    midy = getmaxy()/2;
 	midy+=150;
 
 	
 
    for (i=0; i < maxx-150; i=i+5) {
        cleardevice();
 
 		setcolor(WHITE);
	    rectangle(50,180,150,300);
	    rectangle(150,180,320,300);
	    rectangle(80,250,120,300);
	 
	    line(100,100,50,180);
	    line(100,100,150,180);
	    line(100,100,270,100);
	    line(270,100,320,180);
   		
		setfillstyle(SOLID_FILL, BROWN);
	    floodfill(52, 182, WHITE);
	    floodfill(152, 182, WHITE);
	    setfillstyle(SLASH_FILL, BLUE);
	    floodfill(82, 252, WHITE);
	    setfillstyle(HATCH_FILL, GREEN);
	    floodfill(100, 105, WHITE);
	    floodfill(110, 105, WHITE);
	
	    setcolor(WHITE);
        line(0, midy + 37, maxx, midy + 37);
 
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, RED);
 
        line(i, midy + 23, i, midy);
        line(i, midy, 40 + i, midy - 20);
        line(40 + i, midy - 20, 80 + i, midy - 20);
        line(80 + i, midy - 20, 100 + i, midy);
        line(100 + i, midy, 120 + i, midy);
        line(120 + i, midy, 120 + i, midy + 23);
        line(0 + i, midy + 23, 18 + i, midy + 23);
        arc(30 + i, midy + 23, 0, 180, 12);
        line(42 + i, midy + 23, 78 + i, midy + 23);
        arc(90 + i, midy + 23, 0, 180, 12);
        line(102 + i, midy + 23, 120 + i, midy + 23);
        line(28 + i, midy, 43 + i, midy - 15);
        line(43 + i, midy - 15, 57 + i, midy - 15);
        line(57 + i, midy - 15, 57 + i, midy);
        line(57 + i, midy, 28 + i, midy);
        line(62 + i, midy - 15, 77 + i, midy - 15);
        line(77 + i, midy - 15, 92 + i, midy);
        line(92 + i, midy, 62 + i, midy);
        line(62 + i, midy, 62 + i, midy - 15);
        floodfill(5 + i, midy + 22, YELLOW);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, DARKGRAY);
        /*  Draw Wheels */
        circle(30 + i, midy + 25, 9);
        circle(90 + i, midy + 25, 9);
        floodfill(30 + i, midy + 25, BLUE);
        floodfill(90 + i, midy + 25, BLUE);
        /* Add delay of 0.1 milli seconds */
        delay(100);
    }
 
    getch();
    closegraph();
    return 0;
}
