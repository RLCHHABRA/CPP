#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ; 
class student
{   
    protected:
	string name , branch ; 
	int roll ; 
    void get_data()
    {   
        fflush(stdin);
    	cout<<"\nName :";
    	getline(cin, name);
    	fflush(stdin);
    	cout<<"\nBranch :";
    	getline(cin, branch);
    	cout<<"\nRoll :";
    	cin>>roll ; 
	}
	void display1()
	{
		cout<<"\nName :"<<name ; 
		cout<<"\nBranch :"<<branch;
		cout<<"\nRoll :"<<roll<<endl ; 
	}
};
class test : public student
{
   protected:
   float t_marks ; 
   void get_test_marks()
   {
   	get_data();
   	cout<<"\nTest Marks :"; 
   	cin>>t_marks ; 
   }
   void display2()
   {
   	display1();
   	cout<<"\nTest marks :"<<t_marks;
   }
};
class sports:public student
{
	protected:
		float s_marks ; 
		void get_sports_marks()
		{   
			cout<<"\nSports Marks :";
			cin>>s_marks ; 
		}
		void display3()
		{
			cout<<"\nSports marks :"<<s_marks;
			
		}
};
class result: public test , public sports 
{
	public:
		void get_info()
		{
			get_test_marks();
			get_sports_marks() ; 
		}
		void display()
		{
			display2();
			display3() ; 
			cout<<"\nTotal Marks:"<<s_marks+t_marks;
		}
};
int main()
{
	int n  ; 
	cout<<"\nEnter number of students :"; 
	cin>>n ; 
	result obj[n];

	for(int i=0 ; i<n ; i++)
	{	
	    cout<<"\nEnter details of"<<i+1<<" student"<<endl;
		obj[i].get_info() ; 
	}

	for(int i=0 ; i<n ; i++){
		cout<<"\n---------------------------------------------------------------------"<<endl;
		cout<<"\nDisplay details of"<<i+1<<" students"<<endl;
		obj[i].display() ; 
		cout<<"\n---------------------------------------------------------------------"<<endl;
	}
	getch(); 
	return 0 ; 
}
