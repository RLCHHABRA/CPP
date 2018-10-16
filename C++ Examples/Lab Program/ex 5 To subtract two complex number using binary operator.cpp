#include<iostream>
#include<conio.h>
using namespace std ;
class complex 
{	private:	int a , b ; 
    public:
      	void get_data( int a , int b )
    	{	this->a = a; 	this->b = b ; 	}
		complex operator-(complex o)
		{	complex temp ; 
			temp.a = a - o.a ; 
			temp.b = b - o.b ; 
			return temp ; 	}
		void display()
		{	cout<<"\na = "<<a<<"\n\nb = "<<b<<endl; 	}   } ;
int main()
{	complex c1 , c2 , c3 ; 
	c1.get_data(8,9);
	c2.get_data(4,5);
	c3 = c1 - c2 ; 
	c3.display();
	getch();
	return 0 ;    }
