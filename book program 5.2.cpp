#include<iostream>
using namespace std;
class binary
{
    string s;
public :
    void read(void)
    {
        cout<<"Enter a binary number :"<<endl;
        cin>>s;
    }

    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0'&&s.at(i)!='1')
            {
                cout<<"Incorrect binary number format,..the program will quit"<<endl;
                exit(0);
            }
        }
    }

    void ones(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
                s.at(i)='1';
          else
            s.at(i)='0';
        }

    }

    void displayones(void)
    {
        ones();
        cout<<"The 1's compliment of the above binary number is: "<<s;
    }
};

int main()
{
    binary b;
    b.read();
    b.displayones();
    return 0;
}
