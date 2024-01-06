#include<iostream>
using namespace std;
//  check  a  string is palindrome or not  using recursion
bool palindrom(int i  ,string& s){
//  base case
if(i>s.length()/2)
return true;
 if (s[i]!=s[(s.length()-1)-i]) return false ;
 return palindrom(i+1,s);
}
int main(){
string  s="ABCDDBA";
   int d= palindrom(0 ,s);
   cout<<endl;
  if (d)
  {
   cout<<"yes";

  }
  else
  {
   cout<<"no";
  }
  
return 0;
}


