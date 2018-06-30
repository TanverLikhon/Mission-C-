#include<iostream>
using namespace std;
class cost;

class rectangle
{
    int height;
    int width;
public:
    void set(int a,int b)
    {
        height=a;
        width=b;
    }

    int area()
    {
        return height*width;
    }
friend int totalcost(rectangle, cost);
};


class cost
{
    int costRate;
public:
    void setvalue(int x)
    {
        costRate=x;
    }
friend int totalcost(rectangle , cost );
};

int totalcost (rectangle r ,cost c )///here a and b are simply two variable or object of the class rectangle and cost
{
  //  return r.height*r.width*c.costRate;
  return r.area()*c.costRate;///37 and 38 line work same
}

main()
{
    rectangle r;
    r.set(5,6);
    cost c;
    c.setvalue(100);
    cout<<"Area = "<<r.area()<<endl;

    cout<<"Total cost of the area = "<<totalcost(r,c)<<endl;
}

