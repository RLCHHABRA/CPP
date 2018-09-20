#include<iostream>
#include<conio.h>
using namespace std ; 
int main()
{
	int *p1 ; 
	char *p2 ; 
	double *p3 ; 
	long int *p4 ; 
	float *p5 ; 
	cout<<" Size of int pointer  "<<sizeof(*p1)<<endl;
	cout<<" Size of float pointer "<<sizeof(*p5)<<endl;
	cout<<" Size of Char pointer "<<sizeof(*p2)<<endl;
	cout<<" Size of double pointer "<<sizeof(*p3)<<endl;
	cout<< " size of long int pointer "<<sizeof(*p4)<<endl;
	getch();
	return 0 ; 
}
