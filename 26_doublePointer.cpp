#include<iostream>
using namespace std;

void update(int **p)  // ptr2 is passed by value
{
    
    
    (**p) = (**p) +1;
    
    (*p) = (*p) +1;
    p = p+1;  // passed by value


}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;
/*
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr1<<endl;

    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
*/

cout<<i<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;
update(ptr1);
cout<<i<<endl;
cout<<ptr<<endl;
cout<<ptr1<<endl;






    return 0;
}