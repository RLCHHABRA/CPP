#include<iostream>
#include<conio.h>
using namespace std ; 
class Cylic_swap
{
	private:
		int a , b , c ; 
	public:
		void get_a_b_c()
		{
			cout<<"Enter values of a b and c"<<endl;
			cin>>a>>b>>c;
		}
		void Cylic_swp()
		{
			int temp ; 
			temp = c ; 
			c = b ; 
			b = a ; 
			a = temp ; 
			cout<<" After swaping "<<endl;
			cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
		}
};
int main()
{
	Cylic_swap obj  ; 
	obj.get_a_b_c() ; 
	obj.Cylic_swp(); 
	getch();
	return 0 ; 
}
