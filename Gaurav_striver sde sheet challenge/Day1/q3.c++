#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
    int ind=-1;
    for (int i = n - 2; i >= 0; i--) {
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }
    if (ind == -1) {
        reverse(nums.begin(),nums.end());
        return nums;
    }
    int val=nums[ind];

    for(int i=n-1;i>ind;i--){
      if (nums[i] > val) {
          swap(nums[i],nums[ind]);
          break;
      }
    }
     
    reverse(nums.begin()+ind+1,nums.end());
    return nums;
    //   
}