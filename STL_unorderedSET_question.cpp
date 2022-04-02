#include<bits/stdc++.h>
using namespace std;

//check if string is present in set
//better to use unordered set

int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
       string temp;
       cin>>temp;
       s.insert(temp);
    }


    int q;
    cin>>q;
    while (q--)
    {
        string temp2;
        cin>>temp2;
        if(s.find(temp2) == s.end())
        cout<<" no string is not present"<<endl;
        else
        cout<<"present";

    }
    
    
    
    

    return 0;
}