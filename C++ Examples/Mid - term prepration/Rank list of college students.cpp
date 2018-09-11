#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std ;
class student
{
	public:
		int roll ; 
		string name ; 
		float marks ; 
		void get_data(int i)
		{
			
			cout<<"Enter name of "<<i+1<< " student"<<endl;
			fflush(stdin);
			getline(cin,name);
			cout<<"Enter roll number of student"<<endl;
			cin>>roll; 
			cout<<"Enter marks of student"<<endl;
			cin>>marks ; 
		}
	    void display(int i)
	    {
	    	cout<<" Rank "<<i+1<<" marks "<<marks<<" Name "<<name<<" Roll number "<<roll<<endl; 
		}
};
int main()
{
	int n , temp1  ;
	float temp  ; 
	string temp2 ;  
	cout<<"How many student"<<endl;
	cin>>n ; 
	student s[n] ;
	for(int i = 0 ; i < n ;i++)
	{
		s[i].get_data(i);
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j= i+1 ; j<n ; j++)
		{
			if(s[i].marks<s[j].marks)
			{
               temp = s[i].marks ; 
               s[i].marks = s[j].marks ; 
               s[j].marks = temp ; 
               temp1 = s[i].roll ; 
               s[i].roll = s[j].roll ; 
               s[j].roll  = temp1 ; 
               temp2 = s[i].name; 
               s[i].name = s[j].name ; 
               s[j].name = temp2 ; 
			}
		}
	}
	for(int i=0 ; i<n ; i++)
{
	s[i].display(i); 
}
getch();
return 0 ; 
}

