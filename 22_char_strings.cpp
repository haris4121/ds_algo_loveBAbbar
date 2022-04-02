#include<iostream>
#include<vector>
#include<string>
using namespace std;
//character array

int getlength(char arr[])
{
    int count = 0;
    int i = 0;

    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
    return count;



}

void reverseString(char arr[])
{
    int len = getlength(arr);

    int start = 0;
    int end = len -1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}


void reverseStringRecursion(string &str,int s,int e)
{
    if(s>e)
        return;
    swap(str[s],str[e]);

    reverseStringRecursion(str,s+1,e-1);

}


int main()
{
    // char name[20];
    // cin>>name; //'\0'// is used as terminator,avoid overflow , cin stops input when  space,tap,enter is given

    // // name[3] = '\0';  can only print upto 2nd index
    // cout<<name<<endl;

    // // cout<<getlength(name);

    // reverseString(name);

    // cout<<name;

    string str;
    str = "haris";
    cout<<str.length()<<endl;
    reverseStringRecursion(str,0,str.length()-1);
    cout<<str;



   



    



    

    

    return 0;
}