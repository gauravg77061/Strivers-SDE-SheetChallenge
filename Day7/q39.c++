#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
  // Write your code here.
  sort(arr.begin(),arr.end());
  vector<vector<int>>ans;
  for (int i = 0; i < n-2; i++) {
	  int lo=i+1;
	  int hi=n-1;
          while (lo < hi) {
			  int sum=arr[i]+arr[lo]+arr[hi];
			  //vector<int>vt;
			  if(sum==K){
				 
				  ans.push_back({arr[lo],arr[hi],arr[i]});
				  lo++;
				  hi--;
			  }
			  else if(sum>K){
				  hi--;
			  }
			  else{
				  lo++;
			  }
          }
  }
  sort(ans.begin(),ans.end());
  ans.erase(unique(ans.begin(),ans.end()),ans.end());

  return ans;
}