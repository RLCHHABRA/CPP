#include<iostream>
#include<conio.h>
using namespace std ; 
class calculator
{
	private :
		double a , b , c , choice; 
	public:
	   int menu()
	   {
	   	cout<<"Please Enter your choice"<<endl; 
	   	cout<<"1.Add"<<endl;
	   	cout<<"2.Sub"<<endl;
	   	cout<<"3.Mul"<<endl;
	   	cout<<"4.division"<<endl;
	   	cout<<"5.Exit"<<endl;
	   	cin>>choice;
	   	return choice;
	   }
	   void add()
	   {
	   	cout<<" Enter value of a and b "<<endl; 
	   	cin>>a>>b;
	   	c = a+ b ; 
	   	cout<<"Sum of a+b = "<<c;
	   }
	   void sub()
	   {
	   	cout<<"Enter values of a and b "<<endl;
	   	cin>>a>>b;
	   	c = a-b ; 
	   	cout<<"Substraction a - b = "<<c<<endl;
	   }
	   void mul()
	   {
	   	cout<<"Enter values of a and b "<<endl;
	   	cin>>a>>b;
	   	c = a*b ; 
	   	cout<<"Multiplication a*b = "<<c<<endl;
	   }
	   void division()
	   {
	   	cout<<"Enter values of a and b "<<endl;
	   	cin>>a>>b;
	   	c = a/b ; 
	   	cout<<"DIvision a/b = "<<c; 
	   }
};
int main()
{ 
	calculator c ; 
	while(1)
	{
    switch(c.menu())
    {
    	case 1:
    		c.add();
    		getch();
    		break;
    	case 2:
    		c.sub();
    		getch();
    		break; 
    	case 3:
    		c.mul();
    		getch();
    		break;
    	case 4:
    		c.division();
    		
    		getch();
    		break;
    	case 5:
		    exit(0);	
	}
	system("CLS");
}
getch();
return 0 ; 
	
}
