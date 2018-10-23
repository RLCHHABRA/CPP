#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std ; 
const int INSIDE = 0 ; 
const int LEFT = 1 ; 
const int RIGHT = 2  ; 
const int BOTTOM = 4 ; 
const int TOP = 8 ; 
const int x_min = 100 ; 
const int x_max = 300 ; 
const int y_min = 100 ; 
const int y_max = 300 ; 
int code_compute(double , double  ) ; 
void suther_land_clipping(double , double , double , double) ; 
int main()
{
	int gd = DETECT , gm ; 
	int x1 , y1 , x2 , y2 ; 
	initgraph(&gd , &gm , "c:\\turboc3\\bgi") ; 
	rectangle(x_min , y_min , x_max , y_max) ; 
	getch(); 
	cout<<"Enter points(x1,y1) & (x2 ,y2) of line :"<<endl ; 
	cin>>x1>>y1>>x2>>y2 ; 
	cout<<"Before clipping :"<<endl ; 
	line(x1, y1 , x2 , y2 ) ; 
	getch() ; 
	suther_land_clipping(x1, y1, x2 ,y2) ; 
	getch() ; 
	closegraph(); 
	return 0 ; 	
}
void suther_land_clipping(double x1 , double y1 , double x2 , double y2)
{
	int code1 = code_compute(x1, y1) ; 
	int code2 = code_compute(x2 , y2) ; 
	bool accept = false ; 
	int x , y , code_out ; 
	while(true)
	{
		if(code1 == 0 && code2 == 0)
		{
			accept = true ; 
			break ;
		}
		else if(code1&code2)
		{
			break ; 
		}
		else 
		{
		
			if(code1 !=0 )
			{
				code_out = code1 ; 
			}
			else
			{
				code_out = code2  ; 
			}
			if(code_out&TOP)
			{
				y = y_max ; 
				x = x1 + (x2 - x1)*(y_max - y1)/(y2 - y1) ; 
			}
			else if(code_out&BOTTOM)
			{
				y = y_min ; 
				x = x1 + (x2 -x1)*(y_min -y1)/(y2-y1) ; 
			}
			else if(code_out&LEFT)
			{
				x = x_min ; 
				y = y1 + (y2-y1)*(x_min-x1)/(x2-x1) ; 
			}
			else if (code_out&RIGHT)
			{
				x = x_max ; 
				y = y1 + (y2-y1)*(x_max-x1)/(x2-x1) ; 
			}		
		}
		if(code_out == code1)
		{
			x1 = x ; y1 = y ; 
			code1 = code_compute(x1, y1) ; 
		}
		else
		{
			x2 = x ; y2 = y ; 
			code2 = code_compute(x2, y2) ; 
		}
		
	}
	if(accept ==true)
	{
		cout<<"After clipping"<<endl ; 
		cleardevice() ;
	    rectangle(x_min , y_min , x_max , y_max) ; 
	    line(x1,y1,x2,y2) ; 
	}
	
}
int code_compute(double x , double y )
{
	int code = INSIDE ; 
	if(x<x_min)   code |= LEFT ; 
	else if(x>x_max) code |= RIGHT ; 
	else if(y<y_min) code |= BOTTOM ; 
	else if(y>y_max) code |= TOP ; 
	return code ; 
}
