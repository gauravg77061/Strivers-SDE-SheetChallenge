#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
  int strt=0;
  int end=n-1;
  int i=0;
  while (i <= end) {
    if (arr[i] == 0) {
       swap(arr[strt],arr[i]);
       strt++;
       i++;
    } 
    else if (arr[i] == 2) {
       swap(arr[i],arr[end]);
       end--;
       
    } 
    else if(arr[i]==1) {
       i++;
    }
  }
}