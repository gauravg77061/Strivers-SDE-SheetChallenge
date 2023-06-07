#include <bits/stdc++.h>
using namespace std;
int uniqueSubstrings(string s) {
  // Write your code here
  int i = 0;
  int j=0;
  int n = s.length();
  map<char,int>mp;
  int ans=0;
  while (i < n) {
      char ch=s[i];
      mp[ch]++;
      while (j < i && mp[ch]>1) {
          mp[s[j]]--;
          j++;
      }
      i++;
      ans=max(ans,i-j);
  }
  return ans;
}
