#include<iostream>
#include<vector>
using namespace std;



void insertionSort(int n, vector<int> &arr)
{
  for(int i =1;i<n;i++)
  {
      int element = arr[i];
      int j =i -1;
      for(j = i -1;j>=0;j--)
      {
          if(arr[j]>element)         
              arr[j+1] = arr[j];			    
          else              
              break;                       
      }
      arr[j+1] = element;
      
      
      
      
  }
}


void insertionSortRecursion(vector<int> &arr,int n,int start)
{



    if (start == n)
    {
        return;
    }

    int element = arr[start];
    int i = start - 1;
    for (i = start - 1; i >= 0; i--)
    {
       if(arr[i]>element)
             arr[i+1] = arr[i];
        else
            break;

    }
    arr[i+1] = element;



    insertionSortRecursion(arr,n,start+1);
    
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2,1,3,2,4,44,0,-1};
    insertionSortRecursion(arr,arr.size(),0);
    for(auto element :arr)
    {
        cout<<element;
    }
    return 0;
}
