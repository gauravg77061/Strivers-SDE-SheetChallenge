#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt=0;
	int val;
        for (int i = 0; i < n; i++) {
          if (cnt == 0) {
			  cnt++;
			  val=arr[i];
          }
		   else if (val == arr[i]) {
			   cnt++;
          }
		   else {
			   cnt--;
          }
        }
		cnt=0;
                for (int i = 0; i < n; i++) {
                  if (arr[i] == val) {
					  cnt++;
                  }
                }
                if (cnt > n / 2) {
					return val;
                }
				return -1;
}