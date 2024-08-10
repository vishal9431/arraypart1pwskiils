#include <iostream>
using namespace std;
int main()
{
    int arr[5]= {5,4,2,1,23};
    int n =sizeof(arr)/sizeof(arr[0]);
    int pr =1;
    for(int i=0;i<n;i++)
    {
        pr*=arr[i];
        
    }
    cout<<pr<<" ";
    
}