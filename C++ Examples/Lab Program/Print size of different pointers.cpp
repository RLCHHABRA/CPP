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
	cout<<" \nSize of int pointer  "<<sizeof(*p1)<<endl;
	cout<<" \n\nSize of float pointer "<<sizeof(*p5)<<endl;
	cout<<" \n\nSize of Char pointer "<<sizeof(*p2)<<endl;
	cout<<" \n\nSize of double pointer "<<sizeof(*p3)<<endl;
	cout<< " \n\nsize of long int pointer "<<sizeof(*p4)<<endl;
	getch();
	return 0 ; 
}
