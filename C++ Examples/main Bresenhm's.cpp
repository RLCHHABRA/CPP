#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
void rline(int , int, int, int);
int main()
{
	int x1, y1, x2,y2 , gd = DETECT , gm;
	cout<<"Enter value of x1,y1 and x2 and y2\n";
	cin>>x1>>y1>>x2>>y2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	rline(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
}
void rline(int x1,int y1, int x2 ,int y2)
{
	int m  , dx, dy, p , x , y ;
	dx = x2-x1 ; dy = y2-y1;
	x = x1 ; y = y1 ; 
	m = dy/dx;
	if(m<0)
	{
		m = m*(-1);
	}
	if(0<m<1)
	{   
	    putpixel(x,y ,RED);
		p = 2*dy - dx;
		while(x!=x2 && y != y2)
		{
		if(p<0)
		{
			x = x + 1 ; 
			p = p + 2*dy;
			putpixel(x , y , YELLOW);
		}
		else
		{
			x = x+ 1; 
			y = y + 1 ;
			p = p + 2*dy - 2*dx ;
			putpixel( x , y , YELLOW); 
		}}
	}
	if(m>1)
	{   
	    putpixel(x,y , RED);
		p = 2*dx - dy ; 
		while(x!=x2 && y!=y2)
		{
			if(p<0)
			{
				y = y+1 ; 
				p = p + 2*dx ;
				putpixel(x, y , YELLOW);
			}
			else
			{
				x = x+1 ; 
				y = y+1 ; 
				p = p + 2*dx - 2*dy;
				putpixel(x, y , YELLOW);
			}
		}
	}
	if(m == 1 )
	{   putpixel(x,y , RED);
		while(x!=x2 && y != y2)
		{
			x = x+1 ; y = y+1 ;
			putpixel(x, y , YELLOW);
		}
	}
}
