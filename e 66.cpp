///unary operator overloading
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
public :
    void getdata(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void operator -();
    void disp()
    {
        cout<<"Value of A: "<<a<<endl;
        cout<<"Value of B: "<<b<<endl;
        cout<<"Value of C: "<<c<<endl;

    }
};
void test:: operator-()
{
    a=-a;
    b=-b;
    c=-c;
};
int main()
{
    test obj;
    obj.getdata(-10,20,30);
    cout<<"Before calling operator overloading"<<endl;
    obj.disp();
    -obj;///calling operator overloading
    cout<<"After calling operator overloading"<<endl;

    obj.disp();
    return 0;
}
