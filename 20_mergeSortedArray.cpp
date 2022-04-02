#include<iostream>
#include<vector>
using namespace std;

void MergeSort(vector<int> &v1,int m,vector<int> &v2,int n)
{
    int i= 0, j = 0;
    vector<int> sol;

    while (i<m && j<n)
    {
        if (v1[i]< v2[j])
        {
           sol.push_back(v1[i++]);
        }
        else{

            sol.push_back(v2[j++]);
        }
        
    }

    while (i<m)
    {
        sol.push_back(v1[i++]);
    }

    while (j<n)
    {
       sol.push_back(v2[j++]);
    }
    
    
    v1 =sol;




}

int main()
{
    vector<int> v1 = {1,2,3,6};
    vector<int > v2 = {-1,1,4,6,7};

    MergeSort(v1,4,v2,5);

    for (int i:v1)
    {
        cout<<i<<" ";
    }
    


    

    return 0;
}