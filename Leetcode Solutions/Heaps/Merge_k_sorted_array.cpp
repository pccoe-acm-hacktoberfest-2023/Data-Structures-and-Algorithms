#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>v;
    
    
    for(int i=0;i<k;i++){
        int m=kArrays[i].size();
        for(int j=0;j<m;j++){
                pq.push(kArrays[i][j]);
        }
    }
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;

}
