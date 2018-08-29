#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	int code ; 
	float price;
	public:
		test(int c , float p );
		test(const test &t);
		void disp();
};
test::test(int c , float p )
{
	code = c ; 
	price = p ;
}
test::test(const test &t) 
{
	code = t.code;
	price = t.price;
}
void test::disp()
{
	cout<<"Code"<<code<<endl;
	cout<<"Price"<<price<<endl;
}
int main()
{
	test t1(101,55.6);
	test t2(t1);
	t2.disp();
	return 0 ; 
}
