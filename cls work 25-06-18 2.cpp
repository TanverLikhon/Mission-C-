#include<iostream>
using namespace std;

class B;
class C;
class A
{
    int r;///private member
public:
    void getval1(int x)
    {
        r=x;
    }
    friend int comp ( A,B,C);///private member
     friend void comp1  ( A,B,C);
};
class B
{
    int r;///private member
public:
    void getval2(int x)
    {
        r=x;
    }
    friend int comp ( A,B,C);
     friend void comp1  ( A,B,C);
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
     friend void comp1  ( A,B,C);
};
int comp(A obj1,B obj2,C obj3)
{
    if(obj1.r>obj2.r&&obj1.r>obj3.r)
        return obj1.r;
    else if(obj2.r>obj1.r&&obj2.r>obj3.r)
        return obj2.r;
    else if(obj3.r>obj1.r&&obj3.r>obj2.r)
        return obj3.r;
}
void comp1(A obj1,B obj2,C obj3)
{
    if(obj1.r>obj2.r&&obj1.r>obj3.r)
        cout<<"First circle's radius and area is the largest ."<<endl;
    else if(obj2.r>obj1.r&&obj2.r>obj3.r)
        cout<<"Second circle's radius and area is the largest ."<<endl;
    else if(obj3.r>obj1.r&&obj3.r>obj2.r)
        cout<<"Third circle's radius and area is the largest ."<<endl;
}
int main()
{
    A a;
    B b;
    C c;
    int x,y,z;
    cout<<"Enter first circle's radius: "<<endl;
    cin>>x;
    a.getval1(x);///data passing function
    cout<<"Enter second circle's radius: "<<endl;
    cin>>y;
    b.getval2(y);///data passing function
    cout<<"Enter third circle's radius: "<<endl;
    cin>>z;
    c. getval3(z);///data passing function
    cout<<"\n";
    comp1(a,b,c);///calling friend function
    cout<<"The largest radius is  "<<comp(a,b,c);///calling friend function
    return 0;
}

