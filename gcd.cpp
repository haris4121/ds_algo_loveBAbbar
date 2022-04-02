#include<iostream>
using namespace std;

int gcd(int a ,int b)
{
    /*
    while(a!=0&&b!=0)
    {
        if(a>=b)
        {
            a = a -b;
        }
        else
        {
            b = b -a;
        }   
    }
    if( a == 0 ) 
        return b;
    return a;
    */

   if(a == 0)
    return b;

   if(b == a)
        return a;

    while( a!= b)
    {
        if(a>b)
        a = a - b;
        else
        b = b -a;
    }
    return a;






}

int main()
{
   int hcf = gcd(4,4);
   cout<<hcf;
    

    return 0;
}