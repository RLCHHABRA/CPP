#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
using namespace std;
class Reverse_string
{
	private:
		string str; 
		float l ;
		char	 *p , *q ; 
	public:
		void get_string()
		{
			cout<<"Enter a string \n";
			getline(cin,str);
	   }
	  string reverse_s()
	  {
	  	l = str.size();
	  	for(int i=0;i<l/2;i++)
	  	{
	  		*p = str[i] ; 
	  		*q = str[l-1-i];
	  		str[i] = *q;
	  		str[l-1-i] = *p;
		  }
		  return str;
	    
	  }
};
int main()
{
	Reverse_string a;
	a.get_string();
    cout<<a.reverse_s();
return 0 ;	
}
