#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("haris");
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size();

    cout<<s.empty();

    return 0;
}