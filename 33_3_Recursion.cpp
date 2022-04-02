#include<iostream>
using namespace std;

bool isSorted(int *arr , int size)
{
    if(size == 1 || size ==0 )
        return true;
    if(arr[0]>arr[1])
        return false;
    
    return isSorted(arr+1,size -1);




}


int Sum(int *arr,int n )
{
    if(n==0)
        return 0;
    if(n==1)
        return(arr[0]);
    
    return Sum(arr+1,n-1) + arr[0];


}

bool linearSearch(int *arr,int size,int key)
{
    if(size==0)
        return false;
    if(arr[0] == key)
        return true;

    return linearSearch(arr +1,size - 1,key);
}

bool binarySearch(int *arr,int s,int e,int key)
{
    int m = s+(e - s)/2;
    if(arr[m] == key)
        return true;
    if(s>e)
        return false;

    if(arr[m]<key)
        return binarySearch(arr,m+1,e,key);
    else
        return binarySearch(arr,s,m-1,key);






}

int main()
{
    /*
    int arr[] = {1,2,3,9,5,6,7};
    cout<<isSorted(arr,7);
    */

/*
   int arr[] = {1,2,3,9,5,6,7};
   cout<<Sum(arr,7);
*/


/*
int arr[] = {1,2,3,9,5,6,7};
cout<<linearSearch(arr,7,66);
*/

/*
int arr[] = {1,2,3,4,5,6,7};
cout<<binarySearch(arr,0,6,6);
*/




    return 0;
}