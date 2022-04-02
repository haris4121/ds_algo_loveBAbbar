#include<iostream>
using namespace std;

int fastExponentiation(int x,int y)
{
    if(y == 0)
        return 1;
    if(y == 1)
        return x;

    int ans = fastExponentiation(x,y/2);

    if(y&1)
        return x*ans*ans;
    else
        return ans*ans;




}
int main()
{
    
    cout<<fastExponentiation(3,4);
    

    return 0;
}