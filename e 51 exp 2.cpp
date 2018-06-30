///copy constructor

#include<iostream>
using namespace std;
class test
{
    int code;
    float price;
public:
    test (int c, float  p);
    test (const test &t);
    void disp();

};

test::test (int c, float p)
{
    code=c;
    price=p;
}

test:: test(const test&t)
{
    code=2* t.code;
    price=2*t.price;
}
void test:: disp()
{
    cout<<"CODE :"<<code<<endl;
    cout<<"PRICE: "<<price<<endl;
}
main()
{
    test t1(101, 50.6);
    test t2(t1);
    test t3=t2;

    cout<<"t1 object: \n"<<endl;
    t1.disp();
    cout<<endl;
    cout<<"t2 object: \n"<<endl;
    t2.disp();
    cout<<endl;
    cout<<"t3 object: \n"<<endl;
    t3.disp();
}


