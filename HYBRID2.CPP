#include<iostream.h>
#include<conio.h>
class demo
{
 protected:int a,b;
 public:void read()
       {
       a=10;
       b=10;
       }
};

class demo1
{
 protected:int x,y;
 public:void get()
       {
       x=5;
       y=5;
       }
};
class demo2:public demo,public demo1
{
  protected:int c;
  public:void show()
  {
  c=a+b;
  cout<<"Addition is:->"<<c<<endl;
  c=x*y;
  cout<<"Multiplication is:->"<<c<<endl;
  }
};
class demo3:public demo
{
  protected:int m;
  public:void show()
  {
  m=a/b;
  cout<<"Division is:->"<<m<<endl;
  }
};
void main()
{
 clrscr();
 demo2 d2;
 d2.read();
 d2.get();
 d2.show();
 demo3 d3;
 d3.read();
 d3.show();
 getch();
}