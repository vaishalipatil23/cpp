#include<iostream.h>
#include<conio.h>
class demo
{
protected:int a,b;
public: void read()
       {
       a=12;
       b=10;
       }
};
class demo1
{
protected:int x,y;
public:void read_a()
{
   x=20;
   y=20;
}
};
class demo2:public demo,public demo1
{
protected:int c;
public: void display()
	{
	c=a+b;
	cout<<"Addition is:"<<c<<endl;
	c=x*y;
	cout<<"Multiplication is:"<<c;
	 }
};
void main()
{
clrscr();
demo2 D;
D.read();
D.read_a();
D.display();
getch();
}