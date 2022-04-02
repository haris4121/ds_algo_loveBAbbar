#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr , int start1 , int end1 ,int start2,int end2,int &count)
{
    int i =start1;
    vector<int> temp;
    
    while(start1<=end1 && start2<=end2)
    {
        if (arr[start1] > arr[start2])
        {
            count = count + end1 - start1 +1;
        
            temp.push_back(arr[start2++]);
        }
        else
        {
            temp.push_back(arr[start1++]);

        }

    }

    int flag = false;
   int count2 = 0;
    while(start1<=end1)
    {
        count2++;
        flag = true;
        temp.push_back(arr[start1++]);
        
    }
    while(start2<=end2)
    {
        temp.push_back(arr[start2++]);
    }

    if (flag)
    {
        count = count + (count2*(end2 - start2 +1)); 
       
    }
    


    
        

    for (auto element:temp)
    {
        arr[i++] = element;
    }
    
    temp.clear();
    




}
void mergeSort(vector<int> &arr , int start , int end,int &count)
{

    int mid = start +(end - start)/2;

    if(start >= end)
         return;

    mergeSort(arr,start,mid,count);
     mergeSort(arr,mid+1,end,count);



     merge(arr,start,mid,mid+1,end,count);




   


    




}
int main(int argc, char const *argv[])
{
   

int count = 0;
   vector<int> arr = {1,2,3,4,-1,3};
   mergeSort(arr,0,5,count);
   

   for (auto i : arr)
   {
      cout<<i;
   }
   cout<<endl;
   cout<<count;
   
    return 0;
}
