///returning object

#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    void getval(int x,int y)
    {
        a=x;
        b=y;
    }
    friend test sum (test ,test);
    void dispval(void);
};


test sum(test t1,test t2)
{
    test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;
    return t;
}

void test :: dispval(void)
{
    cout<<"Value of A = "<<a<<endl;

    cout<<"Value of B = "<<b<<endl;
}

main()
{
    test A,B,C;
    A.getval(10,20);
    B.getval(30,40);

    C=sum(A,B);
    cout<<"First object's value is:"<<endl;

    A.dispval();
    cout<<"Second object's value is:"<<endl;
    B.dispval();
    cout<<"After adding the two objects the new object's value is:\n";
    C.dispval();
}

