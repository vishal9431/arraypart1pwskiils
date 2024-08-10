#include<iostream>
using namespace std;
int main()
{
    int arr[]={34,23,4,3,54,323,4345,435,34,3435,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mini = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    cout<<mini<<" ";
}