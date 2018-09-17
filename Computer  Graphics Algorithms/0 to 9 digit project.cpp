#include<conio.h>
#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std ; 
void flood(int , int , int , int);
void flood(int x , int y , int fill , int old)
{
	if(getpixel(x,y) == old)
	{   putpixel(x,y,fill);
		flood(x,y+1,fill,old);
		flood(x,y-1, fill , old);
		flood(x+1,y,fill, old);
		flood(x-1, y , fill ,old);
	}
}

class digits
{
	private:
		void frame()
		{
			rectangle(200,100,400,400);	
			rectangle(198,98,402,402) ;
			flood(199,99,5,0);
		}
	public:
	
		void zero();
		void one();
		void two();
		void three();
		void four();
		void five();
		void six();
		void seven();
		void eight();
		void nine();
	
};
int main()
{
	int gd = DETECT , gm ; 
	initgraph(&gd, &gm , "c:\\tc\\bgi");
	char choice ; 
	digits object ; 
	cout<<"Are You Ready !!!"<<endl;
	cin>>choice;
	if(choice == 'y' || choice == 'Y')
	{
	object.zero();
	delay(500);
	cleardevice();
	object.one();
	delay(500) ;
	cleardevice();
	object.two();
	delay(500);
	cleardevice();
	object.three();
	delay(500);
	cleardevice();
	object.four();
	delay(500);
	cleardevice();
	object.five();
	delay(500);
	cleardevice();
	object.six();
	delay(500);
	cleardevice();
	object.seven();
	delay(500);
	cleardevice();
	object.eight();
	delay(500);
	cleardevice();
	object.nine();
	delay(500);
	getch();
	cleardevice();
		
	}
	getch();
	closegraph();
	return 0 ; 	
}
void digits::zero()
{   frame();
	rectangle(220,120,380,380);
	rectangle(230,130,370,370);
	flood(221,121,2,0);
}
void digits::one()
{   frame();
	rectangle(295,120,305,380);
	flood(296,121,3,0);
}
void digits::two()
{
	frame();
	rectangle(220,120,380,130);
	rectangle(370,130,380,255);
	rectangle(230,245,370,255);
	rectangle(220,245,230,370);
	rectangle(220,370,380,380);
	flood(221,121,4,0);
	flood(371,131,4,0);
	flood(231,246,4,0);
	flood(221,246,4,0);
	flood(221,371,4,0);
//	getch();
	
}
void digits::three()
{
	frame();
	rectangle(220,120,380,130);
	rectangle(370,130,380,370);
	rectangle(220,245,370,255);
	rectangle(220,370,380,380);
	flood(221,121,5,0);
	flood(371,131,5,0);
	flood(221,246,5,0);
	flood(221,371,5,0);
//	getch();
}
void digits::four()
{
	frame();
	rectangle(370,120,380,380);
	rectangle(220,120,230,255);
	rectangle(230,245,370,255);
	flood(371,121,6,0);
	flood(221,121,6,0);
	flood(231,246,6,0);
//	getch();
}
void digits::five()
{
	frame();
	rectangle(220,120,380,130);
	rectangle(220,130,230,255);
	rectangle(230,245,370,255);
	rectangle(370,245,380,380);
	rectangle(220,370,370,380);
	flood(221,121,7,0);
	flood(221,131,7,0);
	flood(231,246,7,0);
	flood(371,246,7,0);
	flood(221,371,7,0);
//	getch();
}
void digits::six()
{
	frame();
	rectangle(220,120,230,380);
	rectangle(230,370,370,380);
	rectangle(370,255,380,380);
	rectangle(230,245,380,255);
	rectangle(230,120,380,130);
	flood(221,121,8,0);
	flood(231,371,8,0);
	flood(371,256,8,0);
	flood(231,246,8,0);
	flood(231,121,8,0);
//	getch();
}
void digits::seven()
{
	frame();
	rectangle(220,120,380,130);
	rectangle(370,130,380,380);
	flood(221,121,9,0);
	flood(371,131,9,0);
}
void digits::eight()
{
	frame();
	rectangle(220,120,380,380);
	rectangle(230,130,370,370);
	rectangle(230,245,370,255);
	flood(221,121,10,0);
	flood(231,246,10,0);

}
void digits::nine()
{
	frame();
	rectangle(220,120,380,255);
	rectangle(230,130,370,245);
	rectangle(370,255,380,380);
	rectangle(220,370,370,380);
	flood(221,121,11,0);
	flood(371,256,11,0);
	flood(221,371,11,0);
}

x
