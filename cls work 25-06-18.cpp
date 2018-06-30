#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int r;
public:
    void getval1(int x)
    {
        r=x;
    }
    friend int comp ( A,B,C);
};
class B
{
    int r;
public:
    void getval2(int x)
    {
        r=x;
    }
    friend int comp ( A,B,C);
};
class C
{
    int r;
public:
    void getval3(int x)
    {
        r=x;
    }
    friend int comp  ( A,B,C);
};

int comp(A obj1,B obj2,C obj3)
{
    if(obj1.r>obj2.r&&obj1.r>obj3.r)
        return 1;
    else if(obj2.r>obj1.r&&obj2.r>obj3.r)
        return 2;
    else if(obj3.r>obj1.r&&obj3.r>obj2.r)
        return 3;
}

int main()
{
    A a;
    B b;
    C c;
    int x,y,z;
    cout<<"Enter first circle's radius: "<<endl;
    cin>>x;
    a.getval1(x);
    cout<<"Enter second circle's radius: "<<endl;
    cin>>y;
    b.getval2(y);
    cout<<"Enter third circle's radius: "<<endl;
    cin>>z;
    c. getval3(z);

    if(comp(a,b,c)==1)
        cout<<"First circle's radius and area is largest. "<<endl;

    else if(comp(a,b,c)==2)
        cout<<"Second circle's radius and area is largest. "<<endl;

    else if(comp(a,b,c)==3)
        cout<<"Third circle's radius and area is largest. "<<endl;
    return 0;

}
