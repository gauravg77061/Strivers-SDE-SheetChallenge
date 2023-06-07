#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
   // int n=arr.size();
//    unordered_set<int>st;
//    int maxi=0;
//    for (auto it : arr) {
//        st.insert(it);
//    }
//    int cnt=1;
//    for (auto it : arr) {
//        int val=it+1;
//        if(st.find(val-1))
//        while (st.find(val) != st.end()) {
//            cnt++;
//            val++;
//        }
//        maxi=max(maxi,cnt);
//        cnt=1;
//    }
//    return maxi;
  sort(arr.begin(),arr.end());

    int maxLength = 0;

    int count = 1;

 

    for(int i = 1; i < n; i++)

    {

        if(arr[i]==arr[i-1])

            continue;

        else if(arr[i] == arr[i-1]+1)

            count++;

        else{

            maxLength = max(maxLength, count);

            count = 1;

        }

    }

    maxLength = max(maxLength, count);

    return maxLength;
 }