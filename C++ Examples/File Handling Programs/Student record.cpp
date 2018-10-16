#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std ; 
class student 
{
	private: 
	char name[10]  ; 
	int roll ; 
	char branch[10] ; 
	char college[10] ; 
	void get_data()
	{
		cout<<"\nEnter Name"<<endl; 
	    cin>>name ; 
    	cout<<"\nENter Branch"<<endl;
		cin>>branch;
		cout<<"\nENter college"<<endl;
		cin>>college ; 
		cout<<"\nEnter roll number of studet"<<endl;
		cin>>roll ; 
	}
	void put_data()
	{
		cout<<"\n"<<name<<"\t"<<roll<<"\t"<<branch<<"\t"<<college;
	}
	public: 
	void add_record()
	{
		fstream file ; 
		student s1 ; 
		file.open("Student1.txt",ios::app|ios::binary);
		s1.get_data();
		file.write((char *)&s1 , sizeof(s1));
		file.close(); 
	}
	void display()
	{
		fstream file ; 
		student s2 ; 
		file.open("Student1.txt", ios::in|ios::binary) ; 
		cout<<"\nName\t"<<"Roll\t"<<"Branch\t"<<"College\n";
		while((file.read((char *)&s2 , sizeof(s2)) )!= NULL){

		 s2.put_data() ; }
		
		file.close();
	}
} ; 
int main()
{
	student s ; 
	char ch = 'y' ; 
	while(ch == 'y'||ch == 'Y')
	{
		s.add_record() ; 
		cout<<"Do you wants to add more record y/n"<<endl ; 
		ch = getche() ; 
	}
//	cout<<"\nName\t"<<"Roll\t"<<"Branch\t"<<"College\n";
	s.display() ; 
	getch();
	return 0 ; 
	
}
