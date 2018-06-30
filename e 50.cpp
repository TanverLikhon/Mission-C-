///parameterized constructor
#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test (int x,int y)
    {
        a=x;
        b=y;
    }
    void disp(void)
    {
        cout<<"value of A = "<<a<<endl;
            cout<<"value of B = "<<b<<endl;
    }
};

main()
{
    int x,y;
    cin>>x>>y;
    test t(x,y);
    t.disp();
}
