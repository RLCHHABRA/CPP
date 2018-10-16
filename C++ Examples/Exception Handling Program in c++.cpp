#include<iostream>
using namespace std ; 
void disp()
{
	try
	{
		throw 10 ; 
	}
	catch(int i)
	{
		throw ; 
	}
}; 
int main()
{
	try
	{
		disp() ; 
	}
	catch(int num)
	{
		cout<<"Throw by disp"<<endl;
		cout<<"num = "<<num ;
		
	}
	 
	return 0 ;
}
