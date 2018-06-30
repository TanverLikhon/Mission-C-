#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void getval(int);
    void dispcount(void);
};

void test:: getval(int x)
{
    no=x;
    cout<<"Number "<<no<<endl;
    count++;

}
void test::dispcount(void)
{
    cout<<"Counter = "<<count<<endl;
}
int test::count;
main()
{
    test t1,t2,t3;
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();


    t1.getval(100);
    t2.getval(200);
    t3.getval(300);
cout<<"After taking no and calling the functions....."<<endl;
    t1.dispcount();
    t2.dispcount();
    t3.dispcount();

    cout<<"Happiness is when your program runs without any error:)"<<endl;
}
