#include<bits/stdc++.h>
using namespace std;
void display(map<string ,int> &m)
{
    cout<<"size of map is"<<m.size()<<endl;
    for (auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl; //0(log(n))
    }
    



}

//input n strings and give order in lexgraphical and frequency

int main()
{
    map<string,int> m;
    int n;
    cin>>n;

    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] +1; //if kee:value absetn then automacally is zero
    }

    display(m);
    

    

    return 0;
}