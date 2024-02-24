#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int>a){

    int n=  a.size();
    int repeat = -1 ,missing = -1;
    for (int  i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            if (a[j]==i)
            {
                cnt++;
            }
        }
        if (cnt==2)
        {
           repeat =i;
        }
        else if (cnt==0)
        {
            missing=i;
        }
           if (repeat != -1 && missing != -1)
            break;
    }
     return {repeat, missing};
}
int main(){
 vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
return 0;
}
