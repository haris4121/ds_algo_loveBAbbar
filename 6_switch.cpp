#include<iostream>
using namespace std;




int main()
{
    //switch
    /*
    char ch ='2';
    switch (ch)
    {
    case '1':
        cout<<"first"<<endl;  //condition cant b a string or float
        break;
    case '2':
    cout<<"second"<<endl;
    
    default:
    cout<<"defalut";
        break;
    }



    int  num =2;
    switch (num)
    {
    case 1:
        cout<<"first"<<endl;  //condition cant b a string or float :defalut case isnt mandatory 
        break;
    case 2:
    cout<<"second"<<endl;
    
    default:
    cout<<"defalut";
        break;
    }
    */


   //switch in switch is possible


   //if switch is in loop we cant come out of loop by break then we have to use exit
     
     /*int  num =5;
   while (1)
   {
      
    switch (num)
    {
    case 1:
        cout<<"first"<<endl;  //condition cant b a string or float :defalut case isnt mandatory 
        break;
    case 2:
    cout<<"second"<<endl;
      break;
    
    
    default:
    cout<<"defalut";
    exit; 
    }
    break;    
   }
   */


  //continue in case of switch isnt valid




// **************calc   **************

/*
  int a,b;
  char op;
cout<<"enter a and b"<<endl;
  cin>>a>>b;
cout<<"enter the operation"<<endl;
cin>>op;


switch (op)
{
case '+':
    cout<<a+b;
    break;
case '-':
    cout<<a-b;
    break;
case '*':
    cout<<a*b;
    break;
case '/':
    cout<<a/b;
    break;
case '%':
    cout<<a%b;
    break;

default:
cout<<"enter a legal operation";
    break;
}
*/



/*
cout<<30%20;
int num = 1330;
int arr[]={100,20,1};
for (size_t i = 0; i < 3; i++)
{
    switch (arr[i])
   {
   case 100:
        cout<< "no of 100's "<< 1330/100<<endl;
        num = num%100;
        break;
    case 20:
        cout<<"no of 20's "<<num/20<<endl;
        num = num%20;
        break;
    case 1:
        cout<<"no of 1's "<<num/1<<endl;
        num=num%1;
        break;
   } 
}
*/


//functions













   











    return 0;
}