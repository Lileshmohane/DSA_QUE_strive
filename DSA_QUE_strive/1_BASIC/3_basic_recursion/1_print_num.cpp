#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //  basea case 
    if (n==0)
    {
        return;
    }
    //  recurence relation
     
    print(n-1);
   // memory 
  cout<<n<<" ";
}
int main(){
int n;
cout<<"enter a number :";
cin>>n;
print (n);
return 0;
}

