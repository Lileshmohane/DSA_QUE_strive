#include<iostream>
using namespace std;
void  print1(int n){
    // outer loop  for a row i  o  base indexing 
    for (int  i = 0; i < n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 0; j <n ; j++)
       {
         cout<<"* ";
       }
       cout<<endl;
    }
    
}

void  print2(int n){
    // outer loop  for a row i  o  base indexing 
    for (int  i = 0; i < n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 0; j <=i; j++)
       {
         cout<<"* ";
       }
       cout<<endl;
    }
}

void  print3(int n){
    // outer loop  for a row i  o  base indexing 
    for (int  i = 1; i <=n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 1; j <=i ; j++)
       {
         cout<<j;
       }
       cout<<endl;
    }
}

void  print4(int n){

    // outer loop  for a row i  o  base indexing 
    for (int  i = 1; i <=n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 1; j <=i ; j++)
       {
         cout<<i;
       }
       cout<<endl;
    }
}

void  print5(int n){
    // outer loop  for a row i  o  base indexing 
    // for (int  i = n-1; i >=0; i--)
    // {
    //     // it for a colum  in count  a row 
    //    for (int  j = i; j >=0 ; j--)
    //    {
    //      cout<<"* ";
    //    }
    //    cout<<endl;
    // }
     for (int  i = 0; i <n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 0; j < n-i+1; j++)
       {
         cout<<"* ";
       }
       cout<<endl;
    }
}

void  print6(int n){

     for (int  i = 1; i <n; i++)
    {
        // it for a colum  in count  a row 
       for (int  j = 1; j < n-i+1; j++)
       {
         cout<<j;
       }
       cout<<endl;
    }
}

void  print7(int n){
    
     for (int  i = 0; i <n; i++)
    {
        // it for a colum  in count  a row 
        // space
       for (int  j = 0; j < n-i-1; j++)
       {
         cout<<" ";
       }
       //  print *
       for (int  j = 0; j < 2*i+1; j++)
       {
        cout<<"*";
       }
       for (int  j = 0; j < n-i-1; j++)
       // pint  space
       {
        cout<<" ";
       }
          cout<<endl;
       
    }


}

int main(){
int t;
cin>>t;
    print7(t);
return 0;
}


