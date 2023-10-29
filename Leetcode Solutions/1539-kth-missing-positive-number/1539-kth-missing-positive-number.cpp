class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // unordered_map<int,int>m;
        // for(int i: arr) m[i]++;
        // for(int i=1;; i++){
        //     if(m[i] == 0) k--;
        //     if(k==0) return i;
        // }
        // return -1;
        for(int i: arr) if(i<=k) k++;
        return k; // beacause those many elements were there in the array
    }
};