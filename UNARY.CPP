//write a program to demonstrate unary oparator without using friend function//

#include<iostream.h>
#include<conio.h>
class unary
{
 private: int a,b,c;
 public: void get();
	 void put();
	 void operator -();

};
void unary::get()
{
cout<<"Enter the value Of A:";
cin>>a;
 cout<<"Enter the value Of B:";
cin>>b;
cout<<"Enter the value Of C:";
cin>>c;
}
void unary::put()
{
cout<<"Value Of A is:"<<a<<endl;
cout<<"Value Of B is:"<<b<<endl;
cout<<"Value Of C is:"<<c<<endl;
}
void unary::operator -()
{
a=-a;
b=-b;
c=-c;
}
void main()
{
clrscr();
unary B;
B.get();
B.put();
cout<<"----------------Negative Values Are:---------------------------"<<endl;
- B;
B.put();
getch();
}