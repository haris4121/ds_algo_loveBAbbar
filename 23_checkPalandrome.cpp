
#include<iostream>
using namespace std;


bool checkPalindrome(string s)
{

    int end = s.length() - 1;
    int start = 0;
          
     for(int i =0 ; i<=end ; i++)
     {
         if(s[i]<='Z' && s[i]>='A')
         	s[i] = s[i] + 32;       
     }
    
    while(start<=end)
    {
       if(!((s[start]>='a' && s[start]<='z') ||(s[start]>='0' && s[start]<='9')) ) 
       {
           start++;
           continue;
           
       }
        if(!((s[end]>='a' && s[end]<='z') ||(s[end]>='0' && s[end]<='9')))
        {
            end--;
            continue;
            
        }
        
        if(s[start] != s[end])
            return false;
        start++;
        end--;
           
           
        
        
        
    }
return true;
    
}

bool CheckPalandromeRecursion(string &str, int i ,int j)//different from above problem
{
    if(str[i]!=str[j])
        return false;
    if(i>j)
        return true;

     return CheckPalandromeRecursion(str,i+1,j-1);




}
int main(int argc, char const *argv[])
{
    string str2 = "joooj";
    cout<<CheckPalandromeRecursion(str2,0,str2.length()-1);
    
    return 0;
}
