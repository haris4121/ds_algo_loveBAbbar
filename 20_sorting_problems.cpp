#include<iostream>
#include<vector>
using namespace std;
void getVector(vector<int> &arr, int size)
{
    cout << "enter array"<<endl;
    for (size_t i = 0; i < size; i++)
    {int element;
        cin>>element;
        arr.push_back(element);
        
    }
}
void reverse(vector<int> &arr,int size)
{
    int start = 0;
    int end = size - 1;

    // for (size_t i = 0; i < size/2; i++)
    // {
    //     int temp;
    //     temp = arr[i];
    //     arr[i] = arr[size - i - 1];
    //     arr[size - i - 1] = temp;
    // }
    
    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
  
    }
    
    
}
void printVector(vector<int> &arr,int size)
{
    for (auto i:arr)
    {       
        cout<<i<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    getVector(arr, size);
    printVector(arr,size);
    reverse(arr,size);
    printVector(arr,size);
    return 0;
}