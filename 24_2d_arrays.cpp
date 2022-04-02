#include<iostream>
#include<limits.h>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int column)  // in cpp atleast no fo columns has to b given
{
    for (size_t i = 0; i < row; i++)
    {
       for (size_t j = 0; j < column; j++)
       {
           if(arr[i][j] == target)
                return true;
       }
       
    }
    return false;
    



}

void rowWiseSum(int arr[][4],int row, int col)
{

for(int i = 0;i<row;i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
           sum+=arr[i][j];
        }
        cout<<sum<<endl;
        
    }
    
}

void columnWiseSum(int arr[][4],int row,int col)
{

    for(int i = 0;i<col;i++)
    {   int sum = 0;
        for(size_t j = 0; j <row; j++)
        {
           sum+=arr[j][i];
        }
        cout<<sum<<endl;
        
    }


}

int maxSumRow(int arr[][4],int row,int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1;


    for(int i =0;i<row;i++)
    {
        int sum = 0;
        for (size_t j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        if (sum > maxi)
        {
           maxi = sum;
           rowIndex = i;
        }
       
       
       
        
        
    }
     cout<<"maximum sum is "<<maxi<<endl;
     return rowIndex;



}
int main()
{
    //create 2d arrays

    // int arr[3][4];//memory is assigned in linear fashion but mapping is automatically done

    // cin>>arr[2][1];
    // cout<<arr[2][1];

    //for user input use 2 loops
/*
    for(int i = 0;i<3;i++)   //takes row wise input
    {
        for (int j = 0; j < 4; j++)
        {
           cin>>arr[i][j];
        }
        
    }

    */
/*
    for(int i = 0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }



for(int i = 0;i<4;i++)   //takes column wise input
    {
        for (int j = 0; j < 3; j++)
        {
           cin>>arr[j][i];
        }
        
    }

*/

/*
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

int arr2[3][4] = {{1,22,33,44},{3,33,333,3333},{4,44,444,444}};

*/



//search for element
int arr[3][4];
 for(int i = 0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cin>>arr[i][j];
        }
        
    }

//     cout<<"enter the element to search "<<endl;
//     int target;
//     cin>>target;
//     if(isPresent(arr,target,3,4))
//         cout<<"found";
//     else
//         cout<<"not found";



// rowWiseSum(arr,3,4);
// columnWiseSum(arr,3,4);
int s =  maxSumRow(arr,3,4);
cout<<s;








    return 0;
}
