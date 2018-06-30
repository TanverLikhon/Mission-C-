
#include<iostream>
using namespace std;

class A;
class B
{
    int b;
public:
    void getval(int x)
    {
        b=x;
    }
    void putval(void)
    {
        cout<<"The value of B = "<<b<<endl;
    }
    friend void add(A,B);
};

class A
{
    int a;
public:
    void getval(int x)
    {
        a=x;
    }
    void putval(void)
    {
        cout<<"The value of A = "<<a<<endl;
    }
    friend void add(A,B);
};

void add (A obj1,B obj2)
{
    cout<<"Addition of A &B"<<obj1.a+obj2.b<<endl;
}

main()
{
    A a;
    B b;
    a.getval(100);
    b.getval(100);

    a.putval();
    b.putval();
    add(a,b);

}
