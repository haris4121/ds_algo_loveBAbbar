#include<iostream>
using namespace std;

int main()
{
    // cout<< (5<<1)<<endl;   //left shift , right shift :usually multiplies by 2
    // cout<< (5>>2)<<endl;   //right shift ,usually divides by 2

    // cout<<(44>>1)<<endl;  //22

    // cout<< (22<<2)<<endl;


    // **** inc and dec
    // int a =4,i=1;
    // cout<< a+ i++; //5 and i becomes 2 after execution
    // cout<<a + ++i; //7 as i is incremented before execution



    // int a,b=1;
    // a = 10;
    // if(++a)
    //     cout<<b;
    // else
    //     cout<< ++b;


    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout<<b<<endl; // 1
    // cout<<c; // 3

    //for forloop no arg is mandatory
    /*
    int   count = 4;
    size_t i = 0;
    for (;;)
    {
        if (i < count)
        {
            cout<<i:
        }
        else
        break;
        
         i++;
    }
    */

/*
   for (size_t a = 1 , b=1; a>=0 && b>=1 ; a--,b--)
   {
       cout<<a<<b<<endl;
   }

*/

/*
int n = 10 ;
int a=0,b = 1;
cout<<a<<endl<<b<<endl;

for (size_t i = 1; i <= 10; i++)
{
    int next = a+b;
    cout<<next<<endl;
    a = b;
    b = next;
}
*/


//break,continue

/*
for (int i = 0; i <= 15; i += 2)
{
   cout<<i<<" ";
   if (i&1)
   {
       continue;
   }
   i++;
   
}
*/

//***** variable scope *****
/*

int a = 9;   //9
cout<<a<<endl;
if(true)
{
    int a = 0;
    cout<<a<<endl;   // 0
}
*/

//precidence


// out<<(40?&1);

// cout<<(-3%2);
cout<<(~5);



   
    

  


    return 0;
}