#include<iostream>
#include<conio.h>
using namespace std ; 
class test
{
	private:
		int a ;
	public:
		get_data()
		{	cout<<"Enter an integer"<<endl;
			cin>>a; 	}
    	void operator++()
    	{	++a ; 	}
    	void operator--()
    	{	--a ; 	}
    	void display()
    	{	cout<<"a = "<<a<<endl;  	}
};
int main()
{	test obj ; 
	obj.get_data();
	++obj ; 
	cout<<"After increment"<<endl;
	obj.display();
	cout<<"After decrement"<<endl;
	--obj ; 
	obj.display();
	getch();
	return 0 ; }
