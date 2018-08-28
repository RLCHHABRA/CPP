#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p  , n  ,i ;
	cout<<"ENter size of array \n";
	cin>>n ; 
	int a[n]; 
	cout<<"Enter elements of array\n"; 
	for( i=0;i<n ; i++)
	{ 
        	cin>>a[i];
	}
	p = &a[0]; 
	cout<<"U are entered \n";
	for(int f=0 ; f<n ; f++)
	{
		cout<<*p<<endl;
		p++;
	}
	getch();
	return 0 ;
}
