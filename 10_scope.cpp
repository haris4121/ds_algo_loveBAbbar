#include<iostream>
using namespace std;

void update(int arr[],int size)
{
    arr[1] = 120;

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;

}
void getArray(int arr[],int size)
{
    cout<<"enter array";
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    
}
void printSum(int arr[],int size)

{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
int main()
{  /*
     int size = 3;
    int arr[3] = {1,2,3};
    update(arr,3);
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    */

   int size;
   cin>>size;
   int arr[100];
   getArray(arr,size);
   printSum(arr,size);
   

    

    return 0;
}