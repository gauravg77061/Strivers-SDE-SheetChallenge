#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();
    vector<vector<int>>vt;
    sort(intervals.begin(),intervals.end());
    vt.push_back(intervals[0]);
    for (int i = 1; i < n; i++) {
        int p1=vt.back()[0];
        int p2=vt.back()[1];
        int c1=intervals[i][0];
        int c2=intervals[i][1];
        if (p2>=c1) {
          if (p2 <= c2) {
              vt.pop_back();
              vt.push_back({p1,c2});
          }
          else{
              continue;
          }
        } 
        else {
            vt.push_back(intervals[i]);
        }
    }
    return vt;
}
