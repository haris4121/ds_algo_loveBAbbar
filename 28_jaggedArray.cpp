#include<iostream>
using namespace std;
//array in which columns can be of different length

int main()
{
    int rows;
    cin>>rows;
    int *columns = new int[rows];

    for (size_t i = 0; i < rows; i++)
    {
        cin>>columns[i];
    }

    int **arr = new int*[rows];
    for (size_t i = 0; i < rows; i++)
    {
        arr[i] = new int[columns[i]];
    }

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns[i]; i++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns[i]; i++)
        {
            cout<<arr[i][j];
        }
        
    }
    
    
    
    

    return 0;
}