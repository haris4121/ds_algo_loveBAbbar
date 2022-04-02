#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size)
{
    for (size_t i = 0; i < size; i+=2)
    {
        if (i !=size -1)   //swap is also inbuilt function
            swap(arr[i],arr[i+1]);
        // {
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        // }            
    }

}

int main()
{
    int size = 5;
    int arr[20] = {1,2,3,4,5};
    swapAlternate(arr,size);
    for (size_t i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}