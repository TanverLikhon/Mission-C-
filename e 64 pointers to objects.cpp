///pointers to objects
#include<iostream>
#include<cstdio>
using namespace std;
#include<cstring>
class student
{
    int roll;
    char name[10];
    public:
       //void getdata(int x, char[] y)
    void getdata(int x,char *y)
    {
        roll=x;
        strcpy(name,y);
    }
    void putdata()
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student roll: "<<roll<<endl;
    }
};
int main()
{
    student obj;
    student *p;
    p=&obj;
p->getdata(101,"tanver");
 p->putdata();


    return 0;
}
