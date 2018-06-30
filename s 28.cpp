/// default arguments
#include<iostream>
using namespace std;

int abc (int a, int b=9)
{
    return a+b;
}
int main()
{
    cout<<abc(5)<<endl;
    return 0;
}
