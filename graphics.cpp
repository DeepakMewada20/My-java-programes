#include<stdio.h>
#include<graphic.h>
#include<conio.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	circle(150,200,50);
	closegraph();
	return 0;
}


