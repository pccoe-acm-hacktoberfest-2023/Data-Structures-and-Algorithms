#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.

	priority_queue<int>pq;
	vector<int>v;

	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			int ans=a[i]+b[j];


			pq.push(ans);
			

			

		}
	}

			while(k--){
				v.push_back(pq.top());
				pq.pop();
			}
			return v;
	
}