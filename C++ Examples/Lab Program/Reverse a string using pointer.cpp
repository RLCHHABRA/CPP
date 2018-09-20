#include<iostream>
#include<conio.h>
using namespace std;
class reverse
{
	private:
		string str ; 
		char a , b ;
	public:
		void get_string()
		{
			cout<<"Enter any string"<<endl;
			getline(cin,str);
		}
		string revers()
		{
		  char	*p  = & a , *q = & b ;
		  int l ;  
			l = str.size();
			for(int i=0 ; i<l/2 ; i++)
			{
				*p = str[i];
				*q = str[l-1-i];
				str[i] = *q  ; 
				str[l-1-i] = *p ; 
			}
			return str ; 
		}
};
int main()
{
	reverse obj ; 
	obj.get_string();
    cout<<"Reverse string is "<<endl;
    cout<< obj.revers();
	getch();
	return 0 ; 
}
