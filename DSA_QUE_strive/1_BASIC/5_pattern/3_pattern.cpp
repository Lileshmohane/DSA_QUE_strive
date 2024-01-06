#include<iostream>
using namespace std;
  //  print 
  void print1(int n){
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
      
          cout<<endl;
       
    }
    for (int  i = 0; i <n; i++)
    {
        // it for a colum  in count  a row 
        // space
       for (int  j = 0; j <i; j++)
       {
         cout<<" ";
       }
       //  print *
       for (int  j = 0; j < 2*n-2*i-1; j++)
       {
       
            cout<<"*";
        
       }
      
          cout<<endl;
       
    }
    
  }

int main(){
int n;
cin>>n;
print1(n);
return 0;
}
