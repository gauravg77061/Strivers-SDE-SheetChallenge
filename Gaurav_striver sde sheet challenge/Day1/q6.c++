#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans=0;
    int mini=INT_MAX;
    int sum=0;
    for (auto it : prices) {
      if (mini <it) {
          ans=max(ans,it-mini);
      }
      if (mini > it) {
          mini=it;
      }
    }
    return ans;
}