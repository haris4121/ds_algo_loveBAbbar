#include<iostream>
using namespace std;

int main()
{   /*char a;
    a = cin.get(); //can take character as input 
    cout<<a<<endl;  //if we have used a as int then automatic it gets converted to asci value
    */

/*
   cout<<" enter the value of a :"<<endl;
   int a;
   cin>>a;
   if (a>0)
   {
       cout<<" a is positive"<<endl;
   }
   else if (a < 0)
   {
       cout<<" a is negative"<<endl;
   }
   else
   {
       cout<<" a is zero";
   }

  */

 //EXERCISE 2


cout<<"enter character"<<endl;
 char ch;
 cin>>ch;
 
 if (int(ch)>= int('a') && int(ch) <=int('z'))
 {
     cout<<"character is small case"<<endl;
 }
 else if (int(ch)>= int('A') && int(ch) <=int('Z'))
 {
     cout<<"character is large case"<<endl;
 }
 else if (int(ch)>= int('1') && int(ch) <=int('9'))
 {
     cout<<"character is number"<<endl;
 }
 
 


// ****** pattern ********/





 
 
 
 


 
   




    return 0;
}