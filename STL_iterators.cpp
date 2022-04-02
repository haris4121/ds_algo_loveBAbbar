#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    vector<int> V = {1,2,3,4};   //used cppp 11 standard in vscode


    vector<int>::iterator it = V.begin();  //points to first element
    // cout<<*(it+1);
    
    for (it = V.begin(); it!=V.end(); ++it)  //it+1 isnt valid in sets and maps
    {
       cout<<(*it)<<" "; 
    }
    cout<<endl;

    vector<pair<int,int> > v_p = {{1,2},{2,4},{34,5}};

    vector<pair<int,int> > :: iterator it1;
    for (it1 = v_p.begin() ; it1!=v_p.end() ; ++it1)
    {
        cout<<(*it1).first<<" "<< it1->second << "   "; //both valid
        
    }
    cout<<endl;


    //******  cpp 11  ***********

    //range base loops

    for (int value  : V)
    {
        cout <<value<<" ";   //value is copy of actual
    }
    cout<<endl;

    //for actual value

    for (int &value:V)  //here we can change the actula value of elemnt ofv
    {
       cout<<value<<" ";
    }

    for (pair<int,int> value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }



    //auto keyword

    auto a =1;  //automatically determins the data type
    cout<<a;

    
*/
    vector<int> v={2,3,4,5};

    for (auto it = v.begin(); it!=v.end() ; ++it)  //no need of decleration of it
    {
       cout<<(*it)<<" ";
    }
    auto it = v.end();
    cout<<(*(it-1));  // it points to last + 1


    
    



    
    
    
    

    
    

    return 0;
}