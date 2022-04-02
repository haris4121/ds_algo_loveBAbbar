#include<iostream>
#include<queue>
using namespace std;


// FIFO :first in first out
int main()
{
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("haris");

    cout<<" front element is "<< q.front()<<endl;
    q.pop();  //from front
    cout<<" front element is "<< q.front()<<endl;
    cout<<"size of queue is "<<q.size()<<endl;
    

    return 0;
}