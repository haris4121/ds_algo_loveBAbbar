#include <iostream>
#include <vector>
using namespace std;

int pivotRotatedSorted(int vec[],int size)
{

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (vec[mid] >= vec[0])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid;
        }
        mid = s + (e - s) / 2;

    }

    return e;
}

// recursion solution

int pivotRotatedRecusrion(int *vec , int start ,int end )
{
    int mid = start + (end - start)/2;

    if( start == end)
        return end;
    

    if(vec[mid] >= vec[0])
        return pivotRotatedRecusrion(vec,mid+1,end);
    else
        return pivotRotatedRecusrion(vec,start,mid );


    





}

int main()
{
    // int arr[20] = {5,6,7,1,2,3,4};

    // cout<<pivotRotatedSorted(arr,7)<<endl;

    // cout<<pivotRotatedRecusrion(arr,0,6)<<endl;
     vector<vector<int>> track(5,vector<int> (5,0)) ;

     for(int i =0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         {
             cout<<track[i][j];
         }
     }
    return 0;
}