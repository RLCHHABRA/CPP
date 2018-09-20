#include<iostream>
#include<conio.h>
using namespace std ; 
class factorial
{	int n , fact = 1 ; 
	public:  factorial(int x )
	           {	n = x ; fact = 1 ; }
	   factorial(factorial &obj)
	           {	n = obj.n; fact = 1 ;  }
	   void calculation()
	           {	for(int i= 1 ; i<=n ; i++)
	           {	fact *=i ;  } }
	   void display()
	           {	cout<<"Factorial of number is = "<<fact<<endl; }};
int main()
{ factorial obj(5) ; 
  obj.calculation() ; 
  obj.display() ; 
  factorial obj1 = obj ; 
  cout<<"\n\nAfter Using Copy constructor\n"<<endl;
  obj1.calculation() ; 
  obj1.display();
  getch();
  return 0 ; }
