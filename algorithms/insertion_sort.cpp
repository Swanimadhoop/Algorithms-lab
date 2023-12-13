#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
        key=arr[j];
        i=j-1;
    
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int main()
{
    int size,n;
    cout<<"Enter the Size of the Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements of the Array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,size);
    cout<<"the sorted array is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}