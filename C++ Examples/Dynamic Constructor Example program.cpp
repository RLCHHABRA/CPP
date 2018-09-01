#include<iostream>
#include<conio.h>
using namespace std;
class A 
 {
 	private:
 		int a , b; //instense variable 
 		int *p ; 
 	public:
 		A()//constructor
 		{
 			a = 0 ; b = 0 ; 
			 p = new int ;
			 *p  = a ;  	
		}
		A(int x , int y ,  int z  )
		{
			a = x  ; 
			b = y  ; 
			p = new int ; 
			*p = z ; 
			delete p ;
		}
		void disp()
		{
			cout<<" a = "<<a<<endl; 
			cout<<" b = "<<b <<endl;
			cout<<" c = "<<*p<<endl;
		}
 	
 };
 int main()
 {
 	A o1  , o3(3,4,5 ); //  o3 = { 3, 4 } ; 
 	o1.disp(); 
 	o3.disp();
 	getch();
 	return 0 ; 
 	
 	
 }
