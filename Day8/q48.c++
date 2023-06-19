#include<bits/stdc++.h>
struct job{
    int start;
    int end;
};
bool comp(struct job a, struct job b) {
    return a.end<b.end;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
  // Write your code here.
  int n=start.size();
  struct job j[n];
  for (int i = 0; i < n; i++) {
      j[i].start=start[i];
      j[i].end=finish[i];
  }

    sort(j,j+n,comp);
    int ans=1;
    int end=j[0].end;
    for (int i = 1; i < n; i++) {
      if (j[i].start >= end) {
          end=j[i].end;
          ans++;
      } 
     
    }
    return ans;
}