#include<iostream>
using namespace std;
class sum
{
    int a,b,t;
public:
    void getdata(void);
    void putdata(void);
};
void sum:: getdata(void)
{
    cout<<"Enter the value of A & B"<<endl;
    cin>>a>>b;
}
void sum::putdata(void)
{
    t=a+b;
    cout<<"Addition of  "<<a<<" and "<<b<<" = "<<t<<endl;
}
main()
{
    sum obj;
    obj.getdata();
    obj.putdata();
}
