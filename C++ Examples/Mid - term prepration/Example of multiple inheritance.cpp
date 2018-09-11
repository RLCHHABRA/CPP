#include<iostream>
#include<conio.h>
using namespace std ; 
class Triangle 
{
	private:
		int l , h ; 
	public:
		void get_L_H()
		{   
		    cout<<"Enter L and H for a triangle"<<endl; 
			cin>>l>>h; 
		}
	protected:
		float area_t()
		{
			return 0.5*l*h ; 
		}
};
class Rectangle
{
	private:
		int a , b ; 
	public:
		void get_A_B()
		{
			cout<<"Enter value of a and b for rectangle"<<endl; 
			cin>>a>>b; 
		}
	protected:
		float area_r()
		{
			return a*b ; 
		}
};
class Area : public Triangle , public Rectangle 
{
	public:
		void display()
		{
			cout<<"Area of Triangle is = "<<float(area_t())<<endl; 
			cout<<"Area of Rectangle is = "<<float(area_r())<<endl;
		}
};
int main()
{
	Area a ; 
	a.get_L_H();
	a.get_A_B(); 
	a.display();
	getch();
	return 0 ; 
}
