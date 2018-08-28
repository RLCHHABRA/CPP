#include<iostream>
#include<conio.h>
using namespace std;
class cyclic_swap
{
private:
 int a , b ,c ; 
public:
 void get_data()
 {
 	cout<<"Enter value of a , b ,c"<<endl;
 	cin>>a>>b>>c;
 	cswap(&a,&b , &c);
}
  void cswap(int *p ,int *q ,int *r )	
  {
  	 int temp ;
  	 temp = *q ;
  	 *q = *p ; 
  	 *p = *r ; 
  	 *r = temp;
  }
  void display()
  {
  	cout<<"a = "<<a<<"\n"<<"b = "<<b<<"\n"<<"c = "<<c;
  }
};
int main()
{
	cyclic_swap object ; 
	object.get_data();
	object.display();
	return 0 ;
}
