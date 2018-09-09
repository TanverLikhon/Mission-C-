///inheritance and pointer
#include<iostream>
using namespace std;
class base {
public:
    int a;
    };
    class derive:public base {
public:
    int b;
    };
    int main()
    {
        base b;
        derive d;
        d.a=5;
        cout<<d.a<<endl;

        d.b=6;
        cout<<d.b<<endl;

        base *ptr;
        ptr=&d;
        ptr->a=1;
        cout<<ptr->a<<endl;
       /// ptr->b=2//this line can be execute because b is a member of derive class
        return 0;
    }
