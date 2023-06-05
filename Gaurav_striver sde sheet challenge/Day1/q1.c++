#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &m)
{
	// Write your code here.
	int n=m.size();
	int mo=m[0].size();
//	int r=m.size();
	set<int>r;
	set<int>c;
//	int c=m[0].size();
        for (int i = 0; i <n ; i++) {
			for(int j=0;j < mo;j++){
				if(m[i][j]==0){
                     r.insert(i);
					 c.insert(j);
                 }
                        }
		}
                for (int i = 0; i < n; i++) {
                  for (int j = 0; j < mo; j++) {
                    if ((r.find(i) != r.end()) || (c.find(j) != c.end())) {
                      m[i][j]=0;
					}
                  }
                }
}