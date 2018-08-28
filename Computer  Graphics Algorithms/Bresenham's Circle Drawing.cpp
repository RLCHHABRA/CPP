#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void draw_circle(int, int , int );
void circle_draw(int , int , int , int);
int main()
{
	int gd = DETECT , gm ; 
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int x1,y1, r ;
	cout<<"Enter Center and radius of circle\n";
	cin>>x1>>y1>>r;
	draw_circle(x1,y1,r);
	getch();
	closegraph();
	return 0 ; 	
}
void draw_circle(int x1,int y1, int r)
{
	int d ; 
	d = 3 - 2*r; 
	int x = 0 , y = r ;
	int a = x , b = y ;
	circle_draw(x1, y1 , x , y);
	while(x<=y)
	{
	if(d>=0)
	{
		x  = x+1;
		y =  y -1;
		circle_draw(x1,y1, x , y);
		delay(100);
		d = d + 4*(x-y) + 10;	}
	
	else if (d<0)//
	{
		x = x+1; 
	    circle_draw(x1,y1, x , y);
	    delay(100);
		d = d+ 4*x + 6 ;
	}
	}
	
}
void circle_draw(int xc, int yc , int x , int y )
{
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-y,yc+x,WHITE);
}

