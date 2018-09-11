#include<iostream>
#include<conio.h>
using namespace std; 
int g ; 
int main()
{
	for(int i = 0 ; i<3 ; i++)
	{
	 auto int a = 0 ; 
		cout<<"  a = "<<a<<endl; 
		a++;
	}
	for(int i = 0 ; i<3 ; i++)
	{
	   static int s = 0 ; 
		cout<<" s = "<<s<<endl; 
		s++; 
	}
	for(int i=0 ; i<3 ; i++)
	{
		cout<<" g = "<<g <<endl; 
		g++ ; 
	}
	getch();
	return 0 ; 
}
