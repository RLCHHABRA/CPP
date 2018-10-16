#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std ; 
class String
{
	private:
		string str1 ; 
	public:
	    void get_str()
	    {
	    	cout<<"\nEnter a string\n"<<endl;
	    	getline(cin, str1);
	    
		}
		String operator+(String obj)
		{
			String s ;
			s.str1 = str1 + obj.str1 ; 
			return s ; 
		}
		void display()
		{
			cout<<"\n\nAfter Concatenate\n"<<endl;
			cout<<str1<<endl;
		}
};
int main()
{
	String s1 , s2 , s3  ; 
	s1.get_str();
	s2.get_str();
	s3 = s1 + s2 ; 
	s3.display();
	getch();
	return 0 ; 
}
