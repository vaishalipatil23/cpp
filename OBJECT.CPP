#include<iostream.h>
#include<conio.h>
class student
{
private:int roll_no;
	char Sname[30];
public:  void get();
	 void put();
};
void student::get()
{
cout<<"Enter the roll number:";
cin>>roll_no;
cout<<"Enter the Student name:";
cin>>Sname;
}
void student::put()
{
cout<<"The student Roll Number is:"<<roll_no<<endl;
cout<<"The Student Name is:"<<Sname;
}
void main()
{
clrscr();
student S;
S.get();
S.put();
getch();
}