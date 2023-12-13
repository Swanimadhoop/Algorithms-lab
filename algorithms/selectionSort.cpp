#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            cout<<arr[min];
            swap(arr[i],arr[min]);
        }
    }
    
}

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    selectionSort(arr,size);
    cout<<"The sorted array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}