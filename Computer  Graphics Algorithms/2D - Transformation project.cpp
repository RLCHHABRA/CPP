#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
using namespace std ; 
class transformation
{
	private:
		int x1 , y1 , x2 , y2 , x , y , t[2][2] ;
    public:
    	void menu();
    	void translation();
    //	void scaling();
    //	void rotation();
    //	void mid_point_transformation();
    //	void transformation_parallal_line();
    //	void transformation_intersecting_line();
    
};
void transformation::menu()
{
	cout<<"\n\t************ Welcome To 2D - Transformation ****************"<<endl;
    cout<<"Please Enter your choice"<<endl;
    cout<<"1.Translation"<<endl;
    cout<<"2.Scaling"<<endl;
    cout<<"3.Rotation"<<endl;
    cout<<"4.Mid -Point transformation"<<endl;
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
    	/*	case 2:
    			obj.scaling();
    			getch();
    			cleardevice();
    			break;
    		case 3:
    			obj.rotation();
    			getch();
    			cleardevice();
    			break;
    		case 4:
    			obj.mid_point_transformation();
    			getch();
    			cleardevice();
    			break ; 
    		case 5:
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
