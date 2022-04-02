#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,3,6,7};
/*
    cout<<binary_search(v.begin(),v.end(),6)<<endl;


    cout<<"lowe bound ->6 "<<lower_bound(v.begin(),v.end(),6) - v.begin()<<endl;


    cout<<"lowe bound ->6 "<<upper_bound(v.begin(),v.end(),4) - v.begin()<<endl;

    cout<<max(3,4)<<endl;
    cout<<min(3,4)<<endl;
    int a =5,b =7;
    swap(a,b);


string s ="abcde";
reverse(s.begin(),s.end());
cout<<s;
*/

rotate(v.begin(),v.begin()+1,v.end());


for (auto i:v)
{
    cout<<i<<" ";
}
cout<<endl;

sort(v.begin(),v.end()); //intro sort

for (auto i:v)
{
    cout<<i<<" ";
}
    
    return 0;
}