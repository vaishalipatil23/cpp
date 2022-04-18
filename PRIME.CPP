#include<iostream.h>
#include<conio.h>
class Test
{
public:int check(int x)
{
int i,p=0;
for(i=2;i<x;i++)
{
if(x%i==0)
{
p=1;
break;
}
}
return p;
}
};
void main()
{
int x,p;
clrscr();
cout<<"enter the number:";
cin>>x;
Test obj;
p=obj.check(x);
if(p==0)
{
cout<<"number is prime:"<<x;
}
else
{
cout<<"number is not prime:"<<x;
}
getch();
}
