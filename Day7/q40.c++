#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
   long pre[n];
   long suff[n];

   pre[0]=arr[0];
   for (int i = 1; i < n; i++) {
       pre[i]=max(pre[i-1],arr[i]);
   }
   suff[n-1]=arr[n-1];
   for (int i = n - 2; i >= 0; i--) {
       suff[i]=max(suff[i+1],arr[i]);
   }
   long water=0;
   for (int i = 1; i < n-1; i++) {
       water+=min(suff[i],pre[i])-arr[i];
   }
   return water;
}