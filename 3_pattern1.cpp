#include<iostream>
using namespace std;

int main()
{/*
    cout<<"enter n :"<<endl;
    int n;
    cin>>n;
    int i=1;

    while(i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    */

   cout<<"enter n :"<<endl;
    int n;
    cin>>n;
    int i=1;

    while(i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
        
    }



    return 0;
}