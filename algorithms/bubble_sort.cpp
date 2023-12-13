#include<iostream>
void bubbleSort(int *arr, int n)  
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])   //Check the greater value.
            {
                int temp=arr[j];
                arr[j]=arr[j+1];  //Swap the numbers.
                arr[j+1]=temp;
            }
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
    std::cout<<"Enter the Size of the Array: ";
    std::cin>>size;
    int arr[size];
    std::cout<<"Enter the Elements of the Array: "<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cin>>arr[i];
    }
    bubbleSort(arr,size);
    print(arr,size);
}