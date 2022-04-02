#include<iostream>
#include<string>
using namespace std;

int main()
{
    /*
    string str;
    string str1(5,'a');
    string str2 = "hsjfhja";


    getline(cin,str);//to accomidate spaces

    cout<<str;
    */


    //functions of strings

    //append : joodna

    string str1 = "";
    string str2 = "ily";
    cout<<str1.back();
    if('a' == str1.back())
    cout<<"hello";

    str1.append(str2);//or  str1 = str1 + str2

    str1.erase(0,1);
    // cout<<str1;

    // clear funcion



    // cout<<str1;

    // inbuilt functions of character array
    // int len = strlen(name)
    //strcmp(s1,s2)
    //strcpy(d,s);


    //iniult functions of string
    //erase(start index,lenfth)
    //s.find("sub_string")




    
    

    return 0;
}