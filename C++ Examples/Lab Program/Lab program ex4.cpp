#include<iostream>
#include<conio.h>
using namespace std ; 
class Area
{	public:	float area(int r)
		       {	return 3.14*r*r;}
		float area(int x , int y )
	           {	return x*y ; }
		float area(int a , int b , float x)
		       {	return a*b*x ; } };
int main()
{	Area obj ; 
	cout<<" \n\narea of circle = "<<obj.area(5)<<endl;
	cout<<" \n\narea of rectangle = "<<obj.area(4,5)<<endl;
	cout<<" \n\narea of triangle = "<<obj.area(6,7,0.5)<<endl;
	getch();
	return 0 ; }
