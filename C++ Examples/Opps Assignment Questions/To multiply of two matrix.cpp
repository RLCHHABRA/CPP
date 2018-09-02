#include<iostream>
#include<conio.h>
using namespace std;
const int n = 3 ; 

void matrix_a(int a[3][3] )
{
cout<<"Enter elements of matrix a"<<endl;
for(int i=0 ; i<3;i++)
{
for(int j=0 ; j<3; j++)
{
	cin>>a[i][j]; 
	}	
}	
}
void matrix_b(int b[3][3] )
{
	cout<<"Enter elements of matrix b"<<endl;
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cin>>b[i][j] ;
		}
	}
}
void matrix_multiplication(int a[3][3] , int b[3][3], int c[3][3]  )
{
	for(int i =0 ; i<3; i++)
	{
		for(int j =0 ; j<3 ; j++)
		{
			for(int k =0 ; k<3 ; k++)
			{
				c[i][j]  += a[i][k]*b[k][j] ; 
			}
		}
	}
}
void display(int c[3][3])
{
	cout<<"The multiplication of two matrix is "<<endl;
	for(int i=0 ; i<3; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout<<c[i][j]<<" " ; 
		}
		cout<<endl;
	}
}
int main()
{
 int a[3][3] , b[3][3] , c[3][3] = {{0,0,0},{0,0,0} , {0,0,0}} ; 
 matrix_a(a);	
 matrix_b(b); 
 matrix_multiplication(a,b,c);
 display(c);
 getch();
 return 0 ; 
}
