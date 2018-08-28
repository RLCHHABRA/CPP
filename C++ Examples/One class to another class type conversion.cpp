// One class data types to another class data types conversion
#include<iostream>
#include<conio.h>
using namespace std;
class A 
{
	private:
		int a , b ; 
	public:
		void get_a_b(int a , int b )
		{
			this->a = a ;
			this->b = b ;
		}
		int get_a()
		{
			return this->a ;
		}
		int get_b()
		{
			return this->b  ; 
		}
		
};
class B 
{
	private:
		int m , n ;
	public:
		void get_m_n(int m , int n )
		{
			this->m = m ; 
			this->n = n ; 
		}
	B () {	} // emputy constructer for define class variables without paranthisis.
	B ( A x)
	{
	  m = 	x.get_a();
	  n =  x.get_b();
	}
	    void show_data()
	    {
	    	cout<<"\n m = "<<m<<"\nn= "<<n;
		}
};
int main()
{
	A a_obj ;
	B b_obj ; 
	a_obj.get_a_b(10,20);
	b_obj = a_obj ; 
	b_obj.show_data();
	getch();
	return 0  ;
}
