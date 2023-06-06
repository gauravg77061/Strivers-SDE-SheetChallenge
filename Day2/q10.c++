#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	set<int>st;
	int ans=0;
        for (auto it : arr) {
          if (st.find(it) == st.end()) {
			  st.insert(it);
          } 
		  else {
			  ans=it;
			  break;
          }
        }
		return ans;
}
