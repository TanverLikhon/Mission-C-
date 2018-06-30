/// default arguments
#include<iostream>
using namespace std;

int abc (int a, int b=9,int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<abc(5,7,9)<<endl;
    return 0;
}

