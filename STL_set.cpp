
#include<bits/stdc++.h>
using namespace std;


//unique elements are passed

void dispay(set<string> &s)
{
    for (auto str:s)
    {
        cout<<str<<endl;
    }

    //or
/*
    for (auto it = s.begin(); it!= s.end(); it++)
    {
     cout<<*it<<endl;
    }
    */
    
    


}

int main()
{
    //collectioin of elements
    //set,unordered sets,multisets
/*
    set<string> s;

    // normal set stord in sorted order

    s.insert("abc");
    s.insert("sadfs");//log(n)
    s.insert("jjg");

   auto it =  s.find("abc"); //log(n)
   if (it!=s.end())
   {
       s.erase(it); //can take value of it
   }

   dispay(s); 



*/

   // UNOREDERED SETS ;BETTER TIME COMPLEXITY :order doesnt matter ie if we have to print it will not print in lexographical order
/*
   unordered_set<string> s1;   // again we can keep basic data types in uo_ordered but in ordered we have
   

    // normal set stord in sorted order

    s1.insert("abc");
    s1.insert("sadfs");//0(1)
    s1.insert("jjg");

   auto it1 =  s1.find("abc"); //0(1)

   if(it1 != s1.end())
   {
    cout<<*it1<<endl;
   }
   */




  //*****MUTLISET  *****
   multiset<string> s2;   // allows to insert mutliple times same string
   

    // normal set stord in sorted order

    s2.insert("abc");
    s2.insert("abc");//log(n)
    s2.insert("haris");

   auto it2 =  s2.find("abc");  //gives iterator of first value if present more than 1 time

   if(it2 != s2.end())
   {
       s2.erase(it2);//log(n)
    cout<<*it2<<endl;
   
   }


   //if i erase using value rather than it then all values are deleted but iterator deletes at position
   

   




    

    return 0;
}