#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	int gd = DETECT , gm ,n , a[100][2]; 
	initgraph(&gd, &gm , "C:\\TC\\BGI");
    cout<<"Enter the number of vertexs\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cout<<"Enter Value of X"<<i+1<<" Y"<<i+1;
    	cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++)
	{   if(i != n-1){
		line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);}
		else
		{
			line(a[i][0],a[i][1],a[0][0],a[0][1]);
		}
		
	}
	getch();
	closegraph();
	return 0 ;
}
