#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int v)
{
    for(i=0;i<n;i++)
    {
        if(arr[i]==v)
        {
            cout<<i<<'\n';
            return i;
        }
    }
    cout<<"nil";
    
}
int main()
{
    int arr[]={2,4,6,8,5,1,0};
    int v=4;
    int n=7;
    linear_search(arr,n,v);

    return 0;
}