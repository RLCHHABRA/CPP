#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
	protected:
		int roll ;
	public:
		void get_roll(int);
		void put_roll();
};
void stu::get_roll(int x)
{
	roll = x ;
}
void stu::put_roll()
{
	cout<<"\nRoll number is = "<<roll;
}
class test: public stu 
{
	protected:
		float m1 , m2 ; 
	public:
		void get_marks(float , float);
		void put_marks();
};
void test::get_marks(float x , float y )
{
	m1 =  x ; m2 = y ;
}
void test::put_marks()
{
	cout<<"\nMarks m1 ="<<m1<<"\nMarks m2 = "<<m2;
}
class result:public test 
{
	private:
		int total;
	public:
		void display();
};
void result::display()
{
 total = m1 + m2 ;
 put_roll();
 put_marks();
 cout<<"\nTotal marks is = "<<total;	
}
int main()
{
	int roll;
	float m1 ,m2 ;
	result r ;
	cout<<"Enter roll number of student\n";
	cin>>roll;
	cout<<"Enter marks of m1 and m2 \n";
	cin>>m1>>m2;
	r.get_roll(roll);
	r.get_marks(m1,m2);
	r.display();
	getch();
	return 0 ;
	
}
