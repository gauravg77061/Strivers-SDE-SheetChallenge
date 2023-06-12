int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int cnt=0;
    int maxi=0;
    int j=0;
    int i=0;
    while(i<n){
         if(arr[i]==0){
             cnt++;
         }
         while( j<i && cnt>k){
             if(arr[j]==0){
                 cnt--;
             }
             j++;
         }
         maxi=max(maxi,i-j+1);
         i++;
    }
    return maxi; 
}

