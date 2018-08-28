#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	protected:
		int no;
	public:
		void get_no()
		{
			cout<<"\nEnter a number \n";
			cin>>no;
		}
};
class B :public A
{
 	public:
 		void square()
 		{
 			cout<<"\nsquare is "<<no*no;
		 }
};
class C: public A
{
	public:
		void cube()
		{
			cout<<"\nCube of number = "<<(no*no*no);
		}
};
int main()
{
	B b ;
	C c;
	b.get_no();
	b.square();
	c.get_no();
	c.cube();
	getch();
	return 0;
}
