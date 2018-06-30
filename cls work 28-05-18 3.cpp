#include<iostream>
using namespace std;

class totalmarks
{
    int quiz;
    int mid;
public:
    void getmarks(int,int);
    void putmarks(void);
    void sum(totalmarks, totalmarks);
};

void totalmarks::getmarks(int x, int y)
{
    quiz=x;
    mid=y;
}
void totalmarks::putmarks(void)
{
    cout<<"Quiz: "<<quiz<<endl;
    cout<<"Mid: "<<mid<<endl;
}
void totalmarks::sum(totalmarks t1, totalmarks t2)
{
    quiz=t1.quiz+t2.quiz;
    mid=t1.mid+t2.mid;
}

main()
{
    totalmarks t1,t2,t3;
    t1.getmarks(12,23);
    t2.getmarks(15,33);

    cout<<"Marks before additon of the objects"<<endl;

    t1.putmarks();
    t2.putmarks();

    cout<<"Marks after additon of the objects"<<endl;
    t3.sum(t1,t2);
    t3.putmarks();


}

