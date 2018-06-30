///call by reference variable

#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two variables:"<<endl;
    cin>>a>>b;
    cout<<"BEfore swaping: "<<endl;
    cout<<"A= "<<a<<"\t"<<"B= "<<b<<"\n";
    swap(a,b);/// swap ekta build in function o ache

    cout<<"After swaping the variables:"<<endl;
 cout<<"A= "<<a<<"\t"<<"B= "<<b<<"\n";

}
