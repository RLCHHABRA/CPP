#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std ; 
int main()
{
	fstream outf ; 
	string line , read ; 
	outf.open("example.txt", ios::app | ios::out | ios:: in );
	cout<<"Enter any string\n"<<endl;
	while(outf){
	getline(cin,line);
	if(line == "-1") break ; 
	outf<<line;
	}
	cout<<"Entered string was"<<endl;
	while(!outf.eof())
	{
	getline(outf,read);
	cout<<read<<endl;
    }
	outf.close();
	getch();
	return 0 ; 
	
}
