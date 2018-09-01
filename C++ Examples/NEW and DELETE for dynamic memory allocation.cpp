// Exapmle program to understand new and delete keyword for dynemic memory allocation 
// syntax :  pointer = new type ; 
// syntax for arry types pointer = new type[size] ; 
// syntax for access of memory 
// *pointer for int float and char ; 
// pointer[size] for array type ; 
// delete pointer ; 
// delete pointer[]; 
#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
	int n , i ;
	float *p  , total ;  
	cout<<"Enter number of students\n";
	cin>>n ; 
    p = new float[n];
    cout<<"Enter the marks of students\n";
    for(i=0;i<n;i++)
    {
    	cin>>p[i];
	}
	cout<<"Total marks is = "<<endl;
	for(i=0;i<n;i++)
	{
		total += p[i]; 
	}
	cout<<total ; 
	delete[] p ;  
	getch();
	return 0 ; 
}
