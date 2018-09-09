///inheritance and same member
#include<iostream>
using namespace std;
class base
{
public:
    int a;
    int get(){return a;}
};
class derive:public base{
public:
    int a;
    int getd(){return a+get();}
};
int main()
{
    derive obj;
    obj.base::a=1;
    obj.derive::a=5;///it is optional to use scope resolution to initialize derive class's data members
    cout<<obj.getd()<<endl;
    return 0;
}
