#include<iostream>
#include<conio.h>
using namespace std ; 
int main()
{
int number ; 
cout<<"Enter a number"<<endl; 
cin>>number ; 
((number & 1) && cout<<"Odd") || cout<<"Even"<<endl; 
getch();
return 0 ; 
}
