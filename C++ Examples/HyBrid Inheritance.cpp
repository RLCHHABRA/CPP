#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int roll ; 
	public:
		void getroll(int x )
		{
			roll = x ; 
		}
		void put_roll()
		{
			cout<<"\nRoll no of student is = "<<roll;
		}
};
class test:public student
{
	protected:
		float t1, t2 ; 
	public:
		void get_data(float x , float y)
		{
			t1 = x ; 
			t2 = y ;
		}
	    void put_marks()
	    {
	    	cout<<"\nMarks Obtained in test1 = "<<t1<<"\nMarks obtained in test2 = "<<t2;
		}
};
class sports
{
	protected:
		float sp ; 
	public:
		void get_sp(float sp)
		{
			this->sp = sp ;
		}
		void put_sp()
		{
			cout<<"\nSport score is = "<<sp;
		}
};
class result:public test, public sports
{
	private:
		float total; 
	public:
	void disp()
	{
		put_roll();
		put_marks();
		put_sp();
		cout<<"\nTotal marks is test1 + test2 + sport_marks "<<t1+t2+sp;
	}
};
int main()
{
	result obj ; 
	obj.getroll(101);
	obj.get_data(80.5,82.3);
	obj.get_sp(95);
	obj.disp();
	return 0 ; 
}

