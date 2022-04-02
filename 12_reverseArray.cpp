#include<iostream>
using namespace std;
void getArray(int arr[], int size)
{
    cout << "enter array"<<endl;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void reverse(int arr[],int size)
{
    int start = 0;
    int end = size - 1;

    // for (size_t i = 0; i < size/2; i++)
    // {
    //     int temp;
    //     temp = arr[i];
    //     arr[i] = arr[size - i - 1];
    //     arr[size - i - 1] = temp;
    // }
    
    while (start <= end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
  
    }
    
    
}
void printArray(int arr[],int size)
{
    for (size_t i = 0; i < size; i++)
    {       
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    getArray(arr, size);
    printArray(arr,size);
    reverse(arr,size);
    printArray(arr,size);


    

    return 0;
}