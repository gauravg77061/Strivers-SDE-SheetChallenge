#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    vector<int>vt;
    int val1=INT_MIN;
    int val2=INT_MIN;
    int cnt1=0;
    int cnt2=0;
    for (int i = 0; i < n; i++) {
      if (cnt1 == 0 && val2 != arr[i]) {
              cnt1++;
              val1=arr[i];
      }

       else if (cnt2 == 0 && val1 != arr[i]) {
          cnt2++;
          val2=arr[i];
      }
      
       else if (arr[i] == val1) {
           cnt1++;
      }

      else if (arr[i]==val2) {
          cnt2++;
      }

      else {
      cnt1--;
      cnt2--;
      }
    }
    cnt1=0;
    cnt2=0;
    for (int i = 0; i < n; i++) {
      if (val1 == arr[i]) {
          cnt1++;
      }

      if (val2 == arr[i]) {
          cnt2++;   
      }
    }
    int val=(n/3)+1;
    if (cnt1 >= val) {
        vt.push_back(val1);
    }
    if (cnt2 >= val) {
        vt.push_back(val2);
    }
    return vt;
}