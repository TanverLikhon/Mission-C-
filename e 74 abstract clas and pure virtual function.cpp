#include<iostream>
using namespace std;
class base
{
public:
    virtual void disp()=0;
};
class derived :public base
{
public:
    void disp()
    {
        cout<<"Derived class "<<endl;
    }
};
int main()
{

///    base obj;
    derived obj;
    obj.disp();
    return 0;
}
