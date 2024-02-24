#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>&num){
    int result = INT_MIN;
    for (int  i = 0; i < num.size()-1; i++)
    {
       for (int  j= i+1; j<num.size() ;  j++)
       {
        int prod= 1;
         for (int k = i; k <=j; k++)
         {
            prod *=  num[k];
         }
         result  =  max(result,  prod);
       }
       
    }
    return  result;
    
}
int main(){
vector<int>  arr= {1,2,-6,-3,5,4};
int ans =  maxproduct(arr);
cout<<" ans is "<< ans<< endl;

return 0;
}
