#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
using namespace std ; 
class student
{	private:	int roll ; 	string name ; 	float year ; 	string branch ; 
	public:	void get_data()
	{	cout<<"Enter name of student"<<endl;
		fflush(stdin);
		getline(cin,name);
		cout<<"Enter name of branch of student"<<endl;
		getline(cin,branch);
		cout<<"ENter roll number of student"<<endl;
		cin>>roll;
		cout<<"Enter year of student in which he study"<<endl;
		cin>>year ; }
	void display()
	{	cout<<"name of student is : "<<name<<endl;
		cout<<"roll number of student is : "<<roll<<endl;
		cout<<"branch is : "<<branch<<endl;
		cout<<" year is : "<<year<<endl	;} };
int main()
{   int n ; 
	cout<<"Enter Number of studets"<<endl;
	cin>>n; 
	student obj[n];
	for(int i =0 ; i<n ; i++)
{	cout<<"Enter details of "<<i+1<<" student"<<endl;
	obj[i].get_data();}
for(int i=0 ; i< n ; i++)
{	cout<<"Details of "<<i+1<<" student\n\n"<<endl;
	obj[i].display();}
	getch(); return 0 ; }
