#include<iostream>
using namespace std;

void bubble_sort1(int arr[],int n)
{
    bool swapped;

    for(int i=1;i<n-1;i++)
    {
        swapped=false;

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped= true;

            }
        }
        if(!swapped)
        {
            break;
        }
    }
}
void print(int *arr,int n)
{
    std::cout<<"The Sorted Array is: "<<std::endl;
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubble_sort1(arr,size);
    print(arr,size);

    return 0;
}