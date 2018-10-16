   #include<fstream>
       #include<conio.h>
       #include<iostream>
       using namespace std ; 
       

       class Student
       {

              int roll;
              char name[25];
              float marks;

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
       };

       int  main()
       {

              Student S;
              char ch='n';

              do
              {
                      S.AddRecord();

                      cout<<"\n\nDo you want to add another data (y/n) : ";
                      ch = getche();

              } while(ch=='y' || ch=='Y');

              cout<<"\nData written successfully...";
              return 0 ; 
       }
