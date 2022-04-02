#include<iostream>
#include<deque>
using namespace std;


int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (size_t i = 0; i < d.size(); i++)
    {
        cout<<d.at(i)<<" ";
        cout<<d[i]<<endl;
    }
    // d.pop_back();
    
    cout<<"first element of deque is"<<endl;
    cout<<d.at(1)<<endl;


    cout<<d.front()<<endl;
    // cout<<d.end()<<endl;
    cout<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);

   cout<< d.size();
    

    return 0;
}