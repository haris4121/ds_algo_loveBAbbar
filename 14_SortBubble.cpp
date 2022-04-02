#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i< n ; i++)
    {       
        for(int j=0;j < ( n- i) ; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                        
        }
        
        
    }
}

void bubbleSortRecursion(vector<int>& arr,int end)
{
    if( end == 1) //base case solved
        return ;

    //1 case solved
    for (size_t i = 0; i < end ; i++)
    {
        if(arr[i+1]<arr[i])
            swap(arr[i+1],arr[i]);
    }
    

    bubbleSortRecursion(arr,end-1); //recursion solved
    





}


int main()
{
    vector<int> arr = {2,4,1,2,3,4,5};
    bubbleSortRecursion(arr,arr.size() -1);

    for (auto element:arr)
    {
       cout<<element<<" ";
    }
    
    

    return 0;
}