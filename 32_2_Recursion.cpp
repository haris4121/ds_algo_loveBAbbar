#include<iostream>
#include<unordered_map>
using namespace std;
void reachHome(int src,int destination)
{
    cout<<src<<" "<<destination<<endl;
    if(src == destination)
    {
        cout<<"reached";
        return;
    }
    src++;//processing
    reachHome(src,destination);//recursive call
}

int countDistinctWayToClimbStair(long long nStairs) //cs
{
    if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;
    
    return  countDistinctWayToClimbStair(nStairs -1 ) +  countDistinctWayToClimbStair(nStairs - 2);
    // gives tle we have to use dp
    
    
}

void SayDigi(unordered_map<int,string> &data,int n)
{
    if(n==0)
        return ;
    int rem = n%10;
    SayDigi(data,n/10);
    auto it = data.find(rem);
   cout<<it->second<<" ";


}

int gcd(int n,int m)
{
    if(n == 0 || m==0)
    {
        return (m+n);
    }

    int maxi = max(m,n);
    int mini = min(m,n);

   return gcd(mini,maxi - mini);




}

int main()
{


    /*
    int destination = 10;
    int src = 1;
    reachHome(src,destination);
    */

   /*
   unordered_map<int,string> data;
   data.insert({0,"zero"});
   data.insert({1,"one"});
   data.insert({2,"two"});
   data.insert({3,"three"});
   data.insert({4,"four"});
   data.insert({5,"five"});
   data.insert({6,"six"});
   data.insert({7,"seven"});
   data.insert({8,"eight"});
   data.insert({9,"nine"});

   SayDigi(data,4445);
   */
cout<<gcd(18,15);

    

    return 0;
}