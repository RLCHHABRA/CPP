#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ; 
class plant 
{
	private:
		string name ;
		int code ; 
		string type ; 
		float price ; 
	public:
		plant()
		{
			
		}
		plant(string n , int c , string t , float p)
		{
			name = n ; 
			code = c ; 
			type = t ; 
			price = p ; 
		}
	    void display()
	    {
	    	cout<<"Name of plant = "<<name<<endl ; 
	    	cout<<"code of plant = "<<code<<endl;
	    	cout<<"Type of plant = "<<type<<endl;
	    	cout<<"Price of plant = "<<price<<endl;
		}
		~plant()
		{
			cout<<"Destructor is called"<<endl;
		}

};
int main()
{
	int n ;
	string x , y ; 
	int z ; 
	float q ;  
	cout<<"How many plant"<<endl;
	cin>>n ; 
	plant p[n];
	cout<<"Enter detail of "<<n<<" plants"<<endl;
	for(int i=0 ; i<n ; i++)
	{
		cout<<"Enter name of plant "<<endl;
		fflush(stdin);
		getline(cin,x);
		cout<<"Enter code of plant"<<endl;
		cin>>z ; 
		cout<<"Enter type of plant"<<endl;
		fflush(stdin);
		getline(cin,y); 
		cout<<"Enter price of plant"<<endl;
		cin>>q;
		p[i] = {x , z , y , q };
	}
	cout<<"The detail of all plants"<<endl;
	for(int i=0 ; i<n ; i++)
	{
		p[i].display();
	}
	getch();
	return 0 ; 
}

