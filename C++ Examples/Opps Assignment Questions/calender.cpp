#include<iostream>
using namespace std;
int main()
{
	int long date,m;
	int long year;
	int long day=0;
	cout<<"enter the date\n";
	cin>>date;
	cout<<"enter the month\n";
	cin>>m;
	cout<<"enter year\n";
	cin>>year;
	for(int long i=1920;i<year; i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0 )
	day=day+366;
	else
	day=day+365;
}
if(m==1)
{
day=day+date;
}
if(m==2)
{

day=day+date+31;
}
if(m==3)
{
if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+60;
else
day=day+date+59;
}
if(m==4)
{
if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+91;
else
day=day+date+90;
}
if(m==5)
{
if((year%4==0&&year%100!=0)||year%400==0 )
day=date+day+121;
else
day=day+date+120;
}
if(m==6)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+152;
else
day=day+date+151;
}
if(m==7)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+182;
else
day=day+date+181;
}
if(m==8)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+213;
else
day=day+date+212;
}
if(m==9)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+244;
else
day=day+date+243;
}
if(m==10)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+274;
else
day=day+date+273;
}
if(m==11)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+305;
else
day=day+date+304;
}
if(m==12)
{

if((year%4==0&&year%100!=0)||year%400==0 )
day=day+date+335;
else
day=day+date+334;
}
cout<<"day on this date is  ";
if(day%7==3)
cout<<"saturday";
if(day%7==4)
cout<<"sunday";
if(day%7==5)
cout<<"monday";
if(day%7==6)
cout<<"tuesday";
if(day%7==0)
cout<<"wednesday";
if(day%7==1)
cout<<"thrusday";
if(day%7==2)
cout<<"friday";
return 0;
}

