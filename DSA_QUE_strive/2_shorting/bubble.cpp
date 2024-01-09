#include<iostream>
using namespace std;

 void bubble_sort(int arr[], int n){
    //   create a for loop 
    for (int  i = 0; i < n-1; i++)
    {
        
      for (int  j = i+1; j < n; j++)
      {
        if (arr[j]<arr[i])
        {
            int temp = arr[j];
             arr[j]= arr[i];
             arr[i]= temp;
        }
      }
     
        
    }

    cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

 }
int main(){


int arr[] ={13,46,24,52,20,9};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<" before selection  short"<<endl;
for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
//  function  call  

bubble_sort(arr, n);
return 0;
}
