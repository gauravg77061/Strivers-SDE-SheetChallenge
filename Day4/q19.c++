#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
  int n=arr.size();
  map<int,int>mp;
  vector<vector<int>>vt;
  for (auto it : arr) {
     int val=s-it;
     if (mp.find(val) != mp.end()) {
        vector<int>nums;
        int cnt=mp[val];
        while (cnt > 0) {
           nums.push_back(min(it,val));
           nums.push_back(max(val,it));
           vt.push_back(nums);
           cnt--;
        }
     } 
       mp[it]++;
     
  }
  sort(vt.begin(),vt.end());
  return vt;
}