#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class employee
{	
private :
   string name ; 
   int 	id ; 
   float salary ; 
public:
	employee() {   }
	employee(string nam , int i , float salar)
	{
	    name = nam ; 
		id = i ; 
		salary = salar ; 
	}
	float salary_r()
	{
		return salary ;
	}
	string nam()
	{
		return name;
	}
};
int main()
{   int n , count = 0; 
    cout<<"Enter number of employees \n";
    cin>>n ; 
    int id ; 
    string na ; 
    float salary, largest = 0.0;
	employee e[n];
	int i = 0  ;
	for(i=0 ; i<n ; i++) 
	{
	 cout<<"Enter detail of "<<i+1<<" employee\n";
	 cout<<"Enter name of employee\n";
	 fflush(stdin);
	 getline(cin , na);
	 cout<<"Enter id of employee\n";
	 cin>>id; 
	 cout<<"Enter salary of employee\n";
	 cin>>salary;
	 e[i] = { na ,id ,salary };	
	}
	for(i=0;i<n;i++)
	{
		
		if(e[i+1].salary_r()>e[i].salary_r())
		{
			largest = e[i+1].salary_r();
			count = i ;
		}
	}
	cout<<"Largest salary of employee "<<count<<endl;
	cout<<"Name is "<<e[count+1].nam()<<endl;
	cout<<"Largest salary is ="<<e[count+1].salary_r();
	return 0 ;
}
