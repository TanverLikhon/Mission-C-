///function overriding

#include<iostream>
using namespace std;
class base {
public:
void print(){cout<<"Base:"<<endl;}
    };
    class derive:public base {
public:
   void print(){cout<<"derive"<<endl;}
    };
    int main()
    {
base *b;
derive d;
b=&d;
b->print();//this will show print function from base class
        return 0;
    }


