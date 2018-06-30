#include <iostream>
using namespace std;
int gValue=10;
void extra()
{
cout << gValue << ' ';
}
 main()
{
extra();
{
int gValue = 20;
cout << gValue << ' ';
cout << :: gValue << ' ';
}
}
