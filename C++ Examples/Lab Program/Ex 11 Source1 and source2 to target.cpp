#include<fstream>  // whenever you write in file an integer value than you should include "\n" new line after every integer.
#include<iostream>
#include<conio.h>
using namespace std ; 
void buble_sort(int* , int);
int main()
{
	int n1 , n2 , temp , k = 0   ; 
	fstream file1 , file2 , file3 ; 
	cout<<"\nEnter how many integers you wants to enter in first file: ";
	cin>>n1 ; 
	cout<<"\nEnter how many intergers you wnats to enter in second file: ";
	cin>>n2 ; 
	int f1[n1] , s1[n1] ; 
	int f2[n2] , s2[n2]  ; 
	int f3[n1+n2] ; 
	cout<<"Enter intergers in first file :"<<endl ;
	for(int i=0 ;i<n1 ; i++)
	{
		cin>>f1[i] ; 
	}
    buble_sort(f1, n1);
	cout<<"Enter integers in second file :"<<endl;
	for(int i=0 ;i<n2 ; i++)
	{
		cin>>f2[i];
	}
	buble_sort(f2,n2);

	file1.open("Source1.txt",ios::out|ios::in|ios::app|ios::binary) ; 
	if(!file1){ cout<<"File1 open fail"<<endl; exit(0);}

	for(int i=0 ; i<n1 ;i++)
	{
		file1<<f1[i]<<"\n" ; 
	}
    file1.seekg(0,ios::beg);
	while(file1.eof() == NULL)
	{
		file1>>temp;
		f3[k] = temp ; 
		k++ ;  
	}
	k = 0 ; 
    file1.close() ; 
    file1.clear() ; 
	file2.open("Source2.txt",ios::in|ios::out|ios::app|ios::binary) ;
    if(!file2) { cout<<"File2 open fail"<<endl; exit(0) ; }
	for(int i=0 ;i<n2 ; i++)
	{
		file2<<f2[i]<<"\n";
	}
	file2.seekg(0,ios::beg) ; 
    while(file2.eof() == NULL)
	{
		file2>>temp ;
		f3[n1+k] = temp ; 
		k++ ;   	
	} 

	file2.close() ; 
	file2.clear()  ; 
	buble_sort(f3 , n1+n2) ; 	
    file3.open("Target.txt", ios::app|ios::binary)  ; 
	if(!file3) { cout<<"File3 open fail"<<endl ; exit(0 );}
	for(int i= 0 ; i<n1+n2 ; i++)
	{
		file3<<f3[i]<<"\n" ; 
	}
	cout<<"Content Write in Target file successefully !!"<<endl;
	file3.close()  ; 
	getch() ; 
	return 0 ; 	
}
void buble_sort(int *p , int n )
{   int temp ; 
	for(int i=0 ; i<n ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i) ; 
				*(p+i)  = *(p+j) ; 
				*(p+j) = temp ; 
			}
		}
	}
}
