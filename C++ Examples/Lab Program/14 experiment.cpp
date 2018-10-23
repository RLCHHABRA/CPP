#include<iostream>
#include<conio.h>
using namespace std ; 
template <class T> void linear(T [] , T , int) ; 
int main()
{
	int n  ; 
	cout<<"Enter size of array"<<endl ; 
	cin>>n ; 
	cout<<"Enter elemets of array"<<endl ;
	int a[n] , number ;  
	for(int i=0 ; i<n ; i++)
	{
		cin>>a[i] ; 
	}
	cout<<"Enter number that you wants to search in an array"<<endl ; 
	cin>>number;
	linear(a, number , n ) ; 
	getch() ; 
	return 0 ; 
}
template <class T> void linear(T  *array , T number , int n)
{
     int i = 0  ; 
	for( i=0 ; i<n ; i++)
	{
		if(*(array+i)== number)
		{
		cout<<"Search number is :"<<array[i]<<" and location is :"<<i+1<<endl ;
		break ; 
	    }
	}
	if(i==n)
	{
	cout<<"Number is not found"<<endl ; 
	}
}
