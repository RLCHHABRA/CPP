#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
void flood(int , int , int , int );
int main()
{
	int gd = DETECT , gm ; 
	initgraph(&gd, &gm , "c:\\tc\\bgi");
    line(10,10,80,90);
    line(80,90, 200,200);
    line(200,200,400,500);
    line(400,500,10,10);
	getch();
	closegraph();
	return 0 ; 
}
void flood(int x , int y , int fill , int old)
{
   if(getpixel(x,y) == old)
   {
   	putpixel(x,y,fill);
   	flood(x+1,y, fill, old);
   	flood(x-1,y, fill , old);
   	flood(x,y+1,fill , old);
   	flood(x , y-1 , fill, old);
   }
}
