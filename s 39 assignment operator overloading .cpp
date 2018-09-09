
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
    void get(int &a,int &b)
    {
        a=x;
        b=y;
    }
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"X= "<<x<<"  "<<"Y= "<<y<<endl;
    }


void  operator = (number &ob);

};

void  number ::operator = (number &ob)
{
 //number temp;
x=ob.x;
y=ob.y;

}


int main()
{
   number n1(4,6),n2(4,0),n3;
cout<<"Before"<<endl;
n1.print();
n2.print();
cout<<"After assigning"<<endl;
n2=n1;
n1.print();
n2.print();

    return 0;
}


