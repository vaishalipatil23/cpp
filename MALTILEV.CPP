#include<iostream.h>
#include<conio.h>
class FYBCA_A
{
private:int a;
public:void get_A();
      void put_A();
};
class FYBCA_B:public FYBCA_A
{
private:int b;
public: void get_B();
	void put_B();
};
class FYBCA_C:public FYBCA_B
{
private:int c;
public:void get_C();
       void put_C();
};
void FYBCA_A::get_A()
{
cout<<"enter the value a:";
cin>>a;
}
void FYBCA_A::put_A()
{
cout<<a;
}
void FYBCA_B::get_B()
{
cout<<"enter the value b:";
cin>>b;
}
void FYBCA_B::put_B()
{
cout<<b;
}
void FYBCA_C::get_C()
{
cout<<"enter the value c:";
cin>>c;
}
void FYBCA_C::put_C()
{
cout<<c;
}

void main()
{
clrscr();
FYBCA_C.K;
k.get_A();
k.put_A();
k.get_B();
k.put_B();
k.get_C();
k.put_C();
getch();
}