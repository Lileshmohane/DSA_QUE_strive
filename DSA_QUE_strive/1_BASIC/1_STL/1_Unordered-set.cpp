#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_set<int> s;
//insert
for (int  i = 0; i <10; i++)
{
  s.insert(i);
}
  cout << "Elements present in the unordered set: ";

for (auto  i = s.begin(); i !=s.end(); i++)
{
   cout<<*i<<" ";
}
int n=2;
if (s.find(2)!=s.end())
{
   cout<<n<<" element is not present ";
}
s.erase(s.begin(),s.end());
for (auto  i = s.begin(); i !=s.end(); i++)
{
   cout<<*i<<" ";
}
cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == true)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
return 0;
}