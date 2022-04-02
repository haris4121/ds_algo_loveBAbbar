#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int size)
{
    int start = 0,mid;
    int end = size  - 1; 

    
    do
    {
        mid = start +(end - start)/2;  //(start+end)/2 : keeps in range
        if (arr[mid] == key)
        {
            return mid;
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
    return -1;

}

int main()
{
    cout<<"hello"<<endl;

    int even[100]= {2,4,7,8,12,18};
    int odd[100] = {2,3,6,9,13};

    int index = binarySearch(even,18,6);
    cout<<index<<endl;

   



    return 0;
}