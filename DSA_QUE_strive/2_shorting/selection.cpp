#include<iostream>
using namespace std;
// section  short 
 void section_sort(int arr[], int n){
    // First, we will select the range of the unsorted array using a loop (say i) that indicates the starting index of the range.
// The loop will run forward from 0 to n-1. The value i = 0 means the range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on.
// (Initially, the range will be the whole array starting from the first index.)

    //   create a for loop 
    for (int  i = 0; i < n-1; i++)
    {
        int mini=i;
      for (int  j = i+1; j < n; j++)
      {
        if (arr[j]<arr[mini])
        {
            mini =j;
        }
      }
      int temp = arr[mini];
      arr[mini]= arr[i];
      arr[i]= temp;
        
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

section_sort(arr, n);
return 0;
}
