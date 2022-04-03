#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int element = arr[s];
    int count = 0;

    for (size_t i = s + 1; i <= e; i++)
    {
        if (arr[i] <= element)
            count++;
    }
    int pivot = s + count;

    swap(arr[s], arr[pivot]);

    while (s < pivot && e > pivot)
    {

        while (arr[s] <= arr[pivot])
            s++;
        while (arr[e] > arr[pivot])
            e--;

        if(s<pivot && e>pivot)
            swap(arr[s++],arr[e--]);



        
    }
    return pivot;
}

void quickSort(int *arr, int s, int e)
{

    if (s >= e)
        return;

    int pivot = partition(arr, s, e);

    quickSort(arr, s, pivot - 1);
    quickSort(arr, pivot + 1, e);
}

int main()
{
    int arr[7] = {1,1,1,3,1,1,1};
    quickSort(arr, 0, 6);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}