#include<iostream>
using namespace std;

int binarySearchLeftOccurance(int arr[],int key,int size)
{
    int start = 0,mid;
    int end = size  - 1;
    int leftMost;
    bool isPresent = false; 

    
    do
    {
        mid = start +(end - start)/2;  //(start+end)/2 : keeps in range
        if (arr[mid] == key)
        {
            isPresent = true;
            leftMost = mid;
            end = mid -1;
            
        }
        else if (arr[mid] < key)
        {
           start = mid +1;
        }
        else
        {
            end = mid - 1;
        }   
    }while(start <= end);
    if(isPresent)
    return leftMost;
    else
    return -1;

}

int main()
{
    cout<<"hello"<<endl;

    int arr[19] = {1,3,5,5,5,5,5,5,9,10};

    cout<<binarySearchLeftOccurance(arr,100,10);



    return 0;
}