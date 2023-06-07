#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
  map<int,int>mp;
  int sum=0;
  int maxi=0;
  for (int i = 0; i < n; i++) {
    sum+=arr[i];
    if (sum == 0) {
      maxi=max(maxi,i+1);
    } 
    else {
      if (mp.find(sum) != mp.end()) {
        maxi=max(maxi,i-mp[sum]);
      } 
      else {
        mp[sum]=i;
      }
    }
  }
  return maxi;
}