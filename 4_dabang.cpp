#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    while (row <= n)
    {   int i =1;
        while ( i<= n - row + 1)
        {
           cout<<i;
           i++;
        }

        int spaces1 = row -1;
        while (spaces1)
        {
           cout<<"*";
           spaces1--;
        }

        int spaces2 = row -1;
        while (spaces2)
        {
           cout<<"*";
           spaces2--;
        }

        int j = 1;
        while (j <= n - row +1)
        {
            cout<<n - j +2 - row;
            j++;
        }
        cout<<endl;

        row++;
        
    }
    
    

    return 0;
}