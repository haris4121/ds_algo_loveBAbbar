#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n ==  1)
    {
       return 1;
    }
    
    return n*factorial(n-1);
    


}


int power(int n)
{

if(n == 0)
    return 1;
return 2 * power(n - 1);


}

void display(int n)
{
    if (n == 0)
    {
        return;
    }
   
    display(n-1); //recursive relation

     cout<<n<<" ";  //head recursion

}

int main()
{
    int n;
    cin>>n;

    
    cout<<"factorial is"<<factorial(n)<<endl;
    cout<<"power is"<<power(n)<<endl;
    display(n);



    return 0;
}