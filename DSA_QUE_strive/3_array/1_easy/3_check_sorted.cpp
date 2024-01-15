#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]<arr[i+1])
        {
           return  true ;
        }
            return  false ;
    }

    
}
int main(){
int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = sorted(arr1, n);
  if (max)
  {
    cout << "array is sorted : " << endl;
  }
  else
  {
    cout<<"array  is not sorted"<<endl;
  }
  
return 0;
}
