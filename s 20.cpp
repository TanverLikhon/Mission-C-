#include<iostream>
using namespace std;

class rectangle {
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
friend class cost;
};


class cost
{
    int costRate;
public:
    void setvalue(int a)
    {
        costRate=a;
    }
    int totalCost(rectangle A)
    {
        return costRate*A.height*A.width;
    }
};

main()
{
    rectangle r;
    r.set(5,6);
    cost c;
    c.setvalue(100);
    cout<<"Area = "<<r.area()<<endl;

    cout<<"Total cost of the area = "<<c.totalCost(r)<<endl;
}
