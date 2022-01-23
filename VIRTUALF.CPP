#include<iostream.h>
#include<conio.h>
class A
{
private: int a;
public : virtual void get()
	 {
	 cout<<"world india "<<endl;
	 }
      virtual void f1()
	 {
	 a=12;
	 cout<<"the value of a="<<a<<endl;
	 }
 };
class B:public A
{
private:int b;
public:void get()
       {
       cout<<"Hello ISRO"<<endl;
       }
       void f1(int q)
       {
       b=q;
       cout<<"the value of b is "<<endl;
       }
};
int main()
{
 A *q,v;
 B ab;
 clrscr();
 q=&ab;
 q->get(); //late binding
 q->f1(); //A //lb //early binding                        //ab.f1() //an.f1(23)
 q->f1(12);  //eb
 q=&v;
 ab.f1(23);
 q->get();
 q->f1();
 q->f1(23);
 return 0;
 }
