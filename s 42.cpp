///output stream over loading


#include<iostream>
using namespace std;
class number
{
    int x,y;
public:
    number()
    {
        x=0;
        y=0;
    }
    number(int a,int b)
    {
        x=a;
        y=b;
    }

 friend  void   operator << (ostream &os, number obj);

};

void operator << (ostream &os, number obj)

{
os<<obj.x<<"  "<<obj.y<<endl;
}


int main()
{
   number n1(4,6),n2(4,0),n3;
cout<<n2;
cout<<endl;

    return 0;
}


