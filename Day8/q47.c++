#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int arr[]={1000,500,100,50,20,10,5,2,1};
    int ans=0;
    int curr=0;
    for (int i = 0; i < 9; i++) {
        
        int val=arr[i];
        while(curr+val<=amount){
            curr+=val;
            //amount-=val;
            ans+=1;
        }
        if (amount == 0) {
            break;
        }
    }
    return ans;
}
