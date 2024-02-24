#include<bits/stdc++.h>
using namespace std;
int numberofinversion(vector<int>&a , int n){

    int cnt =0;
    for (int  i = 0; i < n; i++)
    {
       for (int  j = i+1; i < n; j++)
       {
         if(a[i] > a[j]) cnt++;
       }
       
    }
    
}


int main(){

vector<int> a= {5,4,3,2,1};
int n =5;
int cnt =numberofinversion(a,n);
cout<<"the numberr of inversion"<<cnt <<endl;
return 0;
}
