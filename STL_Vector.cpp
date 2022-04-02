#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &vec)  //passing refrence is easy and 0(1) rather than 0(n)
{
    // cout<<"size in vector is "<<vec.size()<<endl;
    // cout<<"capacity in vector is "<<vec.capacity()<<endl;
    for(int i = 0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void display(vector< pair<int,int> > &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i].first<<" "<< vec[i].second<<endl;
    }
    
}



int main()
{
    

/**************               ***********/
/*
    pair<int ,string> p;

    p = make_pair(2,"bcx");  //or  p = {2,"bcx"};

    // cout<<p.first <<" "<<p.second;

    pair<int,string> p1 = p; //copy of p in stored in p1
    // cin>>p.first;

    pair <int,int> p_array[3];

    p_array[0] = make_pair(4,7);       //cant use easy syntax here
    p_array[1] = make_pair(5,99);
    p_array[2] = make_pair(5,99);

    swap(p_array[0],p_array[2]);

    // for (size_t i = 0; i < 3; i++)
    // {
    //     cout<< p_array[i].first<<" "<<p_array[i].second<<endl;
    // }


    
    
*/


    /*************** vectors ****************/
    /*
    vector<int> a;


    vector<int> b(5,1); //size is 5 and each element is 1


    vector<int> c(b);   //copies b in c 0(n)
    vector<int> &d = b;// d and b same
    d.push_back(66);

    //   display(b);

    b.push_back(44);  //0(1)

    // display(b);

    vector<string> str;
    str.push_back("fjlshf");
    str.push_back("fjlshfdf");
    str.push_back("fjlsjjghf");

    // display(str);

/*
/*************** nesting of vectors ****************/
/*
 vector<pair<int , int> > vec ;  // vector<pair<int ,int > > vec = {{2,3},{3,4}}; works but not in my machine
    vec.push_back(make_pair(3,4));
    vec.push_back(make_pair(33,34));
    vec.push_back(make_pair(35,36));
    //   vec.push_back({3,4});   agian can b used but higher cpp version  
    display(vec);


*/
/*************** aray of vector ****************/

/*
rows fixed but coulums dynamic
    vector<int> vect[4];  // array of vector
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            vect[i].push_back(i);
            
        }
        
        

    }

    for (size_t i = 0; i < 4; i++)
    {
        display(vect[i]);
    }
    
*/

/*************** vector of  vectors ****************/

/*
// here both rows and cooulums are dynamic i.e we can change them
int rows;
cout<<"enter the number of rows";
cin>>rows;
vector< vector<int> > V;
for (size_t i = 0; i < rows; i++)
{
    int col;
    cout<<"enter the no of columns ";
    cin>>col;
    vector<int> temp;
    for (size_t j = 0; j < col ;j++)
    {
        temp.push_back(j);
    }

    V.push_back(temp);
    temp.clear();
    
}

cout<<V[0][0];


for (size_t i = 0; i < V.size(); i++)
{
    display(V[i]);
}

*/

/*************** vector of  vectors ****************/


pair<int,int> a={2,3};
vector<pair<int ,int > > vec = {{2,3},{3,4}};




    

    






    




    
    

    return 0;
}