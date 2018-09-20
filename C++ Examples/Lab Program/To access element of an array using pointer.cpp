#include<iostream>
#include<conio.h>
using namespace std ; 
class array
{
	private:
		int a[5] , *ptr ; 
	public:
		void get_data();
		void put_data();
};
void array::get_data()
{
	cout<<"Enter 5 elements of array"<<endl;
	for(int i =0 ; i<5 ; i++)
	{
		cin>>a[i];
	}
}
void array::put_data()
{    
    ptr = a ; 
	cout<<"Entered Elemets are"<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
}
int main()
{
	array obj ; 
	obj.get_data() ; 
	obj.put_data();
	getch() ; 
	return 0 ; 
}
