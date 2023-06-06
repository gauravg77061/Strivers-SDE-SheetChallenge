

#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int>nums(n+1,-1);
	int re=0;
	int mi=0;
        for (auto it : arr) {
          if (nums[it] != -1) {
			  re=it;
          }
		   else {
			   nums[it]=it;
          }
        }
        for (int it=0;it<nums.size();it++) {
          if (nums[it] == -1) {
			  mi=it;
          }
        }
		return{mi,re};
}
