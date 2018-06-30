///use of new and delete operators
#include<iostream>

using namespace std;
 main()
{
    int *arr;
    int size;
    cout<<"Enter the size of the integer array:  ";
    cin>>size;
    cout<<"Creating an array of size " <<size<<"."<<endl;
    arr=new int [size];

    cout<<"\n dynamic allocation of memory for array arr is succesfull.";
    delete arr;

}
