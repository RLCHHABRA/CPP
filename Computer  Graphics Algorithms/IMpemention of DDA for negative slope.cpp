//DDA line drawing method for negative slope 
// in this algo we move given directions
// 1 . We can move up to down like (1,100) to (1 ,200) but not down to up ;
// 2 . we can move left to right like (2,200) t0 (200,200) but not right to left;
// 3 . If slope is negative than x1,y1 coordinate starts from near by left side edge ;
// 4 . If slope is positive than x1,y1 starts from near by  uper axixs . 
#include<iostream>
#include<conio.h>
#include<cmath>
#include<graphics.h>
using namespace std;
class DDA
{
	private:
		float x1 , y1 , x2 , y2 , dx , dy , m ; 
	public:
		void get_points()
		{
			cout<<"Enter values of x1 , y1 "<<endl;
			cin>>x1>>y1;
			cout<<"Enter values of x2 , y2 "<<endl;
			cin>>x2>>y2;
			slope();
		}
		void slope()
		{
			dx = x2 - x1 ; 
			dy = y2 - y1 ;
			if(dx !=0 && dy !=0)
			{ 
			m = dy/dx ; // slope cant be zero and infinity
		    }
			if(m>0 && dx !=0 && dy !=0)
			{
				positive( m ); // if we can draw a line of positive slope .
			}
			if(m<0 && dx!=0 && dy !=0)
			{
			    negative( m );//if we can draw a line of negative slope 
			}
			if(dx == 0)
			{   while(y1!=y2)
			{
				y1 = y1 + 1 ; 
				putpixel(x1,y1,2);
			}
	      	}
			if(dy == 0)
			{  
				while(x1 != x2)
				{  
					x1 = x1 + 1 ; 
					putpixel(x1,y1,2);
				}
			}
		
		}
		void positive(float);
		void negative(float);
};
void DDA::positive(float m1)
{
	putpixel(x1,y1,2);
	if(m1<1)
	{   
	    while(x1!=x2 && y1 !=y2)
	    {
		x1 = x1 + 1 ; 
		y1 = y1 + m1 ; 
 		putpixel(x1,round(y1),2);
     	}
	}
	if(m1>1)
	{   
	    while(x1!=x2&&y1!=y2)
	    {
		x1 = x1 + 1/m1 ; 
		y1 = y1 + 1 ; 
		putpixel(round(x1), y1, 2);
	}
	}
	if(m1==1)
	{   while(x1!=x2 && y1 !=y2)
	{
		x1 = x1 + 1 ; 
		y1 = y1 + 1 ; 
		putpixel(x1, y1 , 2 );
}
	}
}
void DDA::negative(float m2 )
{
	m2 = m2*(-1);
	if(m2>1)
	{ while(x1!=x2&&y1!=y2)
	  {
		x1 = x1+1/m2;
		y1 = y1 - 1 ;
		putpixel(round(x1),y1,2);
	}
	}
	if(m2<=1)
	{   while(x1!=x2 && y1 !=y2)
	{
		y1 = y1 - m2 ; 
		x1 = x1 + 1 ;
		putpixel(x1,round(y1),2);
	}
	}
}
int main()
{
 int gd = DETECT , gm ,l ; 
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 DDA object  ;
 cout<<"Enter how much line you wants to print"<<endl;
 cin>>l;
 while(l>0)
 {
 object.get_points();
 l--;
 }
 getch();
 closegraph();
 return 0 ; 	
}

