#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
	int n , r , x , reverse =0   ; 
	cout<<"Enter a number"<<endl;
	cin>>n ;
	x = n ; 
	while(n>0)
	{
		r = n%10 ; 
		reverse = reverse*10 + r ; 
		n = n/10 ; 
		
	}
	if(reverse == x )
	{
		cout<<"Enter number is palindrom"<<endl;
	}
	else
	{
		cout<<"Eetered number is not a palindorom number"<<endl;
	}
	
	getch();
	return 0 ; 
}
