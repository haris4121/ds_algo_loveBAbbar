#include<iostream>
#include<vector>
using namespace std;

int main()
{   int n =3;
    vector<vector<int>> arr;
    arr = {{1,2,3},{2,3,4,5},{1,3}};
    for (int i = 0 ; i < n ; i++)
        {
            for (int j = 1 ; j <= arr[i][0] ; j++)
            {

                // If the demand of candies is less than equal to x ,
                // the total number of candies is increased.
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }


    return 0;
}