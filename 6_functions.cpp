#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (size_t i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}

bool IsEven(int a)
{
    if (a & 1)
    {
        return false;
    }
    return true;
}

int factorial(int num)
{
    int ans = 1;
    for (size_t i = num; i >= 2; i--)
    {
        ans*=i;
    }
    return ans;
    
}

int nCr(int n,int r)
{
    if (n<r)
    {
        cout<<"n must b greater or equal to than r";
       exit(-1);
    }
    
    int ans;
    ans = factorial(n)/(factorial(r) *factorial(n-r));
    return ans;
}

int fibonacchi(int n)

{
    int t1 = 0,t2 = 1 , t3;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    
    for (size_t i = 0; i < n - 2; i++)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return t3;
    
}

int main()
{
    /*
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    */

   /*



// ****** EVEN ODD ****** 
    int a;
    cin >> a;
    if (IsEven(a))
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    */



   // ****** n c r ******  
/*
   int n ,r;
   cin>>n>>r;
   cout<<nCr(n,r)<<endl;
*/



// cout<<fibonacchi(88);


    return 0;
}