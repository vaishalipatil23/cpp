#include<iostream.h>
#include<conio.h>
class demo
{
protected:int a,b;
public: void read()
       {
       a=10;
       b=10;
       }
};
 class demo1:public demo
 {
 protected:int c;
 public:void read_1()
	  {
	  c=a+b;
	  cout<<"Addition is:"<<c<<endl;
	  }
 };
	  class demo2:public demo
	  {
	   protected:int p;
	   public:void display()
	   {
	     p=a-b;
	     cout<<"Substraction is:"<<p;
	   }
	   };
	   void main()
	   {
	   clrscr();
	   demo1 D;
	   D.read();
	   D.read_1();
	   demo2 D1;
	   D1.read();
	   D1.display();

	   getch();
	   }
