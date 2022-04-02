#include<bits/stdc++.h>
using namespace std;


//key value pair
//unordered map and unordered map
//maps are not continous unlike vector

void display(map<int ,string> &m)
{
    cout<<"size of map is"<<m.size()<<endl;
    for (auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl; //0(log(n))
    }
    



}


int main()
{
    map<int,string> m;    //stores keys in sorted order or lexographical order
    m[1]="abc";
    m[5] = "fjlahsd";
    m[2] = "dfdsfds";
    m[3]="dsfasfsdfs"; // 

    m.insert({4,"qer"}); //pair is inserted : 0(lon(n))  : if key is stirng then 0(s.size*log(n))

/*
    map<int ,string> :: iterator it;

    for(it = m.begin();it != m.end() ; ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
*/



/*
for(auto it = m.begin();it!=m.end();it++)
{
        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
*/


/*
for (auto &pr:m)
{
    cout<<pr.first<<" "<<pr.second<<endl;
}
  */  

 display(m);
 auto it = m.find(2); //returns iterator:if not presret then last :0(log(N))

 if(it == m.end())
 {
     cout<<"no such key";
 }
 else
 {

     cout<<(*it).second<<endl;

 }

 m.erase(3);  // 3 is key 0(log(n)),we can pass itersaror as well
 if(it!=m.end())
    m.erase(it);  // but it has to be valid
 display(m);




    return 0;
}