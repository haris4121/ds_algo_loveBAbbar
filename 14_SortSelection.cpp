#include<iostream>
#include<vector>
using namespace std;



void selectionSort(vector<int>& arr, int n)
{   
    for(int i =0;i<n-1;i++)
    {
        int minIndex = i;
        for(int j = i+1;j<n;j++)
        {
           if(arr[j]<arr[minIndex])
                minIndex = j; 
        }
        swap(arr[i],arr[minIndex]);
            
     
    }
}

void selectionSortRecursion(vector<int> &arr,int start,int n)
{
    
    if(start == n-1 )
        return ;

    int minIndex;
     minIndex = start;
    for(int i =start + 1 ;i<n;i++)
    {

        if(arr[i]<arr[minIndex])
            minIndex = i;

    }
    swap(arr[start],arr[minIndex]);

    selectionSortRecursion(arr,start+1,n);


}

int main()
{
    vector<int> arr1 = {3,1,2,5,4};
    selectionSortRecursion(arr1,0,arr1.size());

    for(auto element : arr1)
        cout<<element;
    

    return 0;
}
