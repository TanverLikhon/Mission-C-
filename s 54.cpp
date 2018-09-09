///virtual inheritance
#include<iostream>
using namespace std;
class base
{
public:
    int a;
};
class new1:virtual public base
{
public:
    int b;
};
class new2:virtual public base
{
public:
    int c;
};
class derive: public new1,public new2
{
    public:

    void get()
    {
        cout<<"Enter the value of A B C:\n"<<endl;
        cin>>a>>b>>c;
    }
      int add()
        {
            return a+b+c;
        }

};
int main()
{
    derive ob;
    ob.get();
    cout<<ob.add()<<endl;
    return 0 ;

}

