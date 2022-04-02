#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (size_t i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
           return true;
        }
        
    }
    return false;
    
}

void getArray(int arr[], int size)
{
    cout << "enter array";
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int size, key;
    cin >> size;
    int arr[100];
    getArray(arr, size);
    cout << "enter the key" << endl;
    cin >> key;
    bool found = search(arr, size, key);
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present";
    }

    
    return 0;
}