#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ; 
class information
{
	protected:
		string name  ; 
		int e_id ; 
		int roll ; 
		float salary , fee  ; 
	
}; 
class student: public information
{   public:
	void get_sdata()
	{   
	    cout<<"Enter details of student"<<endl;
		cout<<"\nName :";
		fflush(stdin);
		getline(cin , name);
		cout<<"\nRoll :" ; 
		cin>>roll ; 
		cout<<"\nFee :" ;
		cin>>fee ; 
	}
	void display1()
	{
	 cout<<"-----------------------------------------------------"<<endl;
	 cout<<"\nDisplay detais of student"<<endl;
	 cout<<"\nName :"<<name ; 
	 cout<<"\nRoll :"<<roll ; 
	 cout<<"\nFee  :"<<fee<<endl ; 	
	 cout<<"-----------------------------------------------------"<<endl;
	}
};
class employee: public information
{
	public:
		void get_edata()
		{
			cout<<"Enter details of employee"<<endl;
			cout<<"\nName :";
			fflush(stdin);
			getline(cin, name);
			cout<<"\nID :";
			cin>>e_id ; 
			cout<<"\nSalary :" ; 
			cin>>salary ; 
		}
		void display2()
		{   cout<<"------------------------------------------------------------------------------"<<endl;
			cout<<"\nDisplay details of employee"<<endl;
			cout<<"\nName :"<<name ; 
			cout<<"\nID :"<<e_id ; 
			cout<<"\nSalary :"<<salary<<endl ; 
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
};
int main()
{
	student s_obj ; 
	employee e_obj ; 
	s_obj.get_sdata() ; 
	s_obj.display1()  ;
	e_obj.get_edata() ; 
	e_obj.display2() ; 
	getch() ; 
	return 0 ; 
};
