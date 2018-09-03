#include<iostream>
#include<conio.h>
using namespace std ; 
void prime(int , int ); 
int main()
{   
    int x , y ; 
	cout <<"Enter two number between which you wants  to print all prime numbers"<<endl;
	cin>>x>>y ; 
	prime(x , y );
	getch();
	return 0  ; 
}
void prime(int x , int y )
{
	int j = 2 ; 
	while(x<=y)
	{   j  =2 ; 
		while(j<x) // dividetion starts form 2 and goes to less than given number ; 
		{
			if(x%j == 0) //if number is prime than j is goes equal to x  ;
			{
				break ; 
			}
			j++ ; 
		
		}
		if(j == x)
			{
				cout<<x<<" ";
			}
		x++ ; 
	}
}
