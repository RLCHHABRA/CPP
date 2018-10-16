#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ; 
class get_info
{
	protected:
		string name ; 
		string college;
		string branch;
		int roll ; 
		void get_data()
		{  fflush(stdin);
	   	   cout<<"Enter Sudent name"<<endl; getline(cin,name);
	       cout<<"Enter branch name"<<endl; getline(cin,branch);
		   cout<<"Enter roll number"<<endl; cin>>roll; fflush(stdin);
		   cout<<"Enter college name"<<endl; getline(cin,college);		}  };
class student : public get_info
{	public:
		void get()
		{		get_data();	}
		void display()
		{	cout<<"\nName :\t"<<name<<endl;
			cout<<"\nRoll No:\t"<<roll<<endl;
			cout<<"\nBranch :\t"<<branch<<endl;
			cout<<"\nCollege :\t"<<college<<endl;
			cout<<"------------------------------------------------------------------";	}  };
int main()
{	int n ; 
	cout<<"\nEnter number of students\n"<<endl;
	cin>>n ; 
	student s[n];
	for(int i=0 ; i<n ; i++)
	{	cout<<"\nENter detail of "<<i+1<<" student\n"<<endl;
		s[i].get();	}
	for(int i=0 ; i<n ; i++)
	{	cout<<"------------------------------------------------------------------------";
	cout<<"\nDisplay details of "<<i+1<<" Stuent\n"<<endl;
		s[i].display();	}	getch();
	return 0 ; 
}
