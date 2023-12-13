#include<iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
    int pivot = a[lb];
    int start =lb;
    int end = ub;

    while (start<end)
    {
        while(a[start]<= pivot)
        {
            start ++;
        }
        while (a[end]>pivot)
        {
            end --;
        }
        if (start<end)
        {
        swap(a[start],a[end]);
        }
    }
    swap (a[lb],a[end]);
    return end;
};
int quick_sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
};

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
    quick_sort( arr, 0, size-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}