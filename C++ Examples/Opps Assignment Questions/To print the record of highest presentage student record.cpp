#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
static int count = 0 ;
class student
{
	private:
		float sub1 , sub2 , sub3, sub4 , p ;
		string name ; 
		int roll ; 
	public:
		void get_data()
		{
			cout<<"Eneter name of student"<<endl;
			fflush(stdin);
			getline(cin,name);
			cout<<"Enter roll number of student"<<endl;
			cin>>roll ; 
			percentage();
		}
		void percentage()
		{
			cout<<"Enter marks of sub1"<<endl;
			cin>>sub1;
			cout<<"Enter marks of sub2"<<endl;
			cin>>sub2;
			cout<<"Enter marks of sub3"<<endl;
			cin>>sub3;
			cout<<"Enter marks of sub4"<<endl;
			cin>>sub4;
			
			p  = (sub1+sub2+sub3+sub4)/4;  // (total_obtain_marks)*100/total_marks
		}
		float per()
		{
			return p ; 
		}
		string nam()
		{
			return name ;
		}
		int rol()
		{
			return roll;
		}
};
int main()
{    
    int n ;
    cout<<"Enter number of students"<<endl;
    cin>>n;
    student obj[n];
    float  lrg  = obj[0].per() ;
    for(int i=0 ; i<n ;i++)
    {
    	cout<<"Enter detail of "<<i+1<<" th student"<<endl;
    	obj[i].get_data();
	}
	for(int i=0 ; i<n ; i++)
	{
	    if(obj[i+1].per()>obj[i].per())
	    {
	    	lrg = obj[i+1].per();
	    	count++;
		}
	}
	cout<<"Record of highest percentage student\n"<<endl;
	cout<<"Name of student is = "<<obj[count].nam()<<endl;
	cout<<"Roll number of student is = "<<obj[count].rol()<<endl;
	cout<<"Percentage of student is = "<<obj[count].per()<<endl;
	getch();
	return 0 ; 
}

