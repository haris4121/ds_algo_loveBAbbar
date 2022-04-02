#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>  arr = {{1,2,3},{6,7,8},{11,13,15},{1,3,5}};
vector<int > sol;

/*

    int startRow = 0;
    int endRow = 3;
    int startColumn = 0;
    int endColumn = 2;

    while(startColumn <= endColumn && startRow <= endRow)
    {

        for (int i = startColumn; i <= endColumn; i++)
        {
            cout<<arr[startRow][i]<<" ";
        }
        
        for (int i = startRow+1; i <= endRow; i++)
        {
            cout<<arr[i][endColumn]<<" ";
        }
       

        for (int i = endColumn - 1; i >= startColumn && (startRow != endRow); i--)
        {
           cout<<arr[endRow][i]<<" ";
        }
       


        for (int i = endRow - 1; (i >=startRow+1) && (startColumn != endColumn); i--)
        {
            
            cout<<arr[i][startColumn]<<" ";
        }
        

        startColumn++;
        startRow++;
        endColumn--;
        endRow--;
        


    }


    
        
*/


// ***** sir********

/*
int total = 4*3;
int count = 0;
int startRow = 0;
    int endRow = 3;
    int startColumn = 0;
    int endColumn = 2;


while(count<total)
{
    for(int i = 0;i<=endColumn && count<total ;i++)
    {
        sol.push_back(arr[startRow][i]);
        count++;
    }
    startRow++;

    for(int i = startRow;i<=endRow;i++)
    {
        sol.push_back(arr[i][endColumn]);
        count++;
    }
    endColumn--;

    for (int i = endColumn;i>=startColumn; i--)
    {
       sol.push_back(arr[endRow][i]);
       count++;
    }
    endRow--;
    for(int i = endRow;i>=startRow;i--)
    {
        sol.push_back(arr[i][startColumn]);
        count++;
    }
    startColumn++;
    




}

*/


vector<vector<int>> temp;
vector<vector<int>> temp2= {{0,0,0},{0,0,0},{0,0,0}};

temp = {{1,2,3},{3,2,1},{1,2,3}};
temp2[2][2] = 4;




   

    

    return 0;
}