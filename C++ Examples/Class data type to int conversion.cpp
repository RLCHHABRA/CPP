// class to permitive type conversion 
#include<iostream>
#include<conio.h>
using namespace std;
class item 
{
	private:
		int a ; 
	public:
		void get_a (int x )
		{
			a = x ;
		}
	operator int ()   // at the place of int you can write float , char , double int and so on in which you wants to convert class to given data type ...
	{
		return a ;
	}
};
int main()
{
	int i ; 
	item t ; 
	t.get_a(20);
	i = t ; 
	cout<<"The value is = "<<i ; 
	getch();
	return  0; 
	
}
