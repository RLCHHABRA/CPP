#include<conio.h>
#include<iostream>
using namespace std ; 
class A
{
	private:
		int a , b ; 
	public:
		void get_data()
		{
			cout<<"Enter values of a and b"<<endl;
			cin>>a>>b;
		}
		void disp()
		{
			cout<<"a = "<<a<<" and "<<"\nb = "<<b;
		}
		friend A operator&&(A,A);
};

A operator&&(A o1,A o2)
{
 A temp ; 
 temp.a = o2.a && o1.a ; 
 temp.b = o2.b && o2.b ; 
 return temp; 
}
int main()
{
	A p , q , r ; 
	q.get_data(); 
	r.get_data();
	p = q&&r ; 
	p.disp(); 
	getch();
	return 0 ; 
}
