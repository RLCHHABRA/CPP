#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;
void line_draw(int , int , int , int);
int main()
{
	int gd = DETECT , gm , x1,y1,x2,y2; 
	initgraph(&gd , &gm , "c:\\tc\\bgi");
	cout<<"Enter x1 , y1 and x2 , y2 \n";
	cin>>x1>>y1>>x2>>y2;
	line_draw(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0 ;	
}
void line_draw(int x1 , int y1, int x2 , int y2)
{
	float dx , dy ,  m , x = x1 , y = y1 ;
	dx = x2 - x1 ;
	dy = y2 - y1;
	m = dy/dx;
	putpixel(x, y , YELLOW);
	while(x!=x2 && y !=y2)
	{
	if(m<0) { m = -m;}
	if(m>1)
	{
		y = y + 1 ;
		x = x + 1/m;
		putpixel(round(x),y , WHITE);
		delay(100);
	}
	if(m<1)
	{
		x = x+1 ;
		y = y + m ; 
		putpixel(x, round(y),WHITE);
		delay(100);
	}
	if(m ==1 )
	{
		x = x+ 1 ; 
		y = y+ 1 ;
		putpixel(x , y , WHITE);
		delay(100);
	}}
}

