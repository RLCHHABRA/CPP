#include<iostream>
#include<conio.h>
using namespace std; 
class A 
{
	private:
		int a , b; 
	public:
		void get_a_b ()
		{
			cout<<"Enter values of a and b "<<endl ; 
			cin>>a>>b ; 
		}
	friend void operator --(A &);
	    void disp()
	    {
	    	cout<<" a = "<<a<<endl ; 
	    	cout<<" b = "<<b<<endl;
		}
	friend void operator --(A & , int);
	friend A operator &&(A & , A &) ; 
	
};
void operator --(A &obj)
{

     --obj.a ;
	 --obj.b ; 

}
void operator --(A &o , int)
{
     o.a-- ; 
     o.b -- ; 
}
A operator &&(A &o1 , A &o2 )
{
	A temp ; 
	temp.a = o1.a && o2.a; 
	temp.b = o1.b && o2.b; 
	return temp ; 
}
int main()
{
	A p  , q , r ; 
	p.get_a_b();
	cout<<"Before Perfix decrement"<<endl; 
	p.disp();
    --p ;
	cout<<"After perfix decrement"<<endl;  
	p.disp();
	cout<<"Before Postfix decrement"<<endl; 
	p.disp();
	cout<<"After postfix dicrement"<<endl; 
	p -- ; 
	p.disp();
	q.get_a_b();
	r.get_a_b();
	p = q&&r ; 
	cout<<" After && operation"<<endl ; 
	p.disp(); 
	getch();
	return 0  ; 
	
}
