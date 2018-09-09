#include<iostream>
using namespace std;
class time
{
    int h,m;
public:
    void get_time(int,int);
    void put_time(void);
    void sum(time,time);
};


void time:: get_time(int x,int y)
{
    h=x;
    m=y;
}

void time::put_time(void)
{
    cout<<"Hours = "<<h<<endl;
    cout<<"Minutes = "<<m<<endl;
}

void time::sum (time t1,time t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}


int main()
{
time t1,t2,t3;
    t1.get_time(3,40);
     t2.get_time(4,30);


     t3.sum(t1,t2);

     t1.put_time();
          t2.put_time();
          t3.put_time();
          return 0;
}
