#include<conio.h>
#include<iostream>
using namespace std ; 
class A 
{
	private:
		int length ; 
		string name ; 
	public:
		A()
		{
			length = 5 ; 
			name = "Hello" ; 
		}
		A(string s )
		{
			length = s.size() ; 
			name = new char[length + 1 ] ; 
			name = s ; 
		}
		void  display()
		{
			cout<<"Length of string is "<<length<<endl;
			cout<<name<<endl;
		}
};
int main()
{
	A a , b("Ram") , c("Roshan") , d("manju");
	a.display();
	b.display();
	c.display();
	d.display();
	getch();
	return 0 ; 
}
