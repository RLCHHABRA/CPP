#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std ; 
class student
{
	int roll ; 
	float marks , fee ; 
	string name ; 
	public:
	   void get_data()
	   {    
	       fflush(stdin) ; 
		   cout<<"\nEnter name of student : " ; 
		   getline(cin,name) ; 
		   cout<<"\nEnter roll Number : " ; 
		   cin>>roll ; 
		   cout<<"\nEnter marks : " ; 
		   cin>>marks ; 
		   cout<<"\nEnter fee : " ; 
		   cin>>fee ; 
	   }
	   void put_data() 
	   {   cout<<"\nName "<<"\tRoll"<<"\tMarks"<<"\tFee";
		   cout<<"\n"<<name<<"\t"<<roll<<"\t"<<marks<<"\t"<<fee ; 
	   }
	   int rol()
	   {
		   return roll ; 
	   }
	   void menu()
	   {
		   cout<<"1.Add new data"<<endl ; 
		   cout<<"2.Modify Data"<<endl ; 
		   cout<<"3.Search "<<endl ; 
		   cout<<"4.Delete Data "<<endl ; 
		   cout<<"\nEnter Choice : "; 
	   }
} ; 
int main()
{
	fstream inoutfile ; int choice , sroll ; 
	student obj ;
	inoutfile.open("file1.txt",ios::in|ios::out|ios::app) ; 
	obj.menu() ; 
	cin>>choice ; 
	switch(choice)
	{
		case 1: 
		   obj.get_data() ; 
	       inoutfile.write((char*)&obj , sizeof(obj)) ; 
		   break ; 
		case 3:
		   cout<<"Enter Roll number that you wants to search "<<endl ; 
		   cin>>sroll ; 
		   inoutfile.seekg(0) ; 
		   while(inoutfile.read((char*)&obj , sizeof(obj))) 
        	{
				if(sroll == obj.rol())
				{
				   cout<<"Search Data :"<<endl ; 
		           obj.put_data() ; 
				}
	        }
			break ; 
		case 2:
		    cout<<"\nEnter roll number that you wants to modify :" ; 
			cin>>sroll ; 
			inoutfile.seekg(0) ; 
		   while(inoutfile.read((char*)&obj , sizeof(obj))) 
        	{
				if(sroll == obj.rol())
				{
				   cout<<"Search Data for modify :"<<endl ; 
		           obj.put_data() ; 
				   inoutfile.seekg(-sizeof(obj) , ios::cur) ; 
				   obj.get_data() ; 
				   inoutfile.write((char*)&obj , sizeof(obj)) ; 
				}
				
	        }
			cout<<"Data Successfully Modified : "<<endl ; 
			break ; 
		   
	}	    
	
	
	
	
	inoutfile.close() ; 
	getch() ; 
	return 0 ; 
}	   