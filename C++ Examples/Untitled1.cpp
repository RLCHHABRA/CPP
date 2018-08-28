#include<iostream>
using namespace std;
void Odd_Occurrence()
	{   int n, k =0;
		cout<<"Enter size of array\n";
		cin>>n;
		int a[n];
		cout<<"Enter elements of array\n";
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{   k = 1;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) 
				{ k++;}
				                 
			}
			if(k%2!=0) 
			{cout<<"\nOdd Occurrence of"<<a[i]<< "is"<<k;
			 }
		}
	}

int main()
{
	Odd_Occurrence();
	return 0 ;
}
