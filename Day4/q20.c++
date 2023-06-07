#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
   // int n=arr.size();
   sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
          int lo=j+1;
          int hi=n-1;
          while (lo <= hi) {
              long long sum=arr[i]+arr[j]+arr[lo]+arr[hi];
              if (sum == target) {
                  return "Yes";
              } 
              else if (sum > target) {
                  hi--;
              } 
              else {
                  lo++;
              }
          }
      }
    }
    return "No";
}
