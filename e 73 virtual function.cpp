#include<iostream>
using namespace std;
class base
{
public:
    void disp(){cout<<"\nBase class disp"<<endl;}
   virtual void show(){cout<<"\nBase class show"<<endl;}
      //void show(){cout<<"\nBase class show"<<endl;}
};
class derived:public base
{
public:
    void disp(){cout<<"\nDerived class disp"<<endl;}
   void show(){cout<<"\nDerived class show"<<endl;}
};
int main()
{
    base *p;
    base objb;
    derived objd;
    p=&objb;
    p->disp();
    p->show();
    p=&objd;
    p->disp();
    p->show();
    return 0;
}
