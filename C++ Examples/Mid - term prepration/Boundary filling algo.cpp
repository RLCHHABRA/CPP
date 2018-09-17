#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
void flood(int , int , int , int );
int main()
{
	int gd = DETECT , gm ; 
	initgraph(&gd, &gm , "C:\\TC\\BGI");
    rectangle(50 , 50 , 200 , 200);
    getch();
    flood(55,55,5,0);
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
   	delay(1);
   }
}
