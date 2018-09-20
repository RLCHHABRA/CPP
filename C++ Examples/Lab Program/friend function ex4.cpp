#include<conio.h>
#include<iostream>
using namespace std ; 
class Area
{	int radius ; 
	public:
		Area() { 	}
		Area(int x )
		{  radius = x ; }
	friend int calculation(Area);};
int calculation(Area a)
{   return 3.14*a.radius*a.radius ; }
int main()
{	Area a(5);
	cout<<" area of circle = "<<calculation(a);
	getch(); 
	return 0 ; }
