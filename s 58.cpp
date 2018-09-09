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
derive obj;
obj.print();//this will show print function from derive class
        return 0;
    }

