#include<conio.h>
#include<iostream>
using namespace std ; 
int main()
{
	int n  ; 
	cout<<"Enter row of pyramid"<<endl; 
	cin>>n ; 
	for(int i=0 ; i<n ; i++)
	{
		for(int j =0 ; j<n ; j++)
		{
			if(j<=i)
			{
				cout<<"+";
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
	getch();
	return 0 ; 
}
