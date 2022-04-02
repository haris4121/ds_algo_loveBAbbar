#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec = {1,3,4,6,7};

    auto it = lower_bound(vec.begin(),vec.end(),6);
    cout<<*it;

    auto it2 = upper_bound(vec.begin(),vec.end(),6);
    cout<<*it2;

    return 0;
}