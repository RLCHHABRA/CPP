#include <conio.h>
#include <graphics.h>
#include<iostream>
using namespace std ; 
int main()
{
int n,i,j,k,gd,gm,dy,dx;
int x,y,temp;
int a[20][2],intersect[20];
float slope[20];
cout<<"\n\n\tEnter the no. of edges of polygon : " ; 
cin>>n ; 
cout<<"\n\n\tEnter the cordinates of polygon :\n\n\n " ; 
for(i=0;i<n;i++)
{
cout<<"\tX"<<i<<" Y"<<i; 
cin>>a[i][0]>>a[i][1] ; 
}

a[n][0]=a[0][0];
a[n][1]=a[0][1];
//detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
for(i=0;i<n;i++)
{
line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
}
getch() ; 
for(i=0;i<n;i++)
{
dy=a[i+1][1]-a[i][1];
dx=a[i+1][0]-a[i][0];

if(dy==0) slope[i]=1.0;

if((dy!=0)) 
{
slope[i]=(float) dx/dy;
}
}
for(y=480;y>0;y--)
{
k=0;
for(i=0;i<n;i++)
{

if( ((a[i][1]<=y)&&(a[i+1][1]>y))||
((a[i][1]>y)&&(a[i+1][1]<=y)))
{
intersect[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
k++;
}
}
for(j=0;j<k-1;j++) 
for(i=0;i<k-1;i++)
{
if(intersect[i]>intersect[i+1])
{
temp=intersect[i];
intersect[i]=intersect[i+1];
intersect[i+1]=temp;
}
}
setcolor(WHITE);
for(i=0;i<k;i+=2)
{
line(intersect[i],y,intersect[i+1]+1,y);
delay(5);
}

}
getch();
closegraph();
return 0;
}

