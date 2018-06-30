#include<iostream>
using namespace std;
class rectangle
{
private:
    int height;
    int width;
public:

    int area(int h,int w);
};
int rectangle ::area(int h ,int w)
{
    height=h;
    width=w;
    return height*width;
}

int main()
{
    rectangle obj;
//obj.set(5,7);

    cout<<"Area= "<<obj.area(5,7)<<endl;

    return 0;
}




