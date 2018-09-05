#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<cmath>
using namespace std ; 
// for cohen sutherland line cliping 
int compute_code(double , double , double , double, double , double);
void cohen_sutherland(double , double , double , double);
const int INSIDE = 0 ; const int TOP = 8 ; const int BOTTOM = 4 ; const int RIGHT = 2 ; const int LEFT = 1 ; 
// decimal number will automatically change in binary number
// above functions are use in sutherland line clipping 
class transformation
{
	private:
		int x1 , y1 , x2 , y2 , x , y , t[2][2] ;
    public:
    	void menu();
    	void translation();
    	void shearing();
    	void rotation();
    	void cohen_sutherland_line_clipping();
    //	void transformation_parallal_line();
    //	void transformation_intersecting_line();
    
};
void transformation::menu()
{
	cout<<"\n\t************ Welcome To 2D - Transformation ****************"<<endl;
    cout<<"Please Enter your choice"<<endl;
    cout<<"1.Translation"<<endl;
    cout<<"2.Shearing"<<endl;
    cout<<"3.Rotation"<<endl;
    cout<<"4.Cohen sutherland line clipping"<<endl;
    cout<<"5.Transformation of parallal lines"<<endl;
    cout<<"6.Transformation of intersecting lines"<<endl;
    cout<<"7.exit";
}
int main()
{
	transformation obj ; 
	int gd = DETECT , gm , choice; 
    initgraph(&gd  , &gm , "C:\\TC\\BGI");
    while(1)
    {
    	obj.menu();
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			obj.translation();
    			getch();
    			cleardevice();
    			break;
    		case 2:
    			obj.shearing();
    			getch();
    			cleardevice();
    			break;
    		case 3:
    			obj.rotation();
    			getch();
    			cleardevice();
    			break;
    		case 4:
    			obj.cohen_sutherland_line_clipping();
    			getch();
    			cleardevice();
    			break ; 
    	/*	case 5:
    			obj.transformation_parallal_line();
    			getch();
    			cleardevice();
    			break;
    		case 6:
    			obj.transformation_intersecting_line();
    			getch();
    			cleardevice();
    			break;*/
    		case 7:
    			exit(0);
    		default:
    			cout<<" !!!!!!!!!!!!!! Please enter vailed choice"<<endl;
    			break;
    		
		}
		system("CLS");
    	
	}
	getch();
	closegraph();
	return 0 ; 
}
void transformation::translation()
{
	cout<<"Enter x1 , y1 and x2 ,y2 to draw rectangle"<<endl;
	cin>>x1>>y1>>x2>>y2;
	setcolor(3);
	rectangle(x1,y1,x2,y2);
	cout<<"Enter transformation matrix"<<endl;
	for(int i=0 ; i<2;i++)
	{
		for ( int j=0 ; j<2 ; j++)
		{
			cin>>t[i][j];
		}
	}
	x = t[0][0]*x2 + t[1][0]*y2; 
	y = t[0][1]*x2 + t[1][1]*y2 ; 
	cout<<"After Translation new line is "<<endl;
	setcolor(2);
	rectangle(x1+3,y1+3, x , y );
}
void transformation::shearing()
{   
    int shx , shy ,  ch = 0 ; 
	cout<<"Before shearing"<<endl;
    setcolor(7);
	line(50,50,200,50);
	line(200,50,200,200);
	line(200,200,50,200);
	line(50,200,50,50);
	getch();
	setcolor(RED);
	cout<<"Please enter your choice"<<endl;
	cout<<"1.Shearing in  x axis"<<endl; 
	cout<<"2.Shearing in y axis"<<endl;
	cout<<"3.Shearing in both axis"<<endl;
	cin>>ch; 
	switch(ch)
	{
		case 1:
			cout<<"Enter shearing value of shx"<<endl;
			cin>>shx; 
			cout<<"After shearing"<<endl;
				line(50,50,200,50);
            	line(200,50,200+shx,200);
            	line(200+shx,200,50+shx,200);
            	line(50+shx,200,50,50);
            getch();
            cleardevice();
            break ; 
        case 2:
        	cout<<"Enter shearing value of shy"<<endl;
			cin>>shy; 
			cout<<"After shearing"<<endl;
        		line(50,50,200,50+shy);
				line(200,50+shy,200,200+shy);
				line(200,200+shy,50,200);
				line(50,200,50,50);
				getch();
				cleardevice();
				break;
		case 3:
			cout<<"Enter shearing value of shx and shy"<<endl;
			cin>>shx>>shy;
		    line(50,50,200,50+shy);
			line(200,50+shy,200+shx,200+shy);
			line(200+shx,200+shy,50+shx,200);
			line(50+shx,200,50,50);
			getch();
			cleardevice();
			break ; 
	}
}
void transformation::rotation()
{   int thita , ch ; 
    float a , x1 , y1 ; 
    setcolor(7);
	cout<<"Before ration "<<endl; 
	line(300,300,500,500);
	getch();
	setcolor(RED);
	cout<<"Please enter your choice"<<endl; 
	cout<<"1.Anticlocwise Rotation"<<endl; 
	cout<<"2.Clockwise Rotation"<<endl;
	cin>>ch; 
	switch(ch)
	{
		case 1:
			cout<<"Enter Rotation angle"<<endl;
			cin>>thita;
			a = (thita*3.14)/180 ; 
			x1 = 500*cos(a) + 500*sin(a) ; 
			y1 = -500*sin(a) + 500*cos(a);
			cout<<"After rotation"<<endl; 
			line(300,300,x1, y1);
			getch();
			cleardevice();
			break ; 
		case 2:
			cout<<"Enter Rotation angle"<<endl;
			cin>>thita; 
			a = (thita*3.14)/180 ; 
			x1 = 500*cos(a) - 500*sin(a) ; 
			y1 = 500*sin(a) + 500*cos(a) ; 
			cout<<"After rotation"<<endl;
			line(300,300,x1, y1) ; 
			getch() ; 
			cleardevice(); 
			break  ; 
	}
}
void transformation::cohen_sutherland_line_clipping()
{
	double Xmin , Ymin , Xmax , Ymax ; 
	cout<<"Enter Value of Xmin , Ymin , Xmax , Ymax to draw window"<<endl; 
	cin>>Xmin>>Ymin>>Xmax>>Ymax;
    cohen_sutherland(Xmin , Ymin , Xmax , Ymax );
}
void cohen_sutherland(double Xmin, double Ymin,double Xmax , double Ymax )
{  
    double x1 ,y1, x2,y2 , x ,y ; 
    int code1 =0  , code2 =0 , out_code =0 ; 
    setcolor(7) ; 
	rectangle(Xmin, Ymin , Xmax , Ymax);//Create a window ;
	getch();
	cout<<"Enter point p1 of line"<<endl; 
	cin>>x1>>y1;
	cout<<"ENter point p2 of line"<<endl; 
	cin>>x2>>y2;
	cout<<"before clipping"<<endl;
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	getch();
	cleardevice();
	code1 = compute_code(x1,y1,Xmin, Ymin , Xmax , Ymax ); 
	code2 = compute_code(x2,y2,Xmin, Ymin , Xmax , Ymax) ; 
	bool acept = false ; 
	while(true)
	{
		if((code1 ==0 )&&( code2 == 0 ))
		{  
		    getch();
			acept = true ; //both points are inside the window
			break ; 
		}
		else if (code1 & code2)
		{	
		   
			break ; //both point are outside the window ;
		}
		else // one point is inside the window and other is outside the window
		{   
			if(code1 !=0)
			out_code = code1 ; 
			else 
			out_code = code2 ; 
			if(out_code & TOP)
			{ 
			
			 y = Ymax ; 
			 x = x1 + (x2-x1)*(Ymax - y1)/(y2-y1); 	
			}
			if(out_code & BOTTOM)
			{ 
			   
				y = Ymin ; 
			    x = x1 + (x2-x1)*(Ymin - y1)/(y2-y1); 		
			}
			if(out_code & RIGHT)
			{  
				x = Xmax ; 
				y = y1 + (y2-y1)*(Xmax - x1)/(x2-x1);
			}
			if(out_code & LEFT)
			{   
			    
				x = Xmin; 
				y = y1 + (y2-y1)*(Xmin - x1)/(x2-x1);
			}
			if(out_code == code1)
			{  
				x1 = x ; y1 = y ; 
			code1 = 	compute_code(x1,y1,Xmin,Ymin,Xmax,Ymax); 
			}
			else
			{
			
				x2 = x ; y2 = y ; 
			 code2 = 	compute_code(x2,y2,Xmin,Ymin,Xmax,Ymax);
			}
		}
	}
	if(acept)
	    
	{  
	    cout<<"After clipping"<<endl;
	    setcolor(7);
	    rectangle(Xmin,Ymin,Xmax , Ymax);
		setcolor(RED);
		line(x1,y1, x2,y2);
		getch();
	}
}
int compute_code(double x, double y,double Xmin, double Ymin,double Xmax , double Ymax )
{  
	int code = 0 ; 
	if(x<Xmin) 	code |= LEFT ; 
	if(x>Xmax)	code |= RIGHT ; 
	if(y<Ymin)	code |=BOTTOM ; 
	if(y>Ymax)	code |=TOP ; 
	return code ; 
}

