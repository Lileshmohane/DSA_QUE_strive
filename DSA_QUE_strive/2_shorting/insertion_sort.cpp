#include<iostream>
using namespace std;

 void insertion_sort(int arr[], int n){
    //   create a for loop 
    for (int  i = 0; i <=n-1; i++)
    {
      int j=i;
      while (j>0 && arr[j-1]>arr[j])
      {
        int temp = arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
      }
      
      }
     
        
    }
int main(){


int arr[] ={13,46,24,52,20,9};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<" before selection  short"<<endl;
insertion_sort(arr, n);
for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
//  function  call  


return 0;
}
