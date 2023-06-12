int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int cnt=0;
        for (int i = 0; i < n; i++) {
			cnt++;
			int val=arr[i];
			int j=i+1;
			while (j < n && val == arr[j]) {
				j++;
			}
			i=j-1;
        }
		return cnt;
}