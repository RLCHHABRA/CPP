#include<iostream>
#include<conio.h>
using namespace std ; 
inline int  square(int a)
{
	return a*a ; 
}
inline int cube(int b)
{
	return b*b*b ; 
}
int main()
{   int n ; 
	cout<<"\nEnter any number"<<endl;
	cin>>n ; 
	cout<<"\nSquare is = "<<square(n)<<endl;
	cout<<"\ncube of number = "<<cube(n)<<endl;
	getch();
	return 0 ; 
}
