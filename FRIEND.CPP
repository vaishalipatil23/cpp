#include<iostream.h>
#include<conio.h>
class two;
class one
{
private:int a;
public: one();
	 friend  void add(one p,two q);
};
class two
{
private:int b;
public:two();
       void friend add(one p,two q)
};
one::one()
{
cout<<"Enter The value Of A:";
cin>>a;
}
two::two()
{
cout<<"Enter The value Of B:";
cin>>b;
}
void add(one p,two q)
{
cout<<"Addition is:";
cout<<p.a+q.b;
}
 void main()
 {
 clrscr();
 one A;
 two B;
 add(A,B);
 getch();
 }
