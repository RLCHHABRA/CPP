#include<iostream>
#include<conio.h>
using namespace std ; 
class swap_two
{
	private: 
	int a , b ; 
	int *p , *q  ; 
	public:
		void get_data()
		{
			cout<<"Eneter any two a and b  digits \n";
			cin>>a>>b;
		}
		void swap_a_b()
		{
		  p = &a ; 
		  q = & b ; 
		  *p = *p + *q ; 
		  *q = *p-*q ; 
		  *p = *p-*q ; 
		  cout<<" a = "<<*p<<" and "<<" b = "<<*q ;
		}
};
int main()
{
	swap_two obj ; 
	obj.get_data();
	obj.swap_a_b();
	return 0 ;
}
