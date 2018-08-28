#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	protected:
		int m ; 
	public:
		void get_m(int);
};
void A::get_m(int x)
{
	m = x ;
}
class B 
{
	protected:
		int n ;
	public:
		void get_n(int);
};
void B::get_n(int y )
{
	n = y ;
}
class C:public A, public B
{
	private:
		int t;
	public:
		void display();
};
void C::display()
{
	t = m + n ; 
	cout<<"\nTotal is = "<<m<<" + "<<n<<" = "<<t;
}
int main()
{
	C obj ;
	int m , n ;
	cout<<"\nEnter values of m and n \n";
	cin>>m>>n;
	obj.get_m(m);
	obj.get_n(n);
	obj.display();
	getch();
	return 0 ;
}
