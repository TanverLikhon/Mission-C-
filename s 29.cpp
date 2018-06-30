///over loading and ambiguity
#include<iostream>
using namespace std;

int abc (int a, int b)
{
    return a+b;
}
float abc(int a,int b)///ambiguity
{
    return a+b;
}
/*
int abc (int a, int b=0)
{
    return a+b;
}
int abc(int a)///ambiguity
{
    return a;
}
*/
int main()
{
    cout<<abc(5,6)<<endl;
   /// cout<<abc(5)<<endl;///ambiguity for the second case
    return 0;
}
