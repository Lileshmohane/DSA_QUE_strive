// print apilit 2d arr
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3][3];
for (int  i = 0; i <3; i++)
{
  for (int  j = 0; j <3; j++)
  {
   cin>>arr[i][j];     
  }
}
int row= arr.size();
int col=arr[0].size();
//  spiral  a array
int count = 0;
int tota =row*col;   
int i,j; 
int start_row  = 0;
int end_row    = i-1;
int start_col  = 0; 
int end_col    = j-1;
//  for row indexing 
while (start_row<=end_row && start_col<=end_col)
{    
for (int  col = start_col; col < end_col; col++)
{
  cout<<arr[start_row][col]<<" ";
}
start_col++;
for (int row =start_row; row < end_row; row++)
{
  cout<<arr[start_col][row]<<" ";
}
start_row++;
for (int col =end_col; col < start_col; col++)
{
   cout<<arr[start_row][col]<<" ";
}
start_row++;
for (int row =end_row; row < start_row; row--)
{
   cout<<arr[start_col][row]<<" ";
}
start_col++;

}
for (int  i = 0; i <3; i++)
{
    
  for (int  j = 0; j <3; j++)
  {
      cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}