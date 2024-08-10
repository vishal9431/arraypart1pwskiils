#include <iostream>
using namespace std;
bool predictduplicate(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={4,3332,43,5,34,6,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag =predictduplicate(arr,n);
    if(flag == true)
    {
        cout<<" It contain duplicate element in it";
    }
    else{
        cout<<"It doesn't contain any duplicate element in it"<<" ";
    }
}