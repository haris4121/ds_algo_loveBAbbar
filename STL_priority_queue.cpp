#include<iostream>
#include<queue>
using namespace std;

// after inserting popped element is max or min

int main()
{

    //max heap
    priority_queue<int> maxi;

    //min heap

    priority_queue<int,vector<int>,greater<int> > mini;


    maxi.push(5);
    maxi.push(3);
    maxi.push(6);

    
    int size = maxi.size();

    for (size_t i = 0; i < size; i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    cout<<endl;


    
    

    mini.push(5);
    mini.push(3);
    mini.push(6);
    int sizemin = mini.size();


    for (size_t i = 0; i < sizemin; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }

    
    cout<<mini.empty();
    return 0;
}