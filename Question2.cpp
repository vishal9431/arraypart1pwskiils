#include <iostream>
using namespace std;
int main()
{
    int arr[]={5,2,7,9,11,14,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    int secondmax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=maxi&&arr[i]>secondmax)
        {
            secondmax = arr[i];
        }
    }
    cout<<secondmax<<" ";
}