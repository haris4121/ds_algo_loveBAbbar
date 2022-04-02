#include<iostream>
#include<list>
using namespace std;

int main()
{
    //doublly linked lsit is used : acess is not direct ie 0(1) : we have to traverse

    list<int> l ;
    l.push_back(1);
    l.push_front(2);

    for (size_t i : l)
    {
       cout<<i<<" ";
    }
    cout<<endl;

    // erase 0(n)

    l.erase(l.begin());   // we have to give iterator
    

for (size_t i : l)
    {
       cout<<i<<" ";
    }
    cout<<l.size();

    
    list<int> l(5,100);//5 times 100b

    return 0;
}