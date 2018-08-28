#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class STUDENT
{
	char name[30],branch[30],;
	int roll,year;
	float tution_fee,hostel_fee;
	public:
		void add();
		void modify();
		void Delete();
		void see();
	
	
}student[200];
char cname[] = "nit hamirpur";
char ch ; 
int main()
{   int choice;
	char college_name[40];
	while(1)
	{
		cout<<"Enter your college name\n";
		gets(college_name);
		if(strcmp(college_name,cname)==0)
		{
		 cout<<"Welcome to NITH \n";
		 cout<<"please Enter your choice\n";
		 cout<<"1.Entry of new student\n";
		 cout<<"2.Modify detail of an student\n";
		 cout<<"3.Remove accout \n";
		 cout<<"4.See all students detail\n";
		 cout<<"5.Quit\n";
		 cin>>choice;
		 switch(choice)
		 {
		 	case 1:
		 		add();
		 		break;
		 	case 2:
		 		modify();
		 		break;
		 	case 3:
		 		Delete();
		 		break;
		 	case 4:
		 		see();
		 		break;
		 	case 5:
		 		exit(0);
		 	default:
		 		cout<<"Please enter vailed choice\n";
			 }	
		}
		else
		{
			cout<<"Please Enter valid name hint 'nit h... r\n";
		}
		
	}
 
	
}
void STUDENT::add()
{   fstream file;
    file.open()
	ch = 'y';
	while(ch == 'y')
	{
		cout<<"Enter your roll number\n";
		cin>>roll;
		cout<<"Enter your name\n";
		fflush(stdin);
		gets(name);
		cout<<"Enter your branch\n";
		fflush(stdin);
		gets(branch)
		cout<<"Enter your year of study\n";
		cin>>year;
		cout<<"Enter your tution fee\n";
		cin>>tution_fee;
		cout<<"Enter your hostel fee\n";
		cin>>hostel_fee;
		
	}
}

