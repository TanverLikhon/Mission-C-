///reference variable exp 1
#include<iostream>
using namespace std;
int main()
{
    int i=5;
    cout<<i<<endl;

    int *p;
    p=&i;
    cout<<*p<<endl;
    int &r=i;
    cout<<r<<endl;
    r=7;///i=7;
      cout<<i<<endl;
    cout<<*p<<endl;
    cout<<r<<endl;
    return 0;
}
