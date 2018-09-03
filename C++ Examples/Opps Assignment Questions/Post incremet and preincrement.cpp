#include<iostream>
#include<conio.h>
using namespace std ; 
int main()
{
	int n = 10 , a ; 
	a = n++ ; 
	cout<<"Post increment"<<endl;
	cout<<" a = "<<a<<endl ; 
	cout<<" n = "<<n<<endl;
	n = n-1 ; 
	a = n--; 
	cout<<"Post decremnt"<<endl; 
	cout<<"a = "<<a<<endl; 
	cout<<" n = "<<n <<endl; 
	n = n+1 ;
	a = ++n ; 
	cout<<" Pre increment"<<endl; 
	cout<<" a = "<<a<<endl;
	cout<<" n ="<<n<<endl;
	n = n-1 ; 
	a = --n ; 
	cout<<" Pre decrement"<<endl;
	cout<<" a ="<<a<<endl; 
	cout<<" n ="<<n<<endl;

	getch();
	return 0 ; 
}
