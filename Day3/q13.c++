#include<bits/stdc++.h>
using namespace std;
bool isPresent(int lo, int hi, vector<int> nums, int target) {
   
    int mid = lo+(hi-lo)/2;
    while (lo <= hi) {
        
    int mid = lo+(hi-lo)/2;
      if (nums[mid] == target) {
          return true;
      }
       else if (nums[mid] > target) {
           hi=mid-1;
      }
       else {
           lo=mid+1;
      }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
     int n=mat.size();
     int m=mat[0].size();
     for (int i = 0; i < n; i++) {
       if (isPresent(0, m, mat[i], target) == true) {
           return true;
       }
     }
     return false;
}