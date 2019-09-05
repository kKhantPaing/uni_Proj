# include <graphics.h>
# include <math.h>
# include <conio.h>
# include <iostream.h>
void DDALine(int x1, int y1, int x2, int y2, int iColor);
void main()
{
	int gDriver = DETECT, gMode;
	initgraph(&gDriver, &gMode, "c:\\TURBOC3\\bgi");
	cleardevice();
	cleardevice();
	int x=100;
	setcolor(4);
	for(int i=1;i<=50;i++){
	
		line( 100,x+i,350,x+i);
	}
	x+=50;
	setcolor(1);
	for(int j=1;j<=100;j++){
	
		line( 100,x+j,350,x+j);
	}
	setcolor(15);
	for(int z=1;z<=40;z++)
	circle(225, x+50, z);
	x+=100;
	setcolor(4);	
	for(int k=1;k<=50;k++){
	
		line( 100,k+x,350,x+k);
	}
	
	getch();
	
}

