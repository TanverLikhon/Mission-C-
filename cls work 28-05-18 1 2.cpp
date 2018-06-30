#include<iostream>
using namespace std;

class student
{
    int ID;
    string name;
    int marks;
public:
    void getinfo(void);
    void putinfo(void);
    void gpa(void);

};

void student:: gpa(void)
{
    if(marks>=80)
        cout<<"A+";
    else if(marks>=70&&marks<80)
        cout<<"A";
    else if(marks>=60&&marks<70)
        cout<<"B";
    else if(marks>=50&&marks<60)
        cout<<"C";
    else if(marks>=40&&marks<50)
        cout<<"D";
    else if (marks<=40)
        cout<<"F";
}

void student::getinfo(void)
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"\nMarks: ";
    cin>>marks;
    cout<<"\nID:";
    cin>>ID;
}

void student::putinfo(void)
{
    cout<<"Name : "<<name<<endl;
    cout<<"Student ID: "<<ID<<endl;
    cout<<"Marks :"<<marks<<endl;

}

main()
{
    int n;
    cout<<"Enter the number of the students:"<<endl;
    cin>>n;
    student stu[n];
    cout<<"Enter the information of the students:"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter information for student:#"<<i+1<<endl;
        stu[i].getinfo();
    }

    cout<<"information of the students:"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"information for student:#"<<i+1<<endl;
        stu[i].putinfo();
        cout<<"GPA: ";
        stu[i].gpa();
        cout<<endl;

    }
}

