#include<iostream.h>
#include<conio.h>
class Demo
{
protected:int a,b;
	double p,q,r;
public: void add(int x,int y);
	void add(double l,double m,double n);
};
void Demo::add(int x,int y)
{
a=x;
b=y;
cout<<"Multiplication is:"<<a*b<<endl;
}
void Demo::add(double l,double m,double n)
{
p=l;
q=m;
r=n;
cout<<"Addition is:"<<p+q+r;
}
void main()
{
clrscr();
Demo d;
d.add(10,20);
d.add(2.5,2.5,2.5);
getch();
}
