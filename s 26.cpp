
#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
float add(double a,double b)
{
    return (float)(2*(a+b));
}

double add(double a,double b)
{
    return 3*(a+b);
}



int main()
{

    cout<<add(2.5,6.7);
    return 0;
}
