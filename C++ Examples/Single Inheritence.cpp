#include<iostream>
#include<conio.h>
using namespace std; 
//single level inheretence and multy level inheritence ;
// multypul inheretence  
class A 
{ 
 private:
 int a ; 
 public:
 	void getval_a(int);
 	int get_a();
 
};
class B:public A
{
private:
int b , c ;
public:
void getval_b(int);
void add();
void disval(); 
	
};
void A::getval_a(int x )
{
	a = x ;
}
int A::get_a()
{
	return a ;
}
void B::getval_b(int x)
{
	b = x ;
}
void B::add()
{
	c = get_a() + b ; 
}
void B::disval()
{
	cout<<"Sum  "<<get_a()<<"+"<<b<<"="<<c;
}
int main()
{
	int a , b;
	B object ;
	cout<<"Enter value of a and b ";
	cin>>a>>b;
	object.getval_a(a);
	object.getval_b(b);
	object.add();
	object.disval();
	getch();
	return 0 ; 
}
