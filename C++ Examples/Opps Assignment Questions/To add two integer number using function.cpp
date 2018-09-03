#include<iostream>
#include<conio.h>
using namespace std ; 
class Add
{
	private:
		int a , b  , sum = 0 ; 
	public:
		void get_data()
		{
			cout<<"Enter values of a and b"<<endl;
			cin>>a>>b;
		}
		void add()
		{
			sum = a + b ; 
			display() ; 
		}
		void display()
		{
			cout<<"The sum is  = "<<sum<<endl ; 
		}
};
int main()
{
	Add obj ; 
	obj.get_data();
	obj.add();
	getch();
	return 0 ; 
}
