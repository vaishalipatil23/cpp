#include<iostream.h>
#include<conio.h>
class student
{
private:int rollno;
	char name[20];
public: void get1();
	void show();
};
class marks:public student
{
private:int marks1,marks2,marks3;
public:void get2();
       void display();
};
void student::get1()
{
cout<<"Enter the Roll Number:";
cin>>rollno;
cout<<"Enter the Student Name:";
cin>>name;
}
void student::show()
{
cout<<"STUDENT ROLL NUMBER IS:-"<<rollno<<endl;
cout<<"STUDENT NAME IS:-"<<name<<endl;
}
void marks::get2()
{
cout<<"Enter the marks of first subject:";
cin>>marks1;
cout<<"Enter the marks of second subject:";
cin>>marks2;
cout<<"Enter the marks of third subject:";
cin>>marks3;
}
void marks::display()
{
cout<<"STUDENT FIRST SUBJECT MARKS IS:"<<marks1<<endl;
cout<<"STUDENT SECOND SUBJECT MARKS IS:"<<marks2<<endl;
cout<<"STUDENT THIRD SUBJECT MARKS IS:"<<marks3<<endl;
}
void main()
{
clrscr();
marks obj;
obj.get1();
obj.get2();
obj.show();
obj.display();
getch();
}