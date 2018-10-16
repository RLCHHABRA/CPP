#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ; 
class personal
{
    protected:
		string name ; 
		string gender ; 
		int age ; 
		void get()
		{   cout<<"Enter Name\n"<<endl;
		    fflush(stdin);
		    getline(cin,name);
		    cout<<"\nEnter gender\n"<<endl;
		    getline(cin,gender);
		    cout<<"\nEnter age\n"<<endl;
		    cin>>age;	}    };
class professional
{
	protected:
		string company_name ; 
		int employee_id ; 
		float salary ; 
		void get_data()
		{   cout<<"\nEnter company name\n"<<endl;
			fflush(stdin);
			getline(cin,company_name);
			cout<<"\nEnter Id\n"<<endl;
			cin>>employee_id;
			cout<<"\nEnter salary\n"<<endl;
			cin>>salary;	}   };
class employee:public personal , public professional
{	public:
		void get_info()
		{	get();	get_data();  	}
		void display()
		{ //cout<<"-------------------------------------------------------------------"
			cout<<"\nName :"<<name<<endl;
			cout<<"\nCompany Name :"<<company_name<<endl;
			cout<<"\nEmployee Id :"<<employee_id<<endl;
			cout<<"\nSalary :"<<salary<<endl;
			cout<<"\nAge :"<<age<<endl;
			cout<<"\nGender :"<<gender<<endl;
			cout<<"--------------------------------------------------------------------";	}     };
int main()
{	int n ; 
	cout<<"Enter Number of employees"<<endl;
	cin>>n ;
	employee e[n];
	for(int i=0 ; i<n ; i++)
	{	cout<<"\n\nENter details of "<<i+1<<" employee"<<endl;
		e[i].get_info();	}
	for(int i=0 ; i<n ;i++)
  {   cout<<"----------------------------------------------------------------------";
		cout<<"\n\nDetails of "<<i+1<<" employee\n"<<endl;
		e[i].display();	}   	getch();
	return 0 ;    }
