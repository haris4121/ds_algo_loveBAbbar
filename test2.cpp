
boil


void merge(int *arr , long long int start1 , long long int end1 ,long long int start2,long long int end2,long long int &count)
{
    long long int i =start1;
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

    bool flag = false;
   long long int count2 = 0;
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
void mergeSort(int *arr , long long int start , long long int end,long long int  &count)
{

    int mid = start +(end - start)/2;

    if(start >= end)
         return;

    mergeSort(arr,start,mid,count);
     mergeSort(arr,mid+1,end,count);



     merge(arr,start,mid,mid+1,end,count);

}

