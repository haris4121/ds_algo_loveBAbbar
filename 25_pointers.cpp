#include<iostream>
using namespace std;

void update(int *p)  // update poiner
{
 

 (*p) = (*p )+ 1;
 p= p +1; // pointer variable is itself copy

 //we can update the value which pointer is pointing to
 //


}
void print(int *p)
{

    cout<<*p<<endl;


}





int main()
{
    /*
    int arr[4] = {0,11,2,3};
    // cout<<arr<<endl;
{

    // cout<<*(arr+1);
/*
    int i =3;

   cout<< i[arr]<<" "<<*(i+arr); // also valid


int *ptr = &arr[0];
ptr = ptr+1;

// arr = arr+1;   error : array type cant b reassigned
cout<<*arr;



//character array

char ch[6] = "abcde";

cout<<ch<<endl;    //different from int array

char *c = &ch[0];

cout<<c<<endl;  // again prints whole string

char ch1 = 'a';
char *c2 = &ch1;
cout<<c2<<endl;  // prints where null is encountered : unknown behaviour


char *st = "jfkljas";//risky (avoid)

*/

//fucntions and pointer
/*

}

int a = 8;
int *ptr = &a;

// print(ptr);

cout<<ptr<<endl;
cout<<*ptr<<endl;
update(ptr);
cout<<ptr<<endl;
cout<<(*ptr)<<endl;


*/











    return 0;
}