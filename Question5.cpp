#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    int x=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=x)
        {
            cout<<x<<" ";
            flag = true;
            break;
        }
        else
        {
            x++;
        }
       
    }
    if(flag == false)
    {
        cout<<"0 "<<" ";
    }

    
}