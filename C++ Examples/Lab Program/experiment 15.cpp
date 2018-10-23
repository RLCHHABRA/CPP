#include<iostream>
#include<conio.h>
using namespace std ; 
int main()
{
	int a , b ; 
	float result ; 
	cout<<"Enter values of a and b"<<endl ; 
	cin>>a>>b ; 
	try
	{   result = a-b  ;
		if(result == 0  )
		{
			throw(result) ;  
		}
		else
		{
			cout<<"Result = "<<float(a)/(a-b) ; 
		}
	}
	catch(float r)
	{
		cout<<"You are trying to divide a number by zero"<<endl ; 
	}
	getch() ; 
	return 0 ; 
}
