#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
 vector< vector<long long int>>nums;
 nums.push_back({1});
  for(int i=1; i<n; i++){
    vector<long long int>r(i+1);
    r[0]=1;
    r[i]=1;
    for(int j=1;j<r.size()-1;j++){
      if (j < i + 1) {
        
        r[j]=nums[i-1][j-1]+nums[i-1][j];
      } 
      else {
        r[j]=nums[i-1][j];
      }
    }
    nums.push_back(r);
  }
  return nums;
}
