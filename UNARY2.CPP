//write a program to demonstrate unary oparator with using friend function//

#include<iostream.h>
#include<conio.h>
class unary
{
 private: int a,b,c;
 public: void get();
	 void put();
	unary  friend  operator -(unary &x);
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
unary operator -(unary &x)
{
x.a=-x.a;
x.b=-x.b;
x.c=-x.c;
}
void main()
{
clrscr();
unary B;
B.get();
B.put();
cout<<"-------------------------------------------------------------------"<<endl;
- B;
B.put();
getch();
}