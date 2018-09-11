#include<iostream>
#include<conio.h>
using namespace std ; 
class test 
{
	private:
		int a ;
		float b ;  
	public:
		test(int x , float y);
		test(test &t);
		void disp()
		{
			cout<<" a = "<<a<<"\nb = "<<b<<endl;
		}
};
test::test(int x , float y)
{
	a = x ; b = y ; 
}
test::test(test &t)
{
	a = t.a ; 
	b = t.b ; 
}
int main()
{
 test t1(2,3.5) ; 
 test t2(t1) ; 
 t2.disp();
 getch();
 return 0 ; 
 	
}
