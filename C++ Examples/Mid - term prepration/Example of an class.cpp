#include<iostream>
#include<conio.h>
using namespace std ; 
class A 
{
	private :
		int a , b , s = 0  ;
    public:
    	A()
    	{
    		a = 0 ; b = 0 ;
		}
		A(int x , int y )
		{
			a = x  ; b = y ; 
		}
	void sum_a_b()
	{
	 s = a+ b ;
	 disp(); 	
	}
	void disp()
	{
		cout<<"a + b = "<<s<<endl;
	}
}; 
int main()
{
	A o1  , o2(2,3) ; 
	o1.sum_a_b(); 
	o2.sum_a_b();
	getch();
	return 0 ; 
}
