#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int arr[]={11,78,23,67,23,56,23,45},i;
    for(i=0;i<8;i++)cout<<arr[i]<<" ";
    cout<<endl;
            sort(arr,arr+8);
     for(i=0;i<8;i++)cout<<arr[i]<<" ";
}
