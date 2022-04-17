#include<iostream.h>
#include<conio.h>
class Demo
{
private:int a,b;
public:  Demo(int x,int y);
	 void show();
};
Demo::Demo(int x,int y)
{
a=x;
b=y;
}
void Demo::show()
{
cout<<"Value of X:"<<a;
cout<<"Value of Y:"<<b;
}
void main()
{
clrscr();
Demo D1(10,20);
D1.show();
getch();
}