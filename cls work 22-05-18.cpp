#include<iostream>
using namespace std;
class student
{
int n;
float cost;

public:
    void getdata(int a,float b);
    void putdata(void);
};

void student::getdata(int x,float y)
{
    n=x;
    cost=y;
}

void student::putdata(void)
{
    cout<<"Number ="<<n<<endl<<"Cost = "<<cost<<endl;

}
main()
{
    student s1;
    s1.getdata(45,100.8);
    s1.putdata();
}
