                              // int to class type conversion 

#include<iostream>
#include<conio.h>
using namespace std;
class temp 
{
	private:
		int a ; 
	public:
		void get_a(int x )
		{
			a = x ; 
		}
	    void show_a()
	    {
	    	cout<<"\n a = "<<a;
		}
	temp( int k )
	{
		a = k ;
	}
	temp() {  }
		
};
int main()
{
	temp t1 ;
	int i = 30 ; 
	t1.get_a(20);
	t1.show_a(); // output will be a = 20 ;
	t1= i ;     // assign a = 30 ; 
	t1.show_a();  //output will be a = 30 ;
	t1.get_a(5);  
	t1.show_a();  // output will be a = 5 ;
    getch();
	return 0 ; 
	
}
