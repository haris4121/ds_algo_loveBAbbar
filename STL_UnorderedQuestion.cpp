#include<bits/stdc++.h>
using namespace std;
//as we dont need in lexographical

int main()
{
    unordered_map<string,int> m;
    int n;
    cin>>n;

    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] +1; //if kee:value absetn then automacally is zero
    }

    int q;
    cin >>q;

    for (size_t i = 0; i < q; i++)
    {
        string str;
        cin>>str;
        cout<<m[str];
        
    }

    // multimap<int ,  duplicate keys can b used
    

    




    
    

    

    return 0;
}