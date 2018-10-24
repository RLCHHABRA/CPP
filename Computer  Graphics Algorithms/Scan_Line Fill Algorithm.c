#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{

int n,i,j,k,gd,gm,dy,dx;
int x,y,temp;
int a[20][2],intersect[20];
float slope[20];


clrscr();

//Step1: Take points of polygon as input from user and store them in 2d array 

printf("\n\n\tEnter the no. of edges of polygon : ");
scanf("%d",&n);
printf("\n\n\tEnter the cordinates of polygon :\n\n\n ");

for(i=0;i<n;i++)
{
printf("\tX%d Y%d : ",i,i);
scanf("%d %d",&a[i][0],&a[i][1]);
}

a[n][0]=a[0][0];
a[n][1]=a[0][1];


detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");


//Step2: Draw Polygon

for(i=0;i<n;i++)
{
line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
}


//Step3: Calculate 1/slope and put it to the 1d  array 

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


/*Step4:  For  each scan line 
1. Find its  intersection with the edges and store it in 1d array
2.Arrange the intersecting points in increasing order 
3.Draw line b/w intersection points */

// 1. Find its  intersection with the edges and store it in 1d array
// xk+1 = xk + 1/m 

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
//2.Arrange the intersecting points in increasing order 
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
//3.Draw line b/w intersection points
setcolor(35);
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
