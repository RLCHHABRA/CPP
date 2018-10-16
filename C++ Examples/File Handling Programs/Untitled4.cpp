      #include<fstream>
       #include<conio.h>
       #include<iostream>
       using namespace std ; 
       class Student
       {

              int roll;
              char name[25];
              float marks;

              void putdata()
              {

                  cout<<"\n\t"<<roll<<"\t"<<name<<"\t"<<marks;

              }
                void getdata()
              {
                      cout<<"\n\nEnter Roll : ";
                      cin>>roll;

                      cout<<"\nEnter Name : ";
                      cin>>name;

                      cout<<"\nEnter Marks : ";
                      cin>>marks;
              }

              public:
               void AddRecord()
              {

                      fstream f;
                      Student Stu;

                      f.open("Student.txt",ios::app|ios::binary);

                      Stu.getdata();

                      f.write( (char *) &Stu, sizeof(Stu) );

                      f.close();

              }

              void Display()
              {

                      fstream f;
                      Student Stu;

                      f.open("Student.txt",ios::in|ios::binary);

                      cout<<"\n\tRoll\tName\tMarks\n";

                      while( (f.read((char*)&Stu,sizeof(Stu))) != NULL )
                      		Stu.putdata();

                      f.close();
              }
       };

       int main()
       {

              Student S;
              char ch='y';
			  while(ch=='y' || ch=='Y')
             
              {
                      S.AddRecord();

                      cout<<"\n\nDo you want to add another data (y/n) : ";
                      ch = getche();

              }

              cout<<"\nData written successfully...";

              S.Display();
              return 0 ; 
       }
