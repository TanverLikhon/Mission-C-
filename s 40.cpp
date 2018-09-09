///subscript  operator over loading

#include<iostream>
using namespace std;
class number
{
    int x,arr[10];
public:
    number()
    {
        x=1;
        for(int i=1;i<=10;i++)
            arr[i-1]=i*x;
    }
    number(int a)
    {
        x=a;
        for(int i=1;i<=10;i++)
            arr[i-1]=i*x;
    }

int operator [] (int a);

};

int  number ::operator [] (int a)
{

 return arr[a-1];
}


int main()
{
   number n1(4),n2(4),n3;
cout<<n3[9]<<endl;

    return 0;
}


