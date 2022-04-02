#include<iostream>
#include<climits>
using namespace std;

int getMax(int num[],int size)
{
    int maxi = INT_MIN;
    for (size_t i = 0; i <size; i++)
    {
        if (num[i]>maxi)
        {
            maxi = num[i];
        }
        
    }
    return maxi;

}
int getMin(int num[],int size)
{
    int mini = INT_MAX;

    for (size_t i = 0; i < size; i++)
    {
        if (num[i]<mini)
        {
            mini = num[i];
        }
        
    }
    // maxi = max(maxi,num[i]) : is inbuit fuction
    return mini;
    
}

int main()
{   
    int size;
    cin>>size;  
    int num[100];  //bad practice if we use variable in size : we can use dynamic mem allocation
    for (size_t i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"max is"<<getMax(num,size)<<endl;
    cout<<"min is"<<getMin(num,size)<<endl;
     

    return 0;
}