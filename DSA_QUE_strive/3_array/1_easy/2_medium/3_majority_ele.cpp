#include<bits/stdc++.h>
using namespace std;
int majorityele( vector<int> v){
    int n =   v.size();
     
     for (int  i = 0; i < n; i++)
     {
        int cnt=0;
        for (int  j= 0;  j< n; j++)
        {
            if (v[j]==v[i])
            {
                cnt+=1;
            }
            
        }
        if (cnt >(n/2))
        {
           return v[i];
        }
        
     }
     return -1;
    }
int main(){
vector<int> arr ={2,2,1,1,1,2,2};
int ans = majorityele(arr);
cout<< ans;

return 0;
}
