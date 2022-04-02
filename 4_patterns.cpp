#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n)
    // {
    //     int j = 1;
    //     while(j<=n)
    //     {
    //         cout<<j;;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //****pattern 4 ****
    /* int n;
     cin>>n;
     int i=1;
     while(i<=n)
     {
         int j = n;
         while(j>=1)
         {
             cout<<j;;
             j--;
         }
         cout<<endl;
         i++;
     }
     */

    //********* pattern 5 **********
    /*  int n;
      cin>>n;
      int i=1,count = 1;
      while(i<=n)
      {
          int j = 1;
          while(j<=n)
          {
              cout<<count;
              j++;
              count++;
          }
          cout<<endl;
          i++;
      }
      */

    //********* pattern 6 **********
    /*
     int n;
        cin>>n;
        int i=1;
        while(i<=n)
        {int j = 1;
            while(j<=i)
            {
                cout<<"⭐️";
                j++;

            }
            cout<<endl;
            i++;
        }
        */

    //********* pattern 7 **********

    /*int n;
       cin>>n;
       int i=1;
       while(i<=n)
       {int j = 1;
           while(j<=i)
           {
               cout<<i;
               j++;

           }
           cout<<endl;
           i++;
       }
       */

    //********* pattern 8 **********
    /*
        int n;
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << i+j - 1;
                j++;
            }
            cout << endl;
            i++;
        }
        */

    //********* pattern 9 **********
    /*
        int n;
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout<<i -j +1;
                j++;
            }
            cout << endl;
            i++;
        }
        */

    //****pattern 10 ****
    /*
      int n;
      int asci;
      asci = 'A';
      cin>>n;
      int i=1;
      while(i<=n)
      {
          int j = 1;
          while(j<=n)
          {
              char ch = asci +i-1;
              cout<<ch;
              j++;
          }
          cout<<endl;
          i++;
      }
      */

    //  ****pattern 11 ****

    /*
         int n;
         int asci;
         asci = 'A';
         cin>>n;
         int i=1;
         while(i<=n)
         {
             int j = 1;
             while(j<=n)
             {
                 char ch = asci + j-1;
                 cout<<ch;
                 j++;
             }
             cout<<endl;
             i++;
         }

         */

    //  ****pattern 12 *******
    /*
int n;
     int asci;
     asci = 'A';
     cin>>n;
     int i=1,count = 1;
     while(i<=n)
     {
         int j = 1;
         while(j<=n)
         {
             char ch = asci + count -1;
             cout<<ch;
             j++;
             count++;
         }
         cout<<endl;
         i++;
     }
     */

    //  ****pattern 13 ***********
    /*
    int n;
     int asci;
     asci = 'A';
     cin>>n;
     int i=1,count = 1;
     while(i<=n)
     {
         int j = 1;
         while(j<=n)
         {
             char ch = asci + i +j - 2;
             cout<<ch;
             j++;
             count++;
         }
         cout<<endl;
         i++;
     }
     */

    //  ****pattern 14 ***********
    /*
         int n;
         int asci;
         asci = 'A';
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                char ch = asci + i - 1;
                cout<<ch;
                j++;
            }
            cout << endl;
            i++;
        }

        */

    //  ****pattern 14 ***********

    /*
     int n;
     int asci;
     asci = 'A';
    cin >> n;
    int i = 1 ,count;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = asci +count;
            cout<<ch;
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
    */

    //  ****pattern 14 ***********
    /*
    int n;
         int asci;
         asci = 'A';
        cin >> n;
        int i = 1 ;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                char ch = asci + i +j -2;
                cout<<ch;
                j++;

            }
            cout << endl;
            i++;
        }
        */
    //  ****pattern 15 ***********
/*
    int n;
    int asci;
    asci = 'A';
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = asci + n -i +j - 1;  //alternate way is to find first char of each row and then add by once on each col
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    */


    //  ****pattern 16 ***********
/*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n -i)
        {
           cout<<" "; 
            j++;
        }
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        
        cout << endl;
        i++;
    }
    */


    //  ****pattern 17 ***********
/*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n -i + 1)
        {
           cout<<"*"; 
            j++;
        }
        while (j<=n)
        {
            cout<<" ";
            j++;
        }
        
        cout << endl;
        i++;
    }
    */
    //  ****pattern 18 ***********
/*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <=  i -1 )
        {
           cout<<" "; 
            j++;
        }
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        
        cout << endl;
        i++;
    }

    */
    //  ****pattern 18 ***********
/*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <=  n - i  )
        {
           cout<<" "; 
            j++;
        }
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        
        cout << endl;
        i++;
    }
    */


//******** tough problem won soution ********
 /*int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {   int columns = n + row -1;
        int j = 1 ;
        while (j <= n - row )
        {
            cout<<" ";
            j++;
        }
        int count1 = 1;
        while (j <= n)
        {      
            cout<<count1;
            j++;
            count1++;
        }
        count1--;
        while (j<=columns)
        {
            count1--;
            cout<< count1;
            j++;
        }
        
        cout<<endl;
        row++;
    }
*/

//******* patttern 19********
/*
int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    { 
        int spaces = n - row;
        while (spaces)
        {
            cout<<" ";
            spaces--;
        }

        int j = 1;
        while (j <= row)
        {
            cout<<j;
            j++;
            
        }

        int start = row - 1;
        while (start)
        {
            cout<<start;
            start--;
        }
        row++;
        
        cout<<endl;
    }
    return 0;
}
*/

//******* patttern 20********




