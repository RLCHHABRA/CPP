#include<iostream>
#include<conio.h>
using namespace std; 
class Complex 
{
	private:
		int a , b   ; 
	public:
		void get_data()
		{
			cout<<"Enter the values of a and b"<<endl;
			cin>>a>>b;
		}
	Complex operator+(Complex c1)// this is use to add two objects ; 
	         {
	         	Complex temp ; 
	         	temp.a = a + c1.a ; 
	         	temp.b = b + c1.b ; 
	         	return temp; 
	          }
	Complex operator-(Complex c2)// this is use for subtract of two operator ; 
	{ 
	Complex temp ; 
	temp.a = a - c2.a ; 
	temp.b = b - c2.b ; 
	return temp ; 
	}
	Complex operator*(Complex c3)
	{
	         Complex temp ; 
	         temp.a = a*c3.a;
	         temp.b = b*c3.b;
	         return temp ; 
	}
	void disp()
	{
		cout<<" a ="<<a<<" and b = "<<b<<endl;
	}
	         
};
int main()
{
	Complex o1,o2,o3 ; 
	o1.get_data();
	o2.get_data();
	o3 = o2 + o1 ; 
	cout<<"Addition is = "<<endl; 
	o3.disp(); 
	o3 = o2 - o1 ; 
	cout<<"Substraction is = "<<endl;
	o3.disp();
    cout<<"Multiplication is = "<<endl;
    o3 = o1*o2 ; 
    o3.disp();
    getch();
    return 0 ; 
	
}
