// #include<iostream>
// using namespace std;
// void leftrotate (int arr[],int n){
//     // dummy  aerray
//     int temp[n];
//     for (int  i = 1; i < n; i++)
//     {
//         temp[i-1]= arr[i];
//     }
//     temp[n-1]=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//       cout<<temp[i]<<" ";
//     }
    
    
// }
// int main(){
//    int n = 7;
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};

//   leftrotate(arr, n);
 
// return 0;
// }

#include<iostream>
using namespace std;
void leftrotate (int arr[],int n){
    // dummy  aerray
    int temp= arr[0];
    for (int  i = 1; i < n; i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
}
int main(){
int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};

  leftrotate(arr, n);
 
return 0;
}
