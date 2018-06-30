#include<iostream>
using namespace std;

class item
{
    int number;     ///private by default
    float cost;
public:
    void getdata(int a,float b);   ///prototype declaration
                                                            //to be defined
        // Function defined inside class
        void putdata(void)
        {
            cout<<"Number : "<<number<<"\n";
            cout<<"cost : "<<cost<<"\n";
        }
};
//.........Member function definition...........//
void item:: getdata (int a,float b)     ///use membe label
{
    number =a;       //private variables
    cost =b;             //directly used

}

//..............Main program...............///
int main()
{
    item x; ///create object x;

    cout<<"\nobject x"<<"\n";

    x.getdata(100,299.95);  //call member function
    x.putdata();    ///call member function

    item y;          ///create another object

    cout<< "\nobject y"<<"\n";

    y.getdata(200,175.50);
    y.putdata();
    return 0;

}
